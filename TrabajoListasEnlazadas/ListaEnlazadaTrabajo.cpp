#include <iostream>
#include <string>
using namespace std;

struct Curso {
    string nombre;
    Curso* prerequisito;
    Curso* siguiente;
};

// Función para agregar un curso a la lista enlazada
void agregarCurso(Curso*& cabeza, string nombre, Curso* prerequisito = NULL) {
    Curso* nuevo = new Curso{nombre, prerequisito, NULL};
    if (!cabeza) {
        cabeza = nuevo;
    } else {
        Curso* temp = cabeza;
        while (temp->siguiente) temp = temp->siguiente;
        temp->siguiente = nuevo;
    }
}

int main() {
    bool aproboAnalisisDisenoAlgoritmos;

    // Crear lista de cursos
    Curso* cursos = NULL;

    // Curso base sin prerrequisito
    agregarCurso(cursos, "Analisis y Diseno de Algoritmos");

    // Puntero al curso base para usar como prerequisito
    Curso* cursoBase = cursos;

    // Cursos que dependen del anterior
    agregarCurso(cursos, "Estructura de Datos", cursoBase);
    agregarCurso(cursos, "Lenguajes de Programacion I", cursoBase);

    cout << "¿Aprobaste el curso 'Analisis y Diseno de Algoritmos'? (1 = si, 0 = no): ";
    cin >> aproboAnalisisDisenoAlgoritmos;

    if (aproboAnalisisDisenoAlgoritmos) {
        cout << "Puedes llevar:\n";
        Curso* temp = cursos->siguiente; // Saltar el primero (curso base)
        while (temp) {
            cout << "- " << temp->nombre << endl;
            temp = temp->siguiente;
        }
    } else {
        cout << "No puedes llevar los cursos dependientes hasta aprobar 'Analisis y Diseno de Algoritmos'." << endl;
    }

    // Liberar memoria
    while (cursos) {
        Curso* temp = cursos;
        cursos = cursos->siguiente;
        delete temp;
    }

    return 0;
}
