#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 9090
#define BUFFER_SIZE 1024

void send_file_contents(int client_socket, char *filename) {
    FILE *file = fopen(filename, "r");
    char buffer[BUFFER_SIZE];

    if (file == NULL) {
        strcpy(buffer, "File not found\n");
        send(client_socket, buffer, strlen(buffer), 0);
    } else {
        while (fgets(buffer, BUFFER_SIZE, file) != NULL) {
            send(client_socket, buffer, strlen(buffer), 0);
        }
        fclose(file);
    }
}

int main() {
    int server_fd, client_socket;
    struct sockaddr_in server_addr, client_addr;
    socklen_t addr_len = sizeof(client_addr);
    char filename[BUFFER_SIZE];

    // Create socket
    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd == -1) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    // Configure server address
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(PORT);

    // Bind socket
    if (bind(server_fd, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
        perror("Bind failed");
        exit(EXIT_FAILURE);
    }

    // Listen for connections
    if (listen(server_fd, 5) < 0) {
        perror("Listen failed");
        exit(EXIT_FAILURE);
    }

    printf("Server listening on port %d...\n", PORT);

    // Accept client connection
    client_socket = accept(server_fd, (struct sockaddr *)&client_addr, &addr_len);
    if (client_socket < 0) {
        perror("Client accept failed");
        exit(EXIT_FAILURE);
    }

    printf("Client connected\n");

    while (1) {
        // Receive filename from client
        memset(filename, 0, BUFFER_SIZE);
        recv(client_socket, filename, BUFFER_SIZE, 0);
        filename[strcspn(filename, "\n")] = 0; // Remove newline character

        // Check for exit command
        if (strcmp(filename, "exit") == 0) {
            printf("Client disconnected.\n");
            break;
        }

        printf("Client requested file: %s\n", filename);

        // Send file contents to client
        send_file_contents(client_socket, filename);
    }

    // Close connections
    close(client_socket);
    close(server_fd);

    return 0;
}
