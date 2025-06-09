#include <iostream>
using namespace std;

int collatz(int n) {
    if (n % 2 == 0)
        return n / 2;
    else
        return 3 * n + 1;
}

void test_sin_uso(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
}

int test_con_uso(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    return s;
}

int contar_bits(int n) {
    int c = 0;
    for (int i = 1; i <= n; i++) {
        c += __builtin_popcount(i);
    }
    return c;
}

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    cout << "\n Resultados \n";

    cout << "collatz(" << n << ") = " << collatz(n) << endl;

    cout << "Suma de 1 hasta " << n << " (test_con_uso): " << test_con_uso(n) << endl;
    cout << "Cantidad total de bits '1' entre 1 y " << n << ": " << contar_bits(n) << endl;

    return 0;
}

