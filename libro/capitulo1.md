---
output:
  pdf_document: default
  html_document: default
---
# UNIVERSIDAD NACIONAL DEL ALTIPLANO

<p align="center">
  <img src="descargar.jpg" alt="Mi foto" width="320 "/>
</p>

## Facultad De Ingeniería Estadistica E Informática

**Alumno:** Eliseo Tarqui Ajahuana  
**Curso:** Estructura de datos  
**Ingeniero:** Fred Torres Cruz

## 📚 Indice

1. [Introducción](#introducción)
2. [Operadores](#operadores)
3. [Estructuras De Control](#estructuras-de-control)
4. [Funciones](#funciones)
5. [Arrays](#arrays)
6. [Funcion](#funcion)
7. [Operadores & y *](#operadores-and-asterisco)
8. [Listas enlazadas](#listas-enlazadas)
9. [Pilas](#pilas)
10. [Colas](#colas)
11. [Recursividad](#recursividad)

## Introducción
Las estructuras de datos son un modo de representar información en una computadora, aunque además, cuentan con un comportamiento interno. ¿Qué significa? Que se rige por determinadas reglas/restricciones que han sido dadas por la forma en que está construida internamente.

En el ámbito de la informática, las estructuras de datos son aquellas que nos permiten, como desarrolladores, organizar la información de manera eficiente, y en definitiva diseñar la solución correcta para un determinado problema.

Ya sean las más utilizadas comúnmente - como las variables, arrays, conjuntos o clases- o las diseñadas para un propósito específico -árboles, grafos, tablas, etc.-, una estructura de datos nos permite trabajar en un algo nivel de abstracción almacenando información para luego acceder a ella, modificarla y manipularla.

## Operadores
Los operadores son símbolos especiales que se utilizan para realizar operaciones sobre variables y valores. Estas operaciones pueden ser matemáticas, lógicas, de comparación, de asignación, entre otras. Los operadores permiten construir expresiones que combinan datos y producen nuevos resultados, lo cual es esencial en la resolución de problemas mediante programación.

Por ejemplo, el operador + se usa para sumar dos valores, mientras que el operador == se emplea para comparar si dos expresiones son iguales. Gracias a los operadores, es posible tomar decisiones, repetir instrucciones, realizar cálculos, y controlar el flujo de un programa.

### Ejemplo:  

```cpp  
 
#include <iostream>

using namespace std;

int main() {
	int a, b;
	cout <<"Ingresa el primer numero " << endl;
	cin >> a;
	cout <<"Ingresa el segundo numero " << endl;
	cin >> b;
	
	int suma = a + b;
	int resta = a - b;
	int multiplicacion = a * b;
	int division = a / b;
	
	cout << "Suma " << suma << endl;
	cout << "Resta " << resta << endl;
	cout << "Multiplicacion " << multiplicacion << endl;
	cout << "Division " << division << endl;
	
	return 0;
}
```

## Estructuras De Control
Las estructuras de control son bloques de código que permiten modificar el flujo de ejecución de un programa. Es decir, controlan qué instrucciones se ejecutan, cuándo y cuántas veces.

### 1. Estructuras condicionales
permiten tomar diciciones según condicionales lógicas.

### Ejemplo con if:

```cpp
int edad = 18;
if (edad >= 18) {
    cout << "Eres mayor de edad" << endl;
}
```
### Otras formas condicionales:
* if-else
* switch

### 2. Estructuras repetitivas (bucles)
Permiten repetir instrucciones mientras se cumpla una condición.

### Tipos de bucles:
* While
* do-while
* for

### Ejemplo con for:

```cpp
for (int i = 0; i < 5; i++) {
    cout << "Repetición " << i << endl;
}
```
### Ejemplo con while:
```cpp
int i = 0;
while (i < 3) {
    cout << "i vale: " << i << endl;
    i++;
}
```
### Estructuras de control anidadas
Son estructuras de control dentro de otras, como if dentro de un for, o for dentro de otro for.
```cpp
for (int i = 1; i <= 3; i++) {
    if (i % 2 == 0) {
        cout << i << " es par" << endl;
    } else {
        cout << i << " es impar" << endl;
    }
}
```
Las estructuras de control son muy importantes en la programación porque nos permiten que un programa no se limite a ejecutar instrucciones de forma lineal. Gracias a ellas, el software puede tomar decisiones, repetir acciones, y adaptarse a diferentes situaciones, lo que le da un comportamiento dinámico e inteligente.

### **¿Por qué son tan importantes?**
* Permiten la toma de decisiones
* Automatizan procesos repetitivos
* Hacen el código más eficiente y flexible
* Forman la base de la lógica algorítmica

## Funciones

Una función es un bloque de código reutilizable que realiza una tarea específica. Puedes pensar en una función com una pequeña "máquina" dentro de tu programa, le das una entrada (si hace falta), y te devuelve una salida (si aplica), ejecutando un conjunto de instrucciones.

### ¿Para que sirven?
* Para organizar mejor el código
* Para evitar repetir instrucciones
* Para dividir un problema grande en partes más pequeñas y fáciles de resolver
* Para hacer que tu código sea más claro y mantenible.

### Ejemplo:
```cpp
int sumar(int a, int b) {
    return a + b;
}

int main() {
    int resultado = sumar(3, 5);
    cout << "La suma es: " << resultado << endl;
    return 0;
}
```


## Arrays
En programación, un array (también llamado arreglo) es una estructura de datos que permite almacenar múltiples valores del mismo tipo en una sola variable, organizados de forma secuencial en la memoria del computador.

### 🧪 Ejemplo básico de un array en C++

```cpp
#include <iostream>
using namespace std;

int main() {
    // Declaramos un array de 5 enteros
    int numeros[5] = {10, 20, 30, 40, 50};

    // Mostramos los elementos del array
    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << i << ": " << numeros[i] << endl;
    }

    return 0;
}
```
## Funcion
##  ¿Qué es una función en C++?

Una **función** en C++ es un bloque de código reutilizable que realiza una tarea específica. Permite **organizar el programa en partes más pequeñas**, facilitando su lectura, mantenimiento y reutilización.

### 📌 Ventajas de usar funciones:
- Evita repetir código.
- Mejora la estructura del programa.
- Permite dividir un problema grande en subproblemas más simples.

---

### 🧪 Ejemplo básico de una función en C++

```cpp
#include <iostream>
using namespace std;

// Definimos una función que suma dos números
int sumar(int a, int b) {
    return a + b;
}

int main() {
    int resultado = sumar(5, 3);
    cout << "La suma es: " << resultado << endl;
    return 0;
}
```

## Operadores and asterisco
En C++, los operadores & (ampersand) y * (asterisco) tienen un uso especial en el manejo de punteros, aunque también se pueden usar en otros contextos. A continuación se explica cada uno:

### Operador & (operador de dirección)
El operador & se utiliza para obtener la dirección de memoria de una variable. Es decir, nos da un puntero el valor.

```cpp

int numero = 10;
int* puntero = &numero; // El puntero almacena la dirección de 'numero'
```
&numero devuelve la dirección de memoria de la variable numero, esa dirección se guarda en un puntero, que en este caso es int* puntero.

### Operador * (operador de desreferenciación)

El operador * se utiliza para acceder al almacenado en una dirección de memoria es decir al contenido del puntero.

## Ejemplo
```cpp
int a = 10;
int* p = &a;
cout << *p; // Imprime 10
```
*p se puede decir que "el valor almacenado en la dirección que guarda p", como p apunta a "a", *p accede al contenido de a.

## Ejemplo completo
```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 42;
    int* ptr = &a;      // 'ptr' guarda la dirección de 'a'
    
    cout << "Valor de a: " << a << endl;
    cout << "Dirección de a: " << &a << endl;
    cout << "Contenido de ptr: " << ptr << endl;
    cout << "Valor apuntado por ptr: " << *ptr << endl;

    return 0;
}
```
## Operador ->
 El operador-> se usa para acceder a los miembros de una estructura o clase a trav´ es de un puntero.
 Este operador es una forma abreviada de hacer lo que ser´ ıa equivalente a (*ptr).miembro.
 ### Ejemplo 
 ```cpp
 puntero->miembro
 ```
 Es lo mismo que:
 ```cpp
 (*puntero).miembro
 ```
 Es decir, ptr-> es lo mismo que (*ptr).x, pero más limpio y claro.

 ### Ejemplo práctico
 ```cpp
 #include <iostream>
using namespace std;

struct Persona {
    string nombre;
    void saludar() {
        cout << "Hola, soy " << nombre << endl;
    }
};

int main() {
    Persona p = {"Ana"};
    Persona* ptr = &p;      // ptr apunta al objeto p

    ptr->saludar();         // Accedemos a la función mediante puntero
    cout << ptr->nombre;    // Accedemos al atributo mediante puntero

    return 0;
}
```
El operador -> es una herramienta esencial en C++ para trabajar con punteros a objetos. Su principal ventaja es que permite acceder de forma clara y directa a los miembros (atributos o métodos) de un objeto apuntado, sin necesidad de usar la notación más compleja (*ptr).miembro.

Su uso es fundamental en estructuras de datos dinámicas, como listas enlazadas, árboles o cualquier situación en la que se manipulan objetos a través de punteros. Entender y dominar el operador -> es clave para escribir código más legible, eficiente y orientado a objetos en C++.

¿Quieres que también redacte una conclusión comparando los operadores . y ->?

## Listas enlazadas
Una lista enlazada es una colección de elementos, llamados nodos, donde cada nodo contiene dos partes:

1. Un dato (por ejemplo, un número o un objeto)

2. Un puntero (o enlace) al siguiente nodo en la lista

A diferencia de los arrays, las listas enlazadas no almacenan sus elementos en posiciones contiguas de memoria, lo que permite insertar o eliminar nodos fácilmente sin necesidad de mover otros elementos.
Ejemplo
```cpp
[10 | * ] → [20 | * ] → [30 | NULL]
```
Cada no tiene, un valor (por ejemplo 10,20 y 30), un puntero al siguiente nodo.

## Tipos de listas enlazadas

- Lista simplemente enlazada: Cada nodo apunta solo al siguiente nodo.
- Lista doblemente enlazasa: Cada nodo apunta al anterior y al siguiente nodo.
- Lista Circular: El último nodo apunta al primero, formando un ciclo.

Las ventajas son las inserciones y eliminaciones eficientes en cualquier posición, también el tamaño dinámico (crece o se reduce en tiempo de ejecución), finalmente ideal para estructuras como pilas, colas y árboles.

### Ejemplo
```cpp
#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main() {
    Nodo* primero = new Nodo{10, nullptr};
    primero->siguiente = new Nodo{20, nullptr};
    primero->siguiente->siguiente = new Nodo{30, nullptr};

    Nodo* actual = primero;
    while (actual != nullptr) {
        cout << actual->dato << " ";
        actual = actual->siguiente;
    }
    return 0;
}
```
## Pilas
En C++, una pila (stack en inglés) es una estructura de datos lineal que sigue el principio LIFO (Last In, First Out), es decir, el último elemento que entra es el primero en salir.

### Las caractéristicas principales de una pila:
Push() : Inserta un elemento en la parte superior de la pila.
Pop() : Elimina el elemento que está en la parte superior.
Top() : Devuelve el elemento en la cima de la pila (sin eliminarlo).
Empty() : Verifica si la pila está vacía.
Size() : Devuelve el número de elementos en la pila.

### Ejemplo una pila de platos
imagina que estás en una fiesta y hay una pila de platos para servir comida. Los platos están apilados uno encima de otro.

- Cuando llega un plato limpio, lo pones encima de la pila --> esto es push.
- Cuando alguien quiere servirse, toma el plato de arriba --> esto es un pop.
- Si alguien quiere saber qué se va a usar primero, mira el de arriba sin sacarlo --> eso sería un top.
### ¿Qué ocurre?
El último plato que colocaste será el primero en usarse.
--> Esto es exactamente el comportamiento LIFO(Last In, First Out).

```cpp
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> pilaPlatos;
    int opcion;
    string plato;

    do {
        cout << "\n--- Pila de Platos ---\n";
        cout << "1. Agregar un plato (push)\n";
        cout << "2. Usar un plato (pop)\n";
        cout << "3. Ver el plato de arriba (top)\n";
        cout << "4. Ver cuántos platos hay (size)\n";
        cout << "5. Ver si la pila está vacía (empty)\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el nombre o tipo de plato: ";
                cin >> plato;
                pilaPlatos.push(plato);
                cout << "Plato agregado.\n";
                break;

            case 2:
                if (!pilaPlatos.empty()) {
                    cout << "Usando el plato: " << pilaPlatos.top() << endl;
                    pilaPlatos.pop();
                } else {
                    cout << "No hay platos en la pila.\n";
                }
                break;

            case 3:
                if (!pilaPlatos.empty()) {
                    cout << "Plato en la cima: " << pilaPlatos.top() << endl;
                } else {
                    cout << "La pila está vacía.\n";
                }
                break;

            case 4:
                cout << "Cantidad de platos en la pila: " << pilaPlatos.size() << endl;
                break;

            case 5:
                if (pilaPlatos.empty()) {
                    cout << "La pila está vacía.\n";
                } else {
                    cout << "La pila NO está vacía.\n";
                }
                break;

            case 6:
                cout << "Saliendo del programa...\n";
                break;

            default:
                cout << "Opción no válida. Intente de nuevo.\n";
                break;
        }
    } while (opcion != 6);

    return 0;
}
```
¿Que puedes hacer con este programa?
- Agregar el plato de arriba.
- Ver qué plato está en la cima.
- Revisar el número total de platos.
- Comprobar si ya no hay platos.


### Ejemplo usando la librería stack.
```cpp
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pila;

    // Insertar elementos
    pila.push(10);
    pila.push(20);
    pila.push(30);

    cout << "Elemento en la cima: " << pila.top() << endl;  // 30

    // Eliminar el elemento en la cima
    pila.pop();

    cout << "Nueva cima: " << pila.top() << endl;  // 20

    // Mostrar el tamaño de la pila
    cout << "Tamaño de la pila: " << pila.size() << endl;

    return 0;
}
```

### Ejemplo (Practica 1)
```cpp
#include <iostream>
#include <stack>
using namespace std;

int main() {
    string cadena;
    stack<char> pila;

    cout << "Ingresa una cadena: ";
    cin >> cadena;

    // Apilar cada carácter
    for (char c : cadena) {
        pila.push(c);
    }

    // Imprimir en orden inverso
    cout << "Cadena invertida: ";
    while (!pila.empty()) {
        cout << pila.top();
        pila.pop();
    }

    cout << endl;
    return 0;
}
```
Al desapilarse: se imprime uno por uno.
- a-->l-->o-->h
Resultado: aloh
nota: Apilar letras y luego desapilarlas invierte el orden.

### Ejemlo (Práctica 2)
```cpp
#include <iostream>
#include <stack>
using namespace std;

int main() {
    int numero;
    stack<int> binario;

    cout << "Ingresa un número decimal: ";
    cin >> numero;

    if (numero == 0) {
        cout << "0\n";
        return 0;
    }

    // Convertir a binario
    while (numero > 0) {
        binario.push(numero % 2);
        numero /= 2;
    }

    cout << "El número en binario es: ";
    while (!binario.empty()) {
        cout << binario.top();
        binario.pop();
    }

    cout << endl;
    return 0;
}
```
Al desapilar se imprime: 1101
Nota: El binario se forma desde el último residuo hacia el primero, por eso usamos una pila.

## Cola
Una cola (queue en inglés) es una estructura de datos lineal que sigue el principio FIFO:
   First In, First Out --> El primero en entrar es el primero en salir.

### Ejemplo de la vida real:
- La primera persona que llega es la primera en se atentida.
- Las nuevas personas se agregan al final de la fila.
- Nadie puede pasar delante de los que llegaron antes.

Para trabajar con colas en C++ usamos la librería
```cpp
#include <queue>
```
Las operaciones pricipales:
push() ---> Inserta un elemento al final.
pop()  ---> Elimina el elemento del frente.
front() ---> Muestra el primer elemento.
back() ---> Muestra el último elemento.
empty() ---> Verifica si la cola está vacía.
size() ---> Muestra cuántos elementos hay.

### Ejemplo en 
```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> cola;

    cola.push("Persona 1");
    cola.push("Persona 2");
    cola.push("Persona 3");

    cout << "Primera en la cola: " << cola.front() << endl;
    cout << "Última en la cola: " << cola.back() << endl;

    cola.pop(); // Persona 1 sale

    cout << "Ahora la primera es: " << cola.front() << endl;
    cout << "Tamaño actual de la cola: " << cola.size() << endl;

    return 0;
}
```
Este programa muestra cómo funciona una cola en C++. Se agregan tres personas a la cola usando push(), luego se muestra quién está al frente (front()) y quién al final (back()). Al usar pop(), la primera persona sale de la cola. Finalmente, se muestra la nueva persona al frente y el tamaño actual de la cola. La cola funciona con el principio FIFO: el primero en entrar es el primero en salir.

## Ejemplo (Practica 1): Simular atención en ventanilla.
```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> clientes;

    clientes.push("Ana");
    clientes.push("Luis");
    clientes.push("Carlos");

    while (!clientes.empty()) {
        cout << "Atendiendo a: " << clientes.front() << endl;
        clientes.pop();
    }

    return 0;
}
```
Este programa simula una cola de atención en una ventanilla. Se agregan tres clientes a la cola y se atienden en orden utilizando front y pop. Se sigue el principio FIFO: el primero en llegar es el primero en ser atendido.

### Ejemplo (Practica 2): Cola de números con operaciones.
```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> numeros;

    // Agregamos números a la cola
    for (int i = 1; i <= 5; i++) {
        numeros.push(i);
    }

    int suma = 0;
    while (!numeros.empty()) {
        suma += numeros.front();
        numeros.pop();
    }

    cout << "La suma total de los números es: " << suma << endl;
    return 0;
}
```
Este programa utiliza una cola para almacenar números del 1 al 5. Luego, los extrae uno por uno para sumarlos. Se muestra cómo usar una cola para procesar datos en orden de llegada.

## Recursividad
La recursividad es una técnica en la que una función se llama a sí misma para resolver un problema.

Es como dividir un problema grandee en subproblemas más pequeños del mismo tipo, hasta llegar a un caso base que sí puede resolverse directamente.

## Ejemplo en la vida real
Imagina un conjunto de muñecas rusas (matrioshkas):
Cada una contiene otra más pequeña dentro, hasta llegar a la más pequeñita que no abre más.
Ese último caso es el caso base.
Desempacar cada muñeca es como un proceso recursivo: cada paso es igual, solo más pequeño.

Las partes más importantes de la recursividad.

1. Caso base: la condición para detener la recursión.
2. Llamada recursiva: la función se llama a sí misma con un valor más simple.

### Ejemplo: Factorial
```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0)  // caso base
        return 1;
    else         // llamada recursiva
        return n * factorial(n - 1);
}

int main() {
    int numero = 5;
    cout << "El factorial de " << numero << " es: " << factorial(numero) << endl;
    return 0;
}
```

La función factorial() se llama a sí misma con n - 1 hasta llegar a 0. El caso base es cuando n == 0, que devuelve 1. Así, se calcula el factorial de forma recursiva.

### Ejemplo (Práctica 1): Sum de números naturales (recursivo)
```cpp
#include <iostream>
using namespace std;

int suma(int n) {
    if (n == 0)  // caso base
        return 0;
    else         // llamada recursiva
        return n + suma(n - 1);
}

int main() {
    int numero = 5;
    cout << "La suma de 1 hasta " << numero << " es: " << suma(numero) << endl;
    return 0;
}
```
Este programa calcula la suma de los números del 1 al n usando recursividad. La función suma(n) se llama a sí misma restando 1 hasta llegar a 0, que es el caso base.

### Ejemplo (Práctica 2): Secuencia de Fibonacci.
```cpp
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;      // caso base 1
    if (n == 1) return 1;      // caso base 2
    return fibonacci(n - 1) + fibonacci(n - 2);  // llamada recursiva
}

int main() {
    int n = 6;
    cout << "El término " << n << " de Fibonacci es: " << fibonacci(n) << endl;
    return 0;
}
```
Este programa calcula n-ésimo número de la secuencia de Fibonacci usando recursividad. La función ses llama a sí misma sumando lo dos términos anteriores. Tiene dos casos base: fibonacci(o) = 0 y fibonacci(1) = 1.