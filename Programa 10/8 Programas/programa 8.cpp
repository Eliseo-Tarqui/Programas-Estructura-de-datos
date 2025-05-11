#include <iostream>
#include <string>
using namespace std;

struct VariableEstadistica {
    string Nombre;
    string Tipo;
    string UnidadDeMedida;
};

int main() {
    VariableEstadistica variables[3];

    for (int i = 0; i < 3; i++) {
        cout << "Variable estadística #" << i + 1 << endl;
        cout << "Nombre de la variable: ";
        getline(cin, variables[i].Nombre);
        cout << "Tipo (Cualitativa o Cuantitativa): ";
        getline(cin, variables[i].Tipo);
        cout << "Unidad de medida: ";
        getline(cin, variables[i].UnidadDeMedida);
        cout << endl;
    }

    cout << "---- LISTA DE VARIABLES ESTADÍSTICAS ----" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Variable #" << i + 1 << ": ";
        cout << "Nombre: " << variables[i].Nombre
             << ", Tipo: " << variables[i].Tipo
             << ", Unidad de medida: " << variables[i].UnidadDeMedida << endl;
    }

    return 0;
}

