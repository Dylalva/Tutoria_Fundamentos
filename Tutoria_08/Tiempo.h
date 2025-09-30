#ifndef Tiempo_H
#define Tiempo_H

#include<iostream>
#include<sstream>
#include<string>
using namespace std;

class Tiempo {
private:
	int hora;
	int minutos;
	int segundos;
public:
	//Constructor con todos los parametros y constructur sin parametros
	Tiempo(int h = 0, int m = 0, int s = 0);
	
	virtual ~Tiempo();
	
	// GETS
	int getHora();
	int getMinutos() const;
	int getSegundos();
	
	// SETS
	bool setHora(int h);
	bool setMinutos(int m);
	bool setSegundos(int s);
	
	// IDEAL
	void setSegundos2(int s);
	
	string toString();
	bool avanzarTiempo();
};

#endif
