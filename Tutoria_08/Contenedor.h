#ifndef Contenedor_H
#define Contenedor_H

#include<iostream>
#include<sstream>
#include<string>
#include "Tiempo.h"
using namespace std;
//Va hacer un tenedor de objetos de Tiempo
class Contenedor{
private:
	int cant;
	int tam;
	Tiempo vec[10];
public:
	Contenedor();
	~Contenedor();
	
	int getCant() const;
	int getTam();
	
	Tiempo getPos(int);
	
	bool ingresarElemento(Tiempo);
	
	bool activarAlarma(Tiempo);
	
	bool avanzarTiempo();
	
	string toString();
};


#endif
