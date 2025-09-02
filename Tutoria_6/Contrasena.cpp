#include<iostream>
using namespace std;
int cantidadDigitos(int n){
	int cont = 0;
	while(n > 0){
		n /= 10;
		cont++;
	}
	return cont;
}
	
int maximoApariciones(int n){
	int cant_ap = 1;
	int aux = n;
	int num = 0;
	while(n > 0){
		int aux2 = aux;
		num = n % 10;
		int cont = 0;
		while(aux2 > 0){
			if(num == aux2 %10) cont++;
			aux2 /= 10;
		}
		if(cont > cant_ap){
			cant_ap = cont;
		}
		n /= 10;
	}
	return cant_ap;
}
	
string nivelSeguridad(int n){
	if(cantidadDigitos(n) < 8 && maximoApariciones(n) > 3){
		return "Contrasena invalida";
	} else if(cantidadDigitos(n) >= 8 && maximoApariciones(n) == 3){
		return "Seguridad baja";
	} else if(cantidadDigitos(n) >= 8 && maximoApariciones(n) == 2){
		return "Seguridad Media";
	} else if(cantidadDigitos(n) >= 8 && maximoApariciones(n) == 1){
		return "Seguridad Alta";
	}
	return "Error";
}
int main (int argc, char *argv[]) {
	cout << nivelSeguridad(22221) << endl;
	cout << nivelSeguridad(22256890) << endl;
	cout << nivelSeguridad(221345678) << endl;
	cout << nivelSeguridad(12345678) << endl;
	return 0;
}

