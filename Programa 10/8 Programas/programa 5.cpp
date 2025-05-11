#include <iostream>
#include <string>
using namespace std;

struct DiscoDuro {
    string Capacidad;
    string Tipo;
    string Velocidad;
};

int main() {
    DiscoDuro discos[3];

    for (int i = 0; i < 3; i++) {
        cout << "Disco Duro #" << i + 1 << endl;
        cout << "Capacidad: ";
        getline(cin, discos[i].Capacidad);
        cout << "Tipo (HDD o SSD): ";
        getline(cin, discos[i].Tipo);
        cout << "Velocidad: ";
        getline(cin, discos[i].Velocidad);
        cout << endl;
    }

    cout << "---- LISTA DE DISCOS DUROS ----" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Disco Duro #" << i + 1 << ": ";
        cout << "Capacidad: " << discos[i].Capacidad
             << ", Tipo: " << discos[i].Tipo
             << ", Velocidad: " << discos[i].Velocidad << endl;
    }

    return 0;
}

