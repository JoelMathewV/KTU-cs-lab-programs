#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <string.h>
#include <unistd.h>

#define MAX_PACKETS 40

struct frame
{
    int packet[MAX_PACKETS];
};

struct ack
{
    int acknowledge[MAX_PACKETS];
};

int main()
{
    int clientsocket;
    struct sockaddr_in serveraddr;
    socklen_t len;
    struct hostent *server;
    struct frame *f1;
    int windowsize, totalpackets, totalframes, i = 0, j = 0, framesreceived = 0, k, l, buffer;
    struct ack acknowledgement;
    char req[50];

    clientsocket = socket(AF_INET, SOCK_DGRAM, 0);
    if (clientsocket == -1)
    {
        perror("Socket creation error");
        exit(EXIT_FAILURE);
    }

    memset((char *)&serveraddr, 0, sizeof(serveraddr));
    serveraddr.sin_family = AF_INET;
    serveraddr.sin_port = htons(5018);
    server = gethostbyname("127.0.0.1");
    if (server == NULL)
    {
        perror("Host not found");
        close(clientsocket);
        exit(EXIT_FAILURE);
    }
    memcpy((char *)&serveraddr.sin_addr.s_addr, (char *)server->h_addr, server->h_length);

    printf("sending request to the server\n");
    if (sendto(clientsocket, "HI IAM CLIENT", sizeof("HI IAM CLIENT"), 0, (struct sockaddr *)&serveraddr, sizeof(serveraddr)) == -1)
    {
        perror("Send error");
        close(clientsocket);
        exit(EXIT_FAILURE);
    }

    printf("\nWaiting for reply\n");
    recvfrom(clientsocket, req, sizeof(req), 0, (struct sockaddr *)&serveraddr, &len);
    printf("\n The server has to send: %s\n", req);

    printf("\nEnter the window size: ");
    scanf("%d", &windowsize);

    printf("\nSending window size\n");
    if (sendto(clientsocket, (char *)&windowsize, sizeof(windowsize), 0, (struct sockaddr *)&serveraddr, sizeof(serveraddr)) == -1)
    {
        perror("Send error");
        close(clientsocket);
        exit(EXIT_FAILURE);
    }

    printf("\nWaiting for the server response\n");
    recvfrom(clientsocket, (char *)&totalpackets, sizeof(totalpackets), 0, (struct sockaddr *)&serveraddr, &len);
    printf("\nTotal packets are: %d\n", totalpackets);

    if (sendto(clientsocket, "RECEIVED", sizeof("RECEIVED"), 0, (struct sockaddr *)&serveraddr, sizeof(serveraddr)) == -1)
    {
        perror("Send error");
        close(clientsocket);
        exit(EXIT_FAILURE);
    }

    recvfrom(clientsocket, (char *)&totalframes, sizeof(totalframes), 0, (struct sockaddr *)&serveraddr, &len);
    printf("\nTotal number of frames or windows are: %d\n", totalframes);

    if (sendto(clientsocket, "RECEIVED", sizeof("RECEIVED"), 0, (struct sockaddr *)&serveraddr, sizeof(serveraddr)) == -1)
    {
        perror("Send error");
        close(clientsocket);
        exit(EXIT_FAILURE);
    }

    printf("\nStarting the process of receiving\n");

    f1 = (struct frame *)malloc(sizeof(struct frame));
    if (f1 == NULL)
    {
        perror("Memory allocation failed");
        close(clientsocket);
        exit(EXIT_FAILURE);
    }

    while (i < totalpackets)
    {
        printf("\nInitializing the received buffer\n");
        printf("\nThe expected frame is %d with packets:", framesreceived);
        j = 0;
        buffer = i;

        while (j < windowsize && i < totalpackets)
        {
            printf("%d", i);
            f1->packet[j] = i;
            i++;
            j++;
        }

        printf("\nWaiting for the frame\n");
        recvfrom(clientsocket, (char *)f1, sizeof(struct frame), 0, (struct sockaddr *)&serveraddr, &len);
        printf("\nReceived frame %d\nEnter -1 to send negative acknowledgment for the following packets\n", framesreceived);

        j = 0;
        l = buffer;
        k = 0;

        while (j < windowsize && l < totalpackets)
        {
            printf("\nPacket: %d\n", f1->packet[j]);
            scanf("%d", &acknowledgement.acknowledge[j]);
            if (acknowledgement.acknowledge[j] == -1)
            {
                if (k == 0)
                {
                    i = f1->packet[j];
                    k = 1;
                }
            }
            j++;
            l++;
        }
        framesreceived++;

        if (sendto(clientsocket, (char *)&acknowledgement, sizeof(acknowledgement), 0, (struct sockaddr *)&serveraddr, sizeof(serveraddr)) == -1)
        {
            perror("Send error");
            close(clientsocket);
            free(f1);
            exit(EXIT_FAILURE);
        }
    }

    printf("\nAll frames received successfully\nClosing connection with the server\n");
    close(clientsocket);
    free(f1);
    return 0;
}