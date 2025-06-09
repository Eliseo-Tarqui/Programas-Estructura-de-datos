#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = (1 << 1) | (1 << 3) | (1 << 4) | (1 << 8);

    int y = (1 << 3) | (1 << 6) | (1 << 8) | (1 << 9);

    int z = x | y;
    cout << __builtin_popcount(z) << "\n"; 

    int inter = x & y;
    cout << "Interseccion: ";
    for (int i = 0; i < 32; i++) {
        if (inter & (1 << i)) cout << i << " ";
    }
    cout << "\n";

    int diff = x & (~y);
    cout << "Diferencia (x \\ y): ";
    for (int i = 0; i < 32; i++) {
        if (diff & (1 << i)) cout << i << " ";
    }
    cout << "\n";

    int comp = ~x;
    cout << "Complemento de x (primeros 10 bits): ";
    for (int i = 0; i < 10; i++) {
        if (comp & (1 << i)) cout << i << " ";
    }
    cout << "\n";

    return 0;
}
