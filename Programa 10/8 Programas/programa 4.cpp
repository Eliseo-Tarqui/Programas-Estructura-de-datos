#include <iostream>
#include <string>
using namespace std;

struct USB {
    string Capacidad;
    string Marca;
    string Tipo;
};

int main() {
    USB usbs[3]; 

    for (int i = 0; i < 3; i++) {
        cout << "USB #" << i + 1 << endl;
        cout << "Capacidad: ";
        getline(cin, usbs[i].Capacidad);
        cout << "Marca: ";
        getline(cin, usbs[i].Marca);
        cout << "Tipo (ej. USB 3.0): ";
        getline(cin, usbs[i].Tipo);
        cout << endl;
    }


    cout << "---- LISTA DE DISPOSITIVOS USB ----" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "USB #" << i + 1 << ": ";
        cout << "Capacidad: " << usbs[i].Capacidad
             << ", Marca: " << usbs[i].Marca
             << ", Tipo: " << usbs[i].Tipo << endl;
    }

    return 0;
}

