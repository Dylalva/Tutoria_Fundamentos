#include <iostream>
#include <random>
using namespace std;

/*
	centenas -> °°°
	decenas  -> °°°
	unidaes  -> °°
*/
void imprimeFor(int can){
	for(int i = 0; i < can; i++){
		cout << "+";
	}
	cout << endl;
}
	
	
string v[] = {"Unidades:\t", "Decenas:\t", "Centenas:\t", "Millares:\t"};
void imprimeFormaAbacoUDC(int num){
	int aux = 0;
	while(num != 0){
		int cant = num % 10;
		num /= 10; // 125 -> 12 -> 1 -> 0
		cout << v[aux++];
		imprimeFor(cant);
	}
}

void imprimeFormaAbacoCDU(int num) {
	// Calcular cada dígito desde el más grande al más pequeño
	int centenas = num / 100;         // primer dígito
	int decenas  = (num / 10) % 10;    // segundo dígito
	int unidades = num % 10;           // último dígito
	imprimeFor(centenas);
	imprimeFor(decenas);
	imprimeFor(unidades);
}
int numBinarios(int num){
	num % 2;
	num /= 2;
	return 1;
}
void saludar(string& nombre, string apellido = "Perez"){
	cout << "Hola, como estas " << nombre << " " << apellido << ".\n";
}
// Si una funcion tiene n parametros, n parametros es lo que debe de recibir
// a no ser de que se utilice la igualdad en el parametro.
// Recomendacion, si usa igual es mejor hacerlo en los parametros finales.
int main(){
	string nombre = "Juan";
	saludar(nombre, "Ramirez");
	saludar(nombre);
	imprimeFormaAbacoUDC(125);
	imprimeFormaAbacoCDU(125);
	//Con el ciclo while se utiliza mucho las variables bandera.
	bool bandera = false; //bandera/flag como prefieran
	int n = 10;
	while(!bandera){
		cout << "Hola mundo: " << n << endl;
		if(n % 3 == 0){
			bandera = true;
		}
		n = n * 2 - 9;
	}
	
	//El uso del for es cuando se hasta donde llegar, para recorrer vectores, matrices, etc
	int v[] = {1,2,3,4,5,6,7,8,9};
	for(int i = 0; i < 9; i++){
		cout << v[i] << endl;
	}
	n = 15;
	int sum = 0;
	//Para realizar alguna sumatoria/productoria
	for(int i = 0; i < 9; i++){
		sum += i * i;
	}
	cout << sum << endl;
	for(int i = 0; i < 10; i ++){
		int numD = rand() % 10 + 1;
		cout << numD << ")10 ->" << numBinarios(numD) << ")2" << endl;
	}
	return 0;
}
