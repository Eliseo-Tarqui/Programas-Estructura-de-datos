#include <bits/stdc++.h>

using namespace std;

int main() {
    int array[] = {3, 1, 4, 2, 5, 3}; // Puedes cambiar los valores
    int n = sizeof(array) / sizeof(array[0]);

    bool ok = true;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (array[i] == array[j]) ok = false;
        }
    }
    cout << "¿Todos unicos con fuerza bruta? " << (ok ? "Si" : "No") << endl;

    ok = true;
    sort(array, array + n);
    for (int i = 0; i < n - 1; i++) {
        if (array[i] == array[i + 1]) ok = false;
    }
    cout << "¿Todos unicos con sort? " << (ok ? "Si" : "No") << endl;

    return 0;
}

