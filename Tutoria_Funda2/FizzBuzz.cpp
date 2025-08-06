#include <iostream>

using namespace std;

/*
Tienen numero n, y van a imprimir fizz si es divisible entre 3
imprimen buzz si es divisible entre 5
imprimen fizzbuzz si es divisible con ambos (3, 5)
utilizar if, else, for/while para un ciclo de 100 números 1-100
si no aplica a ninguna caso, impriman el numero
*/
void fizzbuzz(int i){
	if((i % 3 == 0) && (i % 5 == 0)){
		cout << "FizzBuzz\n";
	} else if(i % 3 == 0){
		cout  << "Fizz\n";
	} else if(i % 5 == 0){
		cout << "Buzz\n";
	}
	else{
		cout << i << endl;
	}
}
	
//Para usar este código se debe documentar el otro main o abrir este archivo por separado.
//int main(){
//	for(int i = 1; i <= 100; i++){
//		fizzbuzz(i);
//	}
//	return 0;
//}
