#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 9090
#define BUFFER_SIZE 1024

int main() {
    int sock;
    struct sockaddr_in server_addr;
    char filename[BUFFER_SIZE], buffer[BUFFER_SIZE];

    // Create socket
    sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == -1) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    // Configure server address
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
    server_addr.sin_addr.s_addr = INADDR_ANY;

    // Connect to server
    if (connect(sock, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
        perror("Connection failed");
        exit(EXIT_FAILURE);
    }

    printf("Connected to server.\n");

    while (1) {
        // Get filename from user
        printf("\nEnter filename (or type 'exit' to quit): ");
        scanf("%s", filename);

        // Send filename to server
        send(sock, filename, strlen(filename), 0);

        // Check if user wants to exit
        if (strcmp(filename, "exit") == 0) {
            printf("Exiting...\n");
            break;
        }

        // Receive file contents from server
        memset(buffer, 0, BUFFER_SIZE);
        recv(sock, buffer, BUFFER_SIZE, 0);
        printf("\nServer Response:\n%s", buffer);
    }

    // Close socket
    close(sock);

    return 0;
}
