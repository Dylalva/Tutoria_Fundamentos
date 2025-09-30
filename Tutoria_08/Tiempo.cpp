#include "Tiempo.h"

Tiempo::Tiempo(int h, int m, int s) {
	this->hora = h;
	this->minutos = m;
	this->segundos = s;
}

Tiempo::~Tiempo() {}

int Tiempo::getHora() {
	return hora;
}

int Tiempo::getMinutos() const {
	return minutos;
}

int Tiempo::getSegundos() {
	return segundos;
}

bool Tiempo::setHora(int h) {
	if (h >= 0 && h <= 23) {
		hora = h;
		return true;
	}
	return false;
}

bool Tiempo::setMinutos(int m) {
	if (m >= 0 && m <= 59) {
		minutos = m;
		return true;
	}
	return false;
}

// Para asegurar que la lógica se cumpla siempre
// Lo ideal es hacer esta validacion cuando se solicitan los datos
bool Tiempo::setSegundos(int s) {
	if (s >= 0 && s <= 59) {
		segundos = s;
		return true;
	}
	return false;
}

// IDEAL
void Tiempo::setSegundos2(int s) {
	segundos = s;
}

string Tiempo::toString() {
	stringstream ss;
	ss << hora << ":" << minutos << ":" << segundos << endl;
	return ss.str();
}

bool Tiempo::avanzarTiempo() {
	bool cambioDia = false;
	if (segundos + 1 == 60) {
		if (minutos + 1 == 60) {
			hora = (hora + 1) % 24;
			if (hora == 0) {
				cambioDia = true;
			}
		}
		minutos = (minutos + 1) % 60;
	}
	segundos = (segundos + 1) % 60;
	return cambioDia;
}
