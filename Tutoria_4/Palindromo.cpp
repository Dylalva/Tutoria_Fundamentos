#include <iostream>

using namespace std;

int invertir(int n){
	int numInvertido = 0;
	while(n > 0){
		numInvertido = numInvertido * 10 + n % 10;
		n /= 10;
	}
	return numInvertido;
}
	
bool isPalindromo(int n){
	return n == invertir(n);
}

void imprimirPal(int n){
	cout << boolalpha << "El numero: " << n << " Y su inversa: " << invertir(n)
		<< ". Es palindromo: " << isPalindromo(n) << endl;
}
int main(){
	imprimirPal(141);
	imprimirPal(145);
	imprimirPal(2000);
	return 0;
}
