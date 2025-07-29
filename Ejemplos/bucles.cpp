#include <iostream>

using namespace std;

/*
    En este archivo se muestran ejemplos de cómo usar bucles en C++.
    Los bucles son estructuras de control que permiten repetir un bloque de código varias veces.
    Existen diferentes tipos de bucles, como for, while y do-while.
    Cada tipo de bucle tiene su propia sintaxis y se utiliza en diferentes situaciones.
    Los bucles pueden ser útiles para iterar sobre colecciones de datos, realizar cálculos repetitivos,
    o ejecutar un bloque de código hasta que se cumpla una condición específica.
*/

int main() {
    // Ejemplo de bucle for
    // Este bucle se ejecuta 5 veces, imprimiendo los números del 0 al 4
    cout << "Bucle for:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i << endl;
    }

    // Ejemplo de bucle while
    // Este bucle se ejecuta mientras la condición (i < 5) sea verdadera
    cout << "Bucle while:" << endl;
    int i = 0;
    while (i < 5) {
        cout << i << endl;
        i++;
    }

    // Ejemplo de bucle do-while
    // Este bucle se ejecuta al menos una vez, y luego se repite mientras la condición (i < 5) sea verdadera
    i = 0;
    cout << "Bucle do-while:" << endl;
    do {
        cout << i << endl;
        i++;
    } while (i < 5);

    return 0;
}