#include <iostream>
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib") // Librería para sockets

using namespace std;

int main() {
    WSADATA wsa;
    SOCKET server_sock, client_sock;
    struct sockaddr_in server, client;
    int c, numero, suma = 0;

    cout << "Iniciando servidor...\n";

    if (WSAStartup(MAKEWORD(2,2), &wsa) != 0) {
        cout << "Error al iniciar Winsock.\n";
        return 1;
    }

    server_sock = socket(AF_INET, SOCK_STREAM, 0);
    if (server_sock == INVALID_SOCKET) {
        cout << "Error al crear socket.\n";
        return 1;
    }

    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons(8888);

    if (bind(server_sock, (struct sockaddr*)&server, sizeof(server)) == SOCKET_ERROR) {
        cout << "Error al enlazar puerto.\n";
        return 1;
    }

    listen(server_sock, 3);
    cout << "Esperando conexiones en el puerto 8888...\n";

    c = sizeof(struct sockaddr_in);

    for (int i = 0; i < 2; i++) {
        client_sock = accept(server_sock, (struct sockaddr*)&client, &c);
        if (client_sock == INVALID_SOCKET) {
            cout << "Fallo al aceptar conexión.\n";
            continue;
        }

        recv(client_sock, (char*)&numero, sizeof(numero), 0);
        cout << "Numero recibido: " << numero << endl;
        suma += numero;
        closesocket(client_sock);
    }

    cout << "La suma de los numeros recibidos es: " << suma << endl;

    closesocket(server_sock);
    WSACleanup();
    return 0;
}
