#include "Fecha.h"

Fecha::Fecha() {
	dia = 0;
	mes = 0;
	anio = 0;
}

Fecha::Fecha(int a, int b, int c) {
	this->dia = a;
	this->mes = b;
	anio = c;
	// Para ver como funciona, NO USAR
	cout << "Construyendo una fecha\n";
}

Fecha::Fecha(int a, int b) : dia(a), mes(b), anio(2025) {
}

Fecha::Fecha(int dia) {
	// Aqui es obligatorio usar el this
	// ya que el parametro se llama igual
	this->dia = dia;
	mes = 9;
	anio = 2025;
}

// Constructor copia
Fecha::Fecha(const Fecha& fecha)
	: Fecha(fecha.dia, fecha.mes, fecha.anio) {
}

Fecha::~Fecha() {
	// Para ver como funciona, NO USAR
	cout << "Destruyendo fecha...\n";
}

void Fecha::setAnio(int a) {
	anio = a;
}

string Fecha::toString() {
	stringstream ss;
	ss << dia << "/" << mes << "/" << anio << endl;
	return ss.str();
}

bool Fecha::isBisiesto() {
	if (anio % 4 == 0) {
		return true;
	}
	// condiciones de más
	return false;
}

int Fecha::diasMaxXMes() {
	switch (mes) {
	case 1: {
		return 30;
	} break;
	case 2: {
		if (isBisiesto()) {
			return 29;
		}
		return 28;
	} break;
	default:
		return 30;
	}
}

void Fecha::avanzarFecha() {
	if (dia + 1 > diasMaxXMes()) {
		if (mes + 1 > 12) {
			anio++;
		}
		mes = (mes + 1) % 13;
		dia = 1;
		return;
	} else {
		dia = dia + 1;
	}
}
