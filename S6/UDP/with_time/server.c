#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netdb.h>
#include <time.h>  // Added for time functionality

int main(int argc, char* argv[]) {
    struct sockaddr_in server, client;
    if (argc != 2) {
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
    server.sin_port = htons(atoi(argv[1]));
    
    if (bind(sockfd, (struct sockaddr*)&server, sizeof(server)) == -1) {
        printf("Error in bind()\n");
        return 1;
    }
    
    char buffer[100];
    socklen_t len = sizeof(client);
    
    // Wait for the message from the client
    int bytes_received = recvfrom(sockfd, buffer, sizeof(buffer), 0, (struct sockaddr*)&client, &len);
    if (bytes_received == -1) {
        printf("Error in recvfrom()\n");
        return 1;
    }
    
    // Null-terminate the received message
    buffer[bytes_received] = '\0';
    
    // Get the current time
    time_t current_time;
    time(&current_time);
    
    // Convert the time to a string
    char time_str[30];
    snprintf(time_str, sizeof(time_str), "%s", ctime(&current_time));
    
    // Print the received message and current time
    printf("Received message from client: %s", buffer);
    printf("Current server time: %s", time_str);
    
    return 0;
}