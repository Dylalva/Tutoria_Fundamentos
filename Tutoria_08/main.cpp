#include<iostream>
#include<sstream>
#include<string>
#include "Reloj.h"
#include "Contenedor.h"
using namespace std;

int main (int argc, char *argv[]) {
//	Fecha a(16, 9, 2025);
//	Fecha b(a);
//	cout << b.toString();
//	
//	//=========================================
//	
//	Tiempo aa(14, 02, 0);
//	Tiempo bb;
//	cout << aa.toString() << endl;
//	cout << bb.toString() << endl;
	
	Fecha fecha(16, 9, 2025);
	Tiempo tiempo(14, 36, 15);
	
	Reloj reloj(fecha, tiempo);
	int cant = 0;
	Tiempo alarma(15,0,0);
	reloj.agregarAlarma(alarma);
	reloj.agregarAlarma(Tiempo(13,51,0));
	reloj.agregarAlarma(Tiempo(14,51,0));
	reloj.agregarAlarma(Tiempo(15,51,0));
	reloj.agregarAlarma(Tiempo(16,51,0));
	reloj.agregarAlarma(Tiempo(17,51,0));
	while(cant < 3700 * 24){
		reloj.avanzarTiempo();
		cant++;
	}
	cout << reloj.toString();
	
	cout << reloj.alarmasActivas() << endl;
	return 0;
}

