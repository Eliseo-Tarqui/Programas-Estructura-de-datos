#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

const int MAX_N = 2000;
const int M = 1e9 + 7; // Para la factorial

ll suma_cache_friendly(int n, const vector<vector<int>>& x) {
    ll s = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            s += x[i][j];
        }
    }
    return s;
}

ll suma_cache_unfriendly(int n, const vector<vector<int>>& x) {
    ll s = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            s += x[j][i];
        }
    }
    return s;
}

ll factorial_clasico(int n) {
    ll f = 1;
    for (int i = 1; i <= n; i++) {
        f = (f * i) % M;
    }
    return f;
}

ll factorial_paralelo(int n) {
    if (n <= 1) return 1;
    ll f1 = 1, f2 = 1;
    for (int i = 1; i <= n; i += 2) {
        f1 = (f1 * i) % M;
        if (i + 1 <= n)
            f2 = (f2 * (i + 1)) % M;
    }
    return (f1 * f2) % M;
}

int main() {
    int n;
    cout << "Ingrese un valor para n (sugerido <= 2000): ";
    cin >> n;

    vector<vector<int>> matriz(n, vector<int>(n, 1));

    cout << "\n--- Comparacion de acceso a cache ---\n";
    cout << "Suma cache-friendly (x[i][j]): " << suma_cache_friendly(n, matriz) << endl;
    cout << "Suma cache-unfriendly (x[j][i]): " << suma_cache_unfriendly(n, matriz) << endl;

    cout << "\n--- Calculo de factorial modulo M ---\n";
    cout << "Factorial clasico de " << n << ": " << factorial_clasico(n) << endl;
    cout << "Factorial paralelo de " << n << ": " << factorial_paralelo(n) << endl;

    return 0;
}
