#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#define MAX 4096
#define PORT 5035

int main() {
    int sockfd, n;
    struct sockaddr_in server;
    char filename[MAX], buffer[MAX];
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr("127.0.0.1");
    server.sin_port = htons(PORT);
    connect(sockfd, (struct sockaddr*)&server, sizeof(server));
    strcpy(filename, "file.txt");
    write(sockfd, filename, strlen(filename));

    while ((n = read(sockfd, buffer, MAX)) > 0) {
        buffer[n] = '\0';
        printf("%s", buffer);
    }
    close(sockfd);
    return 0;
}