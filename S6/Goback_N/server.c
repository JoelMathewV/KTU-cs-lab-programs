#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h>

// structure definition for designing the packet.
struct frame
{
    int packet[40];
};

// structure definition for accepting the acknowledgement.
struct ack
{
    int acknowledge[40];
};

int main()
{
    int serversocket;
    struct sockaddr_in serveraddr, clientaddr;
    socklen_t len;
    struct frame f1;
    int windowsize, totalpackets, totalframes, i = 0, j = 0, framesend = 0, k, l, buffer;
    struct ack acknowledgement;
    char req[2]; // Changed the size to 2 for reading a single character.

    serversocket = socket(AF_INET, SOCK_DGRAM, 0);
    memset((char *)&serveraddr, 0, sizeof(serveraddr)); // Using memset instead of bzero.
    serveraddr.sin_family = AF_INET;
    serveraddr.sin_port = htons(5018);
    serveraddr.sin_addr.s_addr = INADDR_ANY;
    bind(serversocket, (struct sockaddr *)&serveraddr, sizeof(serveraddr));
    memset((char *)&clientaddr, 0, sizeof(clientaddr)); // Using memset instead of bzero.
    len = sizeof(clientaddr);

    // connection establishment.
    printf("\nwaiting for client connection");
    recvfrom(serversocket, req, sizeof(req), 0,
             (struct sockaddr *)&clientaddr, &len);
    printf("\nThe client connection obtained\t%s\n", req);

    // sending request for windowsize.
    printf("\nSending request for window size\n");
    sendto(serversocket, "REQUEST FOR WINDOWSIZE", sizeof("REQUEST FOR WINDOWSIZE"), 0,
           (struct sockaddr *)&clientaddr, sizeof(clientaddr));

    // obtaining windowsize.
    printf("Waiting for the window size\n");
    recvfrom(serversocket, (char *)&windowsize, sizeof(windowsize), 0,
             (struct sockaddr *)&clientaddr, &len);
    printf("\nThe window size obtained as:\t %d \n", windowsize);
    printf("\nObtaining packets from the network layer \n");
    printf("\nTotal packets obtained :%d\n", (totalpackets = windowsize * 5));
    printf("\nTotal frames or windows to be transmitted :%d\n", (totalframes = 5));

    // sending details to the client.
    printf("\nSending total number of packets \n");
    sendto(serversocket, (char *)&totalpackets, sizeof(totalpackets), 0,
           (struct sockaddr *)&clientaddr, sizeof(clientaddr));
    recvfrom(serversocket, req, sizeof(req), 0,
             (struct sockaddr *)&clientaddr, &len);

    printf("\nSending total number of frames \n");
    sendto(serversocket, (char *)&totalframes, sizeof(totalframes), 0,
           (struct sockaddr *)&clientaddr, sizeof(clientaddr));
    recvfrom(serversocket, req, sizeof(req), 0,
             (struct sockaddr *)&clientaddr, &len);

    printf("\nPress enter to start the process \n");
    getchar(); // Use getchar() to wait for the user to press Enter.

    // starting the process of sending
    while (i < totalpackets)
    {
        // initializing the transmit buffer.
        memset((char *)&f1, 0, sizeof(f1)); // Using memset instead of bzero.
        printf("\nInitializing the transmit buffer \n");
        printf("\nThe frame to be sent is %d with packets:", framesend);
        buffer = i;
        j = 0;

        // Building the frame.
        while (j < windowsize && i < totalpackets)
        {
            printf("%d", i);
            f1.packet[j] = i;
            j++;
            i++;
        }

        printf("\nsending frame %d\n", framesend);
        // sending the frame.
        sendto(serversocket, (char *)&f1, sizeof(f1), 0,
               (struct sockaddr *)&clientaddr, sizeof(clientaddr));

        // Waiting for the acknowledgment.
        printf("Waiting for the acknowledgment\n");
        recvfrom(serversocket, (char *)&acknowledgement, sizeof(acknowledgement), 0,
                 (struct sockaddr *)&clientaddr, &len);

        // Checking acknowledgement of each packet.
        j = 0;
        k = 0;
        l = buffer;
        while (j < windowsize && l < totalpackets)
        {
            if (acknowledgement.acknowledge[j] == -1)
            {
                printf("\nNegative acknowledgement received for packet:%d \n", f1.packet[j]);
                printf("\nRetransmitting from packet:%d \n", f1.packet[j]);
                i = f1.packet[j];
                k = l;
                break;
            }
            j++;
            l++;
        }

        if (k == 0)
        {
            printf("\nPositive acknowledgement received for all packets within the frame:%d \n", framesend);
        }
        framesend++;

        printf("\nPress enter to proceed \n");
        getchar(); // Use getchar() to wait for the user to press Enter.
    }

    printf("\nAll frames sent successfully\nClosing connection with the client\n");
    close(serversocket);

    return 0; // Added return statement to indicate successful execution.
}
