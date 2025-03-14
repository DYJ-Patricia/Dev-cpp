#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <winsock2.h>
#include <ws2tcpip.h>

#pragma comment(lib, "Ws2_32.lib")

#define PORT 8080
#define BUFFER_SIZE 1024

int main() {
    WSADATA wsaData;
    int server_fd, new_socket;
    struct sockaddr_in address;
    int opt = 1;
    int addrlen = sizeof(address);
    char buffer[BUFFER_SIZE] = {0};
    char *hello = "Hello from server";

    // 初始化 Winsock
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        printf("WSAStartup failed with error: %d\n", WSAGetLastError());
        return 1;
    }

    // 创建 socket 文件描述符
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET) {
        printf("Socket failed with error: %ld\n", WSAGetLastError());
        WSACleanup();
        return 1;
    }

    // 附加到端口，设置 socket 选项
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, (char *)&opt, sizeof(opt)) == SOCKET_ERROR) {
        printf("Setsockopt failed with error: %ld\n", WSAGetLastError());
        closesocket(server_fd);
        WSACleanup();
        return 1;
    }
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    // 将 socket 绑定到端口
    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) == SOCKET_ERROR) {
        printf("Bind failed with error: %d\n", WSAGetLastError());
        closesocket(server_fd);
        WSACleanup();
        return 1;
    }

    // 监听传入的连接
    if (listen(server_fd, 3) == SOCKET_ERROR) {
        printf("Listen failed with error: %d\n", WSAGetLastError());
        closesocket(server_fd);
        WSACleanup();
        return 1;
    }

    // 接受传入的连接
    if ((new_socket = accept(server_fd, (struct sockaddr *)&address, &addrlen)) == INVALID_SOCKET) {
        printf("Accept failed with error: %d\n", WSAGetLastError());
        closesocket(server_fd);
        WSACleanup();
        return 1;
    }

    // 读取客户端消息
    int valread = recv(new_socket, buffer, BUFFER_SIZE, 0);
    if (valread == SOCKET_ERROR) {
        printf("Recv failed with error: %d\n", WSAGetLastError());
        closesocket(new_socket);
        closesocket(server_fd);
        WSACleanup();
        return 1;
    }
    printf("Message from client: %s\n", buffer);

    // 发送回应给客户端
    if (send(new_socket, hello, strlen(hello), 0) == SOCKET_ERROR) {
        printf("Send failed with error: %d\n", WSAGetLastError());
    }
    printf("Hello message sent\n");

    // 关闭连接
    closesocket(new_socket);
    closesocket(server_fd);
    WSACleanup();
    return 0;
}

