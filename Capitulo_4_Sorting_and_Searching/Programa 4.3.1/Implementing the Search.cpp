#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> array = {1, 3, 3, 4, 5, 5, 6, 9, 10, 12, 12, 15};
    int n = array.size();
    int x = 9;

    cout << "Método 1: Búsqueda binaria clásica\n";
    int a = 0, b = n - 1;
    bool found1 = false;
    while (a <= b) {
        int k = (a + b) / 2;
        if (array[k] == x) {
            cout << "Elemento " << x << " encontrado en índice " << k << endl;
            found1 = true;
            break;
        }
        if (array[k] < x) a = k + 1;
        else b = k - 1;
    }
    if (!found1) cout << "Elemento " << x << " no encontrado.\n";

    cout << "\nMétodo 2: Búsqueda binaria con saltos\n";
    int k = 0;
    for (int b = n / 2; b >= 1; b /= 2) {
        while (k + b < n && array[k + b] <= x) {
            k += b;
        }
    }
    if (array[k] == x) {
        cout << "Elemento " << x << " encontrado en índice " << k << endl;
    } else {
        cout << "Elemento " << x << " no encontrado.\n";
    }

    return 0;
}

