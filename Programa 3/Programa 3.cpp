// Programa 3.

#include <iostream>

using namespace std;

int area (int radio) {
	int pi = 3.14;
	int res = pi * (radio*radio);
	return res;
}
int main() {
	int p;
	cout <<"Ingrese el radio" << endl;
	cin >> p;
	int respuesta = area (p);
	cout << respuesta;
	return 0;
}
