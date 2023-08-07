#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netdb.h>
#include <time.h>  // Added for time functionality

int main(int argc, char* argv[]) {
    struct sockaddr_in server, client;
    if (argc != 3) {
        printf("Input format not correct\n");
        return 1;
    }
    int sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockfd == -1) {
        printf("Error in socket()\n");
        return 1;
    }
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons(atoi(argv[2]));
    char buffer[100];
    
    printf("Enter a message to be sent to the server: ");
    fgets(buffer, 100, stdin);

    // Get the current time
    time_t current_time;
    time(&current_time);
    
    // Convert the time to a string
    char time_str[30];
    snprintf(time_str, sizeof(time_str), "%s", ctime(&current_time));
    
    // Concatenate the message with the current time
    strcat(buffer, time_str);

    if (sendto(sockfd, buffer, sizeof(buffer), 0, (struct sockaddr*)&server, sizeof(server)) < 0) {
        printf("Error in sendto()\n");
        return 1;
    }
    return 0;
}