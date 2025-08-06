#include<iostream>
#include "FuncionesMat.h"

using namespace std;

void menu(){
	system("cls");
	cout << "Bienvenido a mi super hiper mega calculadora\n";
	cout << " 1. Enteros\n";
	cout << " 2. Decimales\n";
	cout << " 3. Salir\n";
}

void submenu(){
	system("cls");
	cout << "Bienvenido a mi super hiper mega calculadora\n";
	cout << " 1. Sumar\n";
	cout << " 2. Restar\n";
	cout << " 3. Multiplicar\n";
	cout << " 4. Dividir\n";
	cout << " 5. Salir\n";
	cout << "Digite la opcion que desea utilizar\n";
}
	
void solicitarEntero(int& a){
	// cout << &a << endl; // imprime la direccion de memoria
	cin >> a;
}

double solicitarDouble(){
	double a = 0.0;
	cin >> a;
	return a;
}
	
void imprimirMensaje(string a){
	cout << a << endl;
}
int solicitarNumeroInt(string a){
	string mensaje = "Digite el numero " + a + " : ";
	imprimirMensaje(mensaje);
	int b = 0;
	solicitarEntero(b);
	return b;
}

double solicitarNumeroDouble(string a){
	string mensaje = "Digite el numero " + a + " : ";
	imprimirMensaje(mensaje);
	double b = 0;
	b = solicitarDouble();
	return b;
}
void utilizarFuncionesMatInt(int opcion, int a, int b){
	switch(opcion){
		case 1:
			cout << "El resultado de la suma " << a << " y " << b 
				<< " es de: " << suma(a, b) << "\n";
			break;
		case 2:
			cout << "El resultado de la resta " << a << " y " << b << " es de: " 
				<< resta(a, b) << "\n";
			break;
		case 3:
			cout << "El resultado de la multiplicacion " << a << " y " << b 
				<< " es de: " << multiplicar(a, b) << "\n";
			break;
		case 4:
			cout << "El resultado de la division " << a << " y " << b 
				<< " es de: " << dividir(a, b) << "\n";
			break;
	}
	system("pause");
}

void utilizarFuncionesMatDouble(int opcion, double a, double b){
	switch(opcion){
	case 1:
		cout << "El resultado de la suma " << a << " y " << b 
			<< " es de: " << suma(a, b) << "\n";
		break;
	case 2:
		cout << "El resultado de la resta " << a << " y " << b << " es de: " 
			<< resta(a, b) << "\n";
		break;
	case 3:
		cout << "El resultado de la multiplicacion " << a << " y " << b 
			<< " es de: " << multiplicar(a, b) << "\n";
		break;
	case 4:
		cout << "El resultado de la division " << a << " y " << b 
			<< " es de: " << dividir(a, b) << "\n";
		break;
	}
	system("pause");
}
void usandoFuncionesInt() {
		int opcion, a, b = 0;
		do{
			submenu();
			solicitarEntero(opcion);
			//		cout << opcion << " " << &opcion << endl; // imprime direccion de memoria
			if(opcion != 5){
				a = solicitarNumeroInt("a");
				b = solicitarNumeroInt("b");
				utilizarFuncionesMatInt(opcion, a, b);
			} else{
				cout << "Gracias por usar mi calculadora\n";
			}
		} while(opcion != 5);
	}
	
void usandoFuncionesDouble() {
		int opcion = 0;
		double a, b = 0.0;
		do{
			submenu();
			solicitarEntero(opcion);
			//cout << opcion << " " << &opcion << endl; // imprime direccion de memoria
			if(opcion != 5){
				a = solicitarNumeroDouble("a");
				b = solicitarNumeroDouble("b");
				utilizarFuncionesMatDouble(opcion, a, b);
			} else{
				cout << "Gracias por usar mi calculadora\n";
			}
		} while(opcion != 5);
	}
	
int main (int argc, char *argv[]) {
	int opcion = 0;
	do{
		menu();
		solicitarEntero(opcion);
		if(opcion == 1){
			usandoFuncionesInt();
		} else if(opcion == 2){
			usandoFuncionesDouble();
		}
	}while(opcion != 3);
	return 0;
}
