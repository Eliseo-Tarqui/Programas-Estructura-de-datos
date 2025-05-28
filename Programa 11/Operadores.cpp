#include <iostream>

using namespace std;

int main() {
	int var = 10;
	int* ptr = &var;
	
	cout << "El valor de var: " << var << endl;
	cout << "La direccion de memoria de var: " << &var << endl;
	cout << "El valor de ptr: " << ptr << endl;
	cout << "El valor apuntado por ptr: " << *ptr << endl;
	
	
	
	return 0;
}
