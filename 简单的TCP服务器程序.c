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

    // ��ʼ�� Winsock
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        printf("WSAStartup failed with error: %d\n", WSAGetLastError());
        return 1;
    }

    // ���� socket �ļ�������
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET) {
        printf("Socket failed with error: %ld\n", WSAGetLastError());
        WSACleanup();
        return 1;
    }

    // ���ӵ��˿ڣ����� socket ѡ��
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, (char *)&opt, sizeof(opt)) == SOCKET_ERROR) {
        printf("Setsockopt failed with error: %ld\n", WSAGetLastError());
        closesocket(server_fd);
        WSACleanup();
        return 1;
    }
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    // �� socket �󶨵��˿�
    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) == SOCKET_ERROR) {
        printf("Bind failed with error: %d\n", WSAGetLastError());
        closesocket(server_fd);
        WSACleanup();
        return 1;
    }

    // �������������
    if (listen(server_fd, 3) == SOCKET_ERROR) {
        printf("Listen failed with error: %d\n", WSAGetLastError());
        closesocket(server_fd);
        WSACleanup();
        return 1;
    }

    // ���ܴ��������
    if ((new_socket = accept(server_fd, (struct sockaddr *)&address, &addrlen)) == INVALID_SOCKET) {
        printf("Accept failed with error: %d\n", WSAGetLastError());
        closesocket(server_fd);
        WSACleanup();
        return 1;
    }

    // ��ȡ�ͻ�����Ϣ
    int valread = recv(new_socket, buffer, BUFFER_SIZE, 0);
    if (valread == SOCKET_ERROR) {
        printf("Recv failed with error: %d\n", WSAGetLastError());
        closesocket(new_socket);
        closesocket(server_fd);
        WSACleanup();
        return 1;
    }
    printf("Message from client: %s\n", buffer);

    // ���ͻ�Ӧ���ͻ���
    if (send(new_socket, hello, strlen(hello), 0) == SOCKET_ERROR) {
        printf("Send failed with error: %d\n", WSAGetLastError());
    }
    printf("Hello message sent\n");

    // �ر�����
    closesocket(new_socket);
    closesocket(server_fd);
    WSACleanup();
    return 0;
}

