#include <iostream>
#include <string>
using namespace std;

struct Silla {
    string Altura;
    string Medida;
    string Resistencia;
};

int main() {
    Silla sillas[3];  
    
    for (int i = 0; i < 3; i++) {
        cout << "Silla #" << i + 1 << endl;
        cout << "Altura: ";
        getline(cin, sillas[i].Altura);
        cout << "Medida: ";
        getline(cin, sillas[i].Medida);
        cout << "Resistencia: ";
        getline(cin, sillas[i].Resistencia);
        cout << endl;
    }
    cout << "LISTA DE SILLAS" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Silla #" << i + 1 << ": ";
        cout << "Altura: " << sillas[i].Altura
             << ", Medida: " << sillas[i].Medida
             << ", Resistencia: " << sillas[i].Resistencia << endl;
    }

    return 0;
}

