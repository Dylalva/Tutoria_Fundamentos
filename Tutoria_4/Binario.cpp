//#include <iostream>
//#include <random>
//
//using namespace std;
//
//int fibonacciRec(int n){
//	if(n == 0) return 0;
//	if(n == 1) return 1;
//	return fibonacciRec(n - 1) + fibonacciRec(n - 2);
//}
//
//int fibonacci(int n){
//	int cont = 1;
//	int a1 = 1; // fibonacci(1)
//	int a2 = 0; // fibonacci(0)
//	int aux = 0;
//	while(n > cont){
//		aux = a1;
//		a1 = a1 + a2;
//		a2 = aux;
//		cont++;
//	}
//	return a1;
//}
//	
//bool isPrimo(int n){
//	for(int i = 2; i <= n / 2; i++){//n / 2 || n - 1
//		if(n % i == 0){
//			return false;
//		}
//	}
//	return true;
//}
//int binario(int n){
//	int bin = 0, base = 1;
//	while (n > 0){
//		bin += (n % 2) * base;
//		n = n / 2;
//		base *= 10;
//	}
//	return bin;
//}
//	
//int randomInt(int n){
//	return rand() % n + 1;
//}
//	
//int main(){
//	cout << binario(5) << endl;
//	cout << binario(10) << endl;
//	cout << binario(8) << endl;
//	cout << binario(20) << endl;
//	for(int i = 0; i < 5; i++){
//		int random1 = randomInt(15);
//		cout << random1 << ")10 en binario: " << binario(random1) << endl;
//	}
//	cout << fibonacci(15) << endl;
//	return 0;
//}
