// Diseña un programa que lea las calificaciones de 30 estudiantes, las almacene en
// un arreglo y calcule el promedio general. Además, muestra cuántos estudiantes 
// están por encima del promedio.

#include <iostream>

using namespace std;

int main() {
	int calificacion[30];
	int suma = 0;
	int promedio;
	
	for (int i = 0; i < 30; i++) {
		cout << "Ingrese la calificacion del estudiante " << i + 1 <<": " << endl;
		cin >> calificacion[i];
		suma += calificacion[i];
	}
	
	promedio = suma / 30;
	cout << "El promedio general es " << promedio;
	
	return 0;
}
