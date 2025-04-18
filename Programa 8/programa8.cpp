// programa 8

#include <iostream>
using namespace std;

int main() {
    const int TAM = 20;
    int numeros[TAM];
    bool yaContado[TAM] = {false};

    cout << "Ingresa 20 n�meros enteros (pueden repetirse):" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Numero #" << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "\nFrecuencia de cada numero distinto:\n";
    for (int i = 0; i < TAM; i++) {
        if (!yaContado[i]) {
            int contador = 1;
            for (int j = i + 1; j < TAM; j++) {
                if (numeros[i] == numeros[j]) {
                    contador++;
                    yaContado[j] = true;
                }
            }
            cout << numeros[i] << " aparece " << contador << " vez/veces." << endl;
        }
    }

    return 0;
}

