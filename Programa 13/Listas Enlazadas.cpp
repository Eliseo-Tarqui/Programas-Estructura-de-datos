#include <iostream> 
using namespace std;

struct Nodo {
	int valor;
	Nodo* siguiente;
};

void agregarNodo(Nodo*& cabeza, int valor) {
	Nodo* nuevoNodo = new Nodo();
	nuevoNodo->valor = valor;
	nuevoNodo->siguiente = NULL;
	
	if (cabeza == NULL) {
		cabeza = nuevoNodo;
	} else {
		Nodo* temp = cabeza;
		while (temp->siguiente != NULL) {
			temp = temp->siguiente;
		}
		temp ->siguiente = nuevoNodo;
	}
} 

void imprimirLista(Nodo* cabeza) {
	Nodo* temp = cabeza;
	while (temp != NULL) {
		cout << temp->valor << " -> ";
		temp = temp->siguiente;
	}
	cout << "NULL" << endl;
}
void eliminarLista(Nodo*& cabeza) {
	Nodo* temp;
	while (cabeza != NULL) {
		temp = cabeza;
		cabeza = cabeza->siguiente;
		delete temp;
	}
}

int main() {
	Nodo* lista = NULL;
	
	agregarNodo(lista, 10);
	agregarNodo(lista, 20);
	agregarNodo(lista, 30);
	cout << "Lista enlazada: ";
	imprimirLista(lista);
	eliminarLista(lista);	
	
	return 0;
}
