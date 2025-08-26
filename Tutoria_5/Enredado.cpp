#include <iostream>

using namespace std;

bool isPrimo(int n){
	for(int i = 2; i <= n/2; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

bool tiene5Digitos(int n){
	int cont = 0;
	while(n > 0){
		cont ++;
		n /= 10;
	}
	return cont == 5;
}

int primerDig(int n){
	int aux;
	while(n > 0){
		aux = n % 10;
		n /= 10;
	}
	return aux;
}

bool esUnDigito(int n){
	return n > 0 && n <= 9;
}
int invertir(int n){
	int invertido = 0;
	while(n > 0){
		invertido = invertido * 10 + n % 10;
		n /= 10;
	}
	return invertido;
}
int sacar3Digitos(int n){
	n /= 10;
	int aux = 0;
	while(!esUnDigito(n)){
		aux = aux * 10 + (n % 10);
		n /= 10;
	}
	return invertir(aux);
}
bool esEnredado(int n){
	if(tiene5Digitos(n)){
		if(primerDig(n) == n % 10){
			return(isPrimo(sacar3Digitos(n)));
		}
		return false;
	}
	return false;
}
int main(){
	cout<< boolalpha << esEnredado(43794);
	return 0;
}
	
