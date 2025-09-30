#include "Reloj.h"

Reloj::Reloj(Fecha f, Tiempo t) {
	fecha  = Fecha(f);
	tiempo = Contenedor();
	tiempo.ingresarElemento(t);
	alarmas = Contenedor();
}

Reloj::Reloj() {
	fecha  = Fecha(16, 9, 2025);
	tiempo = Contenedor();
	tiempo.ingresarElemento(Tiempo(14,38,25));
}

void Reloj::avanzarTiempo() {
	if (tiempo.avanzarTiempo()) {
		fecha.avanzarFecha();
	}
	if (activarAlarma()) {
		cout << "Alarma activada\n";
		cout << toString();
		system("pause");
	}
}

void Reloj::agregarAlarma(Tiempo al) {
	alarmas.ingresarElemento(al);
}

void Reloj::agregarTiempo(Tiempo al) {
	tiempo.ingresarElemento(al);
}

bool Reloj::activarAlarma() {
	for (int i = 0; i < tiempo.getCant(); i++){
		if(alarmas.activarAlarma(tiempo.getPos(i))) return true;
	}
	return false;
}



string Reloj::toString() {
	stringstream ss;
	ss << "Reloj.\nFecha: " << fecha.toString()
		<< "\nHora: " << tiempo.toString() << endl;
	return ss.str();
}

string Reloj::alarmasActivas(){
	stringstream ss;
	ss << alarmas.toString() << endl;
	return ss.str();
}

string Reloj::tiemposActivos(){
	stringstream ss;
	ss << tiempo.toString() << endl;
	return ss.str();
}
