#include <iostream>
#include <string>
using namespace std;

struct Procesador {
    string Marca;
    string Velocidad;
    string Nucleos;
};

int main() {
    Procesador procesadores[3];  // Arreglo de 3 procesadores

    // Ingreso de datos
    for (int i = 0; i < 3; i++) {
        cout << "Procesador #" << i + 1 << endl;
        cout << "Marca: ";
        getline(cin, procesadores[i].Marca);
        cout << "Velocidad (ej. 3.5 GHz): ";
        getline(cin, procesadores[i].Velocidad);
        cout << "Nucleos: ";
        getline(cin, procesadores[i].Nucleos);
        cout << endl;
    }

    // Mostrar los datos
    cout << "---- LISTA DE PROCESADORES ----" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Procesador #" << i + 1 << ": ";
        cout << "Marca: " << procesadores[i].Marca
             << ", Velocidad: " << procesadores[i].Velocidad
             << ", Nucleos: " << procesadores[i].Nucleos << endl;
    }

    return 0;
}

