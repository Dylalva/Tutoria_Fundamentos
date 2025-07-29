#include <iostream>

using namespace std;

// Funciones para evaluar condicionales
// Estas funciones muestran cómo usar condicionales if, else if y else en C++
// Cada función tiene una responsabilidad única y se encarga de evaluar un caso específico.
// Puedes agregar más funciones para evaluar diferentes condiciones según sea necesario.
// Las funciones pueden ser declaradas antes o después de la función main.

void evaluarCondicional(int numero) {
    if (numero > 0) {
        cout << "El número es positivo." << endl;
    } else if (numero < 0) {
        cout << "El número es negativo." << endl;
    } else {
        cout << "El número es cero." << endl;
    }
}

void evaluar2Conficionales(int num1, int num2) {
    if (num1 > num2) {
        cout << "El primer número es mayor que el segundo." << endl;
    } else if (num1 < num2) {
        cout << "El primer número es menor que el segundo." << endl;
    } else {
        cout << "Los números son iguales." << endl;
    }
}

// Función para evaluar tres números y determinar cuál es el mayor
// Esta función utiliza condicionales anidados para comparar tres números diferentes.
// Si todos son iguales, se indica que no hay un número mayor.
// Se hace uso de operadores como el and (&&) para evaluar múltiples condiciones al mismo tiempo.
// También se pueden usar operadores lógicos como or (||) si es necesario.

void evaluar3Conficionales(int num1, int num2, int num3) {
    if (num1 > num2 && num1 > num3) {
        cout << "El primer número es el mayor." << endl;
    } else if (num2 > num1 && num2 > num3) {
        cout << "El segundo número es el mayor." << endl;
    } else if (num3 > num1 && num3 > num2) {
        cout << "El tercer número es el mayor." << endl;
    } else {
        cout << "Hay números iguales o todos son iguales." << endl;
    }
}

void evaluarString(string str1, string str2) {
    if (str1 == str2) {
        cout << "Las cadenas son iguales." << endl;
    } else if (str1 < str2) {
        cout << "La primera cadena es menor que la segunda." << endl;
    } else {
        cout << "La primera cadena es mayor que la segunda." << endl;
    }
}

int main() {
    evaluarCondicional(10); // Prueba con un número positivo
    evaluarCondicional(-5); // Prueba con un número negativo
    evaluarCondicional(0);  // Prueba con cero

    evaluar2Conficionales(10, 20); // Prueba con dos números diferentes
    evaluar2Conficionales(20, 10); // Prueba con el primer número
    evaluar2Conficionales(15, 15); // Prueba con dos números iguales

    evaluar3Conficionales(10, 20, 30); // Prueba con tres números diferentes
    evaluar3Conficionales(30, 20, 10); // Prueba con
    evaluar3Conficionales(10, 10, 20); // Prueba con dos números iguales
    evaluar3Conficionales(10, 10, 10); // Prueba con todos iguales

    evaluarString("apple", "banana"); // Prueba con dos cadenas diferentes
    evaluarString("banana", "apple"); // Prueba con el orden inverso
    evaluarString("cherry", "cherry"); // Prueba con dos cadenas iguales
    return 0;
}