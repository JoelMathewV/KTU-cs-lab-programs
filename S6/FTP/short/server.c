#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

#define MAX 4096
#define PORT 5035

int main() {
    int sockfd, newsockfd, len;
    struct sockaddr_in server, client;
    char filename[MAX], buffer[MAX];
    FILE *file;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons(PORT);

    bind(sockfd, (struct sockaddr*)&server, sizeof(server));
    listen(sockfd, 5);

    len = sizeof(client);
    newsockfd = accept(sockfd, (struct sockaddr*)&client, &len);
    close(sockfd);
    read(newsockfd, filename, MAX);
    printf("Client message\nFile Name: %s\n", filename);

    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        close(newsockfd);
        return 0;
    }

    while (fgets(buffer, MAX, file) != NULL) {
        write(newsockfd, buffer, strlen(buffer));
    }

    fclose(file);
    close(newsockfd);
    printf("File Transferred\n");
    return 0;
}