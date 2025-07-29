#include <iostream>

using namespace std;

/* 
    Algo importante es que las funciones deben tener un tipo de retorno,
    si no retornan nada se usa void.
    las funciones deben tener una responsabilidad única, es decir, deben hacer una sola cosa.
    Las funciones pueden ser declaradas antes o después de la función main.
*/

// 1. Declaración de función antes del main
int suma(int a, int b) {
    return a + b;
}

// 2. Declaración de función después del main
void imprimirMensaje();

int main() {


    return 0;
}

void imprimirMensaje() {
    cout << "¡Hola, mundo!" << endl;
}