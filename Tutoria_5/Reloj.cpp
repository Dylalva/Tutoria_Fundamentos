//#include <iostream>
//
//using namespace std;
//
//bool esUnDigito(int n){
//	if(n > 0 && n <= 9){
//		return true;
//	}
//	return false;
//}
//
//int sumaDigitos(int n){
//	int suma = 0;
//	
//	while(!esUnDigito(n)){
//		suma += n % 10;
//		n /= 10;
//	}
//	suma += n;
//	return suma;
//}
//	
//int raizDigital(int n){
//	if(esUnDigito(n)){
//		return n;
//	}
//	int suma = sumaDigitos(n);
//	while(!esUnDigito(suma)){
//		suma = sumaDigitos(suma);
//	}
//	return suma;
//}
//int main(){
//	int num = 0;
//	cout << "Digite un numero para calcular la raiz digital: "; cin >> num;
//	cout << "\nLa Raiz digital es: " << raizDigital(num) << endl;
//	return 0;
//}
