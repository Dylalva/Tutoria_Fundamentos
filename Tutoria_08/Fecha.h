#ifndef  Fecha_H
#define Fecha_H

#include<iostream>
#include<sstream>
#include<string>
using namespace std;

class Fecha {
private:
	int dia;
	int mes;
	int anio;
	
public:
	Fecha();
	Fecha(int a, int b, int c);
	Fecha(int a, int b);
	Fecha(int dia);
	Fecha(const Fecha& fecha); // Constructor copia
	
	virtual ~Fecha();
	
	void setAnio(int a);
	string toString();
	bool isBisiesto();
	int diasMaxXMes();
	void avanzarFecha();
};

#endif
