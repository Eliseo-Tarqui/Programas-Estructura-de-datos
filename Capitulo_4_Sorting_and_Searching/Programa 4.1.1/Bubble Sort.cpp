#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamanio del arreglo: ";
    cin >> n;

    int array[n];
    cout << "Ingrese " << n << " elementos:\n";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }

    cout << "Arreglo ordenado:\n";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    return 0;
}

