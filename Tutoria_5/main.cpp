//#include<iostream>
//#include<random>
//using namespace std;
//
///*
//	Sea un rango N->dado por el usuario
//	El usuario va digitar un número.
//	La máquina debe ser capaz de adivinar el número
//	El programa debe indicar cuantas iteraciones tuvo que hacer para adivinar
//*/
//int randInt(int rango){
//	return rand() % rango + 1;
//}
//int main (int argc, char *argv[]) {
//	bool adivinado = false;
//	int n, adivinar, cont, intento = 0;
//	cout << "Digite el rango que desea: ";
//	cin >> n;
//	cout << "\nDigite el numero a adivinar: "; cin >> adivinar;
//	while(!adivinado){
//		intento = randInt(n);
//		cout << "\nDigite el numero a adivinar: "; cin >> adivinar;
//		adivinado = adivinar == intento;
//		cont++;
//	}
//	cout << "El numero a adivinar es: " << intento << endl;
//	cout << "Ocupe: " << cont << " intentos para encontrarlo!" << endl;
//	return 0;
//}
//
