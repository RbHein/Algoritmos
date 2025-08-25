#ifdef _WIN32
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib")  
#endif

#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include <map>
#include <cstring>  

#ifdef _WIN32
WSADATA wsaData;
#endif

std::mutex clientMutex;
std::map<int, std::string> clients;

void handleClient(int clientSocket) {
    clientMutex.lock();
    clients[clientSocket] = "Cliente " + std::to_string(clientSocket);
    std::cout << "Cliente conectado: " << clients[clientSocket] << std::endl;
    clientMutex.unlock();

    char buffer[1024];
    while (true) {
        int bytesReceived = recv(clientSocket, buffer, sizeof(buffer), 0);
        if (bytesReceived <= 0) {
            std::cout << "Cliente desconectado: " << clients[clientSocket] << std::endl;
            break;
        }

        buffer[bytesReceived] = '\0';
        std::cout << "Mensagem de " << clients[clientSocket] << ": " << buffer << std::endl;

        // Enviar confirmação de recebimento
        std::string confirmation = "Mensagem recebida: " + std::string(buffer);
        send(clientSocket, confirmation.c_str(), confirmation.size(), 0);
    }

#ifdef _WIN32
    closesocket(clientSocket);
#else
    close(clientSocket);
#endif
}

int main() {
#ifdef _WIN32
    WSAStartup(MAKEWORD(2, 2), &wsaData); 
#endif

    int serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in serverAddr;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(8080);
    serverAddr.sin_addr.s_addr = INADDR_ANY;

    bind(serverSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr));
    listen(serverSocket, 5);

    std::vector<std::thread> threads;
    while (true) {
        int clientSocket = accept(serverSocket, NULL, NULL);
        threads.push_back(std::thread(handleClient, clientSocket));
    }

    for (auto& t : threads) {
        t.join();
    }

#ifdef _WIN32
    closesocket(serverSocket); 
    WSACleanup();  
#else
    close(serverSocket);
#endif

    return 0;
}
