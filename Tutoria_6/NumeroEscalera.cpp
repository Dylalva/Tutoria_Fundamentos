//#include<iostream>
//using namespace std;
//
//int sacarPrimerDigito(int n){
//	int aux = 0;
//	while(n > 0){
//		aux = n % 10;
//		n /= 10;	
//	}
//	return aux;
//}
//
//int invertir(int n){
//	int aux = 0;
//	while(n > 0){
//		aux = aux * 10 + n % 10;
//		n /= 10;
//	}
//	return aux;
//}
//	
//bool escalera(int n){
//	int aux = 0;
//	n = invertir(n);
//	int cont = n % 10;
//	while(n > 0){
//		aux = n % 10;
//		if(aux != cont){
//			return false;
//		}
//		cont++;
//		n /= 10;
//	}
//	return true;
//}
//
//int main (int argc, char *argv[]) {
//	cout << boolalpha << escalera(123) << endl;
//	cout << boolalpha << escalera(122) << endl;
//	cout << boolalpha << escalera(456);
//	return 0;
//}
//
