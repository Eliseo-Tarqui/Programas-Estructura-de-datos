#include <iostream>
using namespace std;

void f(int n) {
    if (n == 1) return;
    f(n - 1);
}

void g(int n) {
    if (n == 1) return;
    g(n - 1);
    g(n - 1);
}

int main() {
    int a = 1, b = 1, c;

    a++;
    b++;
    c = a + b;
    cout << "c = " << c << endl;

    int n = 5;
    int m = 3;

    for (int i = 1; i <= n; i++) {
        cout << "O(n) i=" << i << endl;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "O(n^2) i=" << i << ", j=" << j << endl;
        }
    }

    for (int i = 1; i <= 3 * n; i++) {
        cout << "O(3n) i=" << i << endl;
    }

    for (int i = 1; i <= n + 5; i++) {
        cout << "O(n+5) i=" << i << endl;
    }

    for (int i = 1; i <= n; i += 2) {
        cout << "O(n/2) i=" << i << endl;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "O(n^2 triangular) i=" << i << ", j=" << j << endl;
        }
    }

    cout << "Fase 1" << endl;
    for (int i = 1; i <= n; i++) {
        cout << "Fase 1 i=" << i << endl;
    }

    cout << "Fase 2" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "Fase 2 i=" << i << ", j=" << j << endl;
        }
    }

    cout << "Fase 3" << endl;
    for (int i = 1; i <= n; i++) {
        cout << "Fase 3 i=" << i << endl;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << "O(nm) i=" << i << ", j=" << j << endl;
        }
    }

    int input_n;
    cout << "Ingrese n para f(n) y g(n): ";
    cin >> input_n;

    f(input_n); 

    if (input_n <= 10) {
        g(input_n);
    } else {
        cout << "n es muy grande, no ejecuto g(n) para evitar desbordamiento." << endl;
    }

    return 0;
}

