#include <iostream>
using namespace std;

int main() {
    int n, x;
    cout << "Ingrese el tamanio del arreglo: ";
    cin >> n;

    int a[n + 1];
    cout << "Ingrese los elementos del arreglo:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Ingrese el valor a buscar: ";
    cin >> x;

    bool ok1 = false;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) ok1 = true;
    }
    cout << "Resultado sin break: " << (ok1 ? "Encontrado" : "No encontrado") << endl;

    bool ok2 = false;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            ok2 = true;
            break;
        }
    }
    cout << "Resultado con break: " << (ok2 ? "Encontrado" : "No encontrado") << endl;

    a[n] = x;
    int i = 0;
    while (a[i] != x) {
        i++;
    }
    bool ok3 = (i < n);
    cout << "Resultado con centinela: " << (ok3 ? "Encontrado" : "No encontrado") << endl;

    return 0;
}

