#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>

#define PORT 80 // Porta padrão para verificação

// Função para verificar se a porta está aberta em um host
int check_port(const char *host, int port) {
    int sockfd;
    struct sockaddr_in target;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        perror("Erro ao criar socket");
        return -1;
    }

    target.sin_family = AF_INET;
    target.sin_port = htons(port);

    if (inet_pton(AF_INET, host, &(target.sin_addr)) <= 0) {
        perror("Erro ao converter endereço");
        close(sockfd);
        return -1;
    }

    // Tentar se conectar à porta
    if (connect(sockfd, (struct sockaddr *)&target, sizeof(target)) == 0) {
        printf("Porta %d aberta em %s\n", port, host);
        close(sockfd);
        return 0;
    } else {
        printf("Porta %d fechada em %s\n", port, host);
    }

    close(sockfd);
    return -1;
}

int main() {
    const char base_ip[] = "172.16.1.";
    char host[16]; // Tamanho suficiente para armazenar "192.168.1.xxx\0"

    // Lista de portas a serem verificadas
    int ports[] = {13, 37, 30000, 3000, 1337};

    // Iterar pelos hosts
    for (int i = 0; i <= 255; ++i) {
        snprintf(host, sizeof(host), "%s%d", base_ip, i);

        // Iterar pelas portas
        for (int j = 0; j < sizeof(ports) / sizeof(ports[0]); ++j) {
            check_port(host, ports[j]);
        }
    }

    return 0;
}
