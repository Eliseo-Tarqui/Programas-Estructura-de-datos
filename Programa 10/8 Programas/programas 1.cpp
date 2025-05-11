#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
    string Codigo;
    string Carrera;
    string Apellido;
    string Nombre;
};

int main() {
    Estudiante estudiantes[3];

    for (int i = 0; i < 3; i++) {
        cout << "Estudiante #" << i + 1 << endl;
        cout << "Codigo: ";
        cin >> estudiantes[i].Codigo;
        cout << "Carrera: ";
        cin.ignore();
        getline(cin, estudiantes[i].Carrera);
        cout << "Apellido: ";
        getline(cin, estudiantes[i].Apellido);
        cout << "Nombre: ";
        getline(cin, estudiantes[i].Nombre);
        cout << endl;
    }

    cout << "LISTA DE ESTUDIANTES" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Estudiante #" << i + 1 << ": ";
        cout << estudiantes[i].Nombre << " " << estudiantes[i].Apellido
             << ", Codigo: " << estudiantes[i].Codigo
             << ", Carrera: " << estudiantes[i].Carrera << endl;
    }

    return 0;
}

