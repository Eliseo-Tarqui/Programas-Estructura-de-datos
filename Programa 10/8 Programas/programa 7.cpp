#include <iostream>
#include <string>
using namespace std;

struct CableUTP {
    string Categoria;
    string Longitud;
    string Color;
};

int main() {
    CableUTP cables[3];  

    for (int i = 0; i < 3; i++) {
        cout << "Cable UTP #" << i + 1 << endl;
        cout << "Categoria (ej. Cat5e, Cat6): ";
        getline(cin, cables[i].Categoria);
        cout << "Longitud (ej. 10 metros): ";
        getline(cin, cables[i].Longitud);
        cout << "Color: ";
        getline(cin, cables[i].Color);
        cout << endl;
    }

    cout << "---- LISTA DE CABLES UTP ----" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Cable UTP #" << i + 1 << ": ";
        cout << "Categoria: " << cables[i].Categoria
             << ", Longitud: " << cables[i].Longitud
             << ", Color: " << cables[i].Color << endl;
    }

    return 0;
}

