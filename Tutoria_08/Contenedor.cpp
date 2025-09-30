#include "Contenedor.h"

Contenedor::Contenedor(){
	tam = 10;
	cant = 0;
	for(int i = 0; i < tam; i++){
		vec[i] = Tiempo(-1, -1, -1);
	}
}

Contenedor::~Contenedor(){
	
}

bool Contenedor::avanzarTiempo(){
	for(int i = 0; i < cant; i++){
		vec[i].avanzarTiempo();
	}
	return false;
}

Tiempo Contenedor::getPos(int index){
	if(index< cant && cant > 0)
		return vec[index];
	
	return Tiempo(-1,-1,-1);
}

int Contenedor::getCant() const{
	return cant;
}

int Contenedor::getTam(){
	return tam;
}

bool Contenedor::ingresarElemento(Tiempo elemento){
	if(cant < tam){
		vec[cant++] = elemento; // -> vec[cant] = elemento; cant++;
	}
	return false;
}

bool Contenedor::activarAlarma(Tiempo tiempo){
	for(int i = 0; i < cant; i++){
		if(vec[i].getHora() == tiempo.getHora() &&
		   vec[i].getMinutos() == tiempo.getMinutos() &&
		   vec[i].getSegundos() == tiempo.getSegundos()){
			return true;
		}
		
	}
	return false;
}

string Contenedor::toString(){
	stringstream ss;
	for(int i = 0; i < cant; i++){
		ss << "Tiempo #" << i + 1 << endl;
		ss << vec[i].toString() << endl;
	}
	return ss.str();
}
