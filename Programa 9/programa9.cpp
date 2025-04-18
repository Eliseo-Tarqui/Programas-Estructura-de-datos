// programa 9

#include <iostream>

using namespace std;

int main() {
    const int TAM = 10;
    int arreglo1[TAM], arreglo2[TAM];
    int contadorIguales = 0;

    cout << "Ingresa 10 elementos para el primer arreglo:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "Elemento #" << i + 1 << ": ";
        cin >> arreglo1[i];
    }

    cout << "\nIngresa 10 elementos para el segundo arreglo:\n";
    for (int i = 0; i < TAM; i++) {
        cout << "Elemento #" << i + 1 << ": ";
        cin >> arreglo2[i];
    }

    for (int i = 0; i < TAM; i++) {
        if (arreglo1[i] == arreglo2[i]) {
            contadorIguales++;
        }
    }

    cout << "\nCantidad de elementos iguales en la misma posición: " << contadorIguales << endl;

    return 0;
}

