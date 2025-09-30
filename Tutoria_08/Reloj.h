#ifndef  Reloj_H
#define Reloj_H

#include<iostream>
#include<sstream>
#include<string>
#include "Tiempo.h"
#include "Fecha.h"
#include "Contenedor.h"
using namespace std;

class Reloj {
private:
	Fecha fecha;
	Contenedor tiempo;
	Contenedor alarmas;
	
public:
	Reloj(Fecha f, Tiempo t);
	Reloj();
	
	void avanzarTiempo();
	void agregarAlarma(Tiempo al);
	void agregarTiempo(Tiempo a1);
	bool activarAlarma();
	string toString();
	
	string tiemposActivos();
	string alarmasActivas();
};

#endif
