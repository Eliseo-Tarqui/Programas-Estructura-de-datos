#include <iostream>
#include <string>
using namespace std;

struct IDE {
    string Nombre;
    string LenguajePrincipal;
    string SistemaOperativo;
};

int main() {
    IDE ides[3];  // Arreglo de 3 IDEs

    // Ingresar de datos
    for (int i = 0; i < 3; i++) {
        cout << "IDE #" << i + 1 << endl;
        cout << "Nombre del IDE: ";
        getline(cin, ides[i].Nombre);
        cout << "Lenguaje principal: ";
        getline(cin, ides[i].LenguajePrincipal);
        cout << "Sistema operativo compatible: ";
        getline(cin, ides[i].SistemaOperativo);
        cout << endl;
    }

    cout << "---- LISTA DE IDEs ----" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "IDE #" << i + 1 << ": ";
        cout << "Nombre: " << ides[i].Nombre
             << ", Lenguaje principal: " << ides[i].LenguajePrincipal
             << ", Sistema operativo: " << ides[i].SistemaOperativo << endl;
    }

    return 0;
}

