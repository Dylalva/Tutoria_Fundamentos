///*
// int a -> anterior
// int b -> anterior del anterior
// n == 1, a
// n == 0, b
//------
//n -> 2
//a, b, aux -> intercambio
//aux -> a
//a -> a + b
//b -> aux(a)
//*/
//
//#include<iostream>
//using namespace std;
//bool esPrimo(int n){
//	if(n <= 1) return false;
//	for(int i = 2; i < n /2; i++){
//		if(n % i == 0) return false;
//	}
//	return true;
//}
//int sumaPrimosFibonacci(int n){
//	if(n == 1 || n == 0) return n;
//	int a = 1; //->anterior
//	int b = 0; //->anterior del anterior
//	int aux = 0; // intercambio
//	int cont = 1;
//	int suma = 0;
//	while(cont < n){
//		aux = a;
//		a += b;
//		b = aux;
//		cont++;
//		if(esPrimo(a)) suma += a;
//	}
//	return suma;
//}
//
//int main (int argc, char *argv[]) {
//	cout << sumaPrimosFibonacci(12);
//	return 0;
//}
//			
//			
