#include<iostream>
#include<sstream>

using namespace std;

class Contenedor{
	private:
		int vec[10];
		int tam;
		int cant;
	public:
		Contenedor(){
			this->tam = 10;
			this->cant = 0;
			
			for(int i = 0; i < tam; i++){
				vec[i] = 0;
			}
		}
		
		//Constructor copia
		Contenedor(Contenedor& other){
			this->tam = 10;
			this->cant = 0;
			
			for(int i = 0; i < tam; i++){
				vec[i] = 0;
			}
			
			for(int i = 0; i < other.cant; i++){
				this->agregarElemento(other.vec[i]);
			}
		}
			
		bool agregarElemento(int value){
			if(cant < tam){
				vec[cant] =  value;
				cant++;
				return true;
			}
			return false;
		}
		
		// index o posicion
		bool cambiarElemento(int pos, int newValue){
			if(pos < cant){
				vec[pos] = newValue;
				return true;
			}
			return false;
		}
			
		int sumatoria(){
			int suma = 0;
			for(int i = 0; i < cant; i++){
				suma += vec[i];
			}
			return suma;
		}

		int sumatoria(int inicio, int fin){
			int suma = 0;
			
			if(inicio > fin) 
				return -1;
			else if(fin > cant) 
				return -1;
			
			for(int i = inicio; i < fin; i++){
				suma += vec[i];
			}
			
			return suma;
		}
			
		int productoria(){
			int producto = 1;
			for(int i = 0; i < cant; i++){
				producto *= vec[i];
			}
			return producto;
		}
		
		Contenedor unionContenedores(Contenedor& other){
			Contenedor c;
			//para el conjunto this
			for(int i = 0; i < cant; i++){
				if(c.existeElemento(vec[i]) == false){
					c.agregarElemento(vec[i]);
				}
			}
			
			// para el conjunto other
			for(int i = 0; i < other.cant; i++){
				if(c.existeElemento(other.vec[i]) == false){
					c.agregarElemento(other.vec[i]);
				}
			}
			return c;
		}
		
		bool existeElemento(int x){
			for(int i = 0; i < cant; i++){
				if(vec[i] == x){
					return true;
				}
			}
			return false;
		}
			
		int sumatoriaProductoria(){
			int sumaProd = 0;
			for(int i = 0; i < cant; i++){
				sumaProd += productoria();
			}
			return sumaProd;
		}
			
		int sumatoriaProd(){
			int sumaProd = 0;
			for(int i = 0; i < cant; i++){
				int prod = 1;
				for(int i = 0; i < cant; i++){
					prod *= vec[i];
				}
				sumaProd += prod;
			}
			return sumaProd;
		}
			
		Contenedor contElementosCuadrados(){
			Contenedor c;
			for(int i = 0; i < cant; i++){
				c.agregarElemento(vec[i] * vec[i]);
			}
			return c;
		}
			
		Contenedor invertir(){
			Contenedor c;
			for(int i = cant - 1; i >= 0; i--){
				c.agregarElemento(vec[i]);
			}
			return c;
		}
		
		void intercambiar(int& a, int& b){
			int c = a;
			a = b;
			b = c;
		}
			
		void burbuja(){
			bool ordenado = false;
			while(!ordenado){
				ordenado = true;
				for(int i = 0; i < cant - 1; i++){
					if(vec[i] < vec[i + 1]){
						intercambiar(vec[i], vec[i + 1]);
						ordenado = false;
					}
				}
				
			}
		}
			
		void burbuja2(){
			bool ordenado = false;
			while(!ordenado){
				ordenado = true;
				for(int i = 0; i < cant - 1; i++){
					if(vec[i] > vec[i + 1]){
						intercambiar(vec[i], vec[i + 1]);
						ordenado = false;
					}
				}
				
			}
		}
			
		void invertirVec(){
//			for(int i = 0; i < cant / 2; i++){
//				intercambiar(vec[i], vec[cant - i - 1]);
//			}
			for(int i = 0, j = cant - 1; i < j; i++, j--){
				intercambiar(vec[i], vec[j]);
			}
		}
			
		
			
		string toString(){
			stringstream ss;
			ss << "====Contenedor====\n";
			for(int i = 0; i < cant; i++){
				ss << vec[i] << "\t";
			}
			ss << endl;
			return ss.str();
		}
};


int main (int argc, char *argv[]) {
	Contenedor a;
	a.agregarElemento(1);
	a.agregarElemento(2);
	a.agregarElemento(3);
	a.agregarElemento(4);
	a.agregarElemento(5);
	a.agregarElemento(6);
	
	Contenedor b;
	b.agregarElemento(7);
	b.agregarElemento(8);
	b.agregarElemento(2);
	b.agregarElemento(1);
	b.agregarElemento(7);
	//cout << boolalpha;
	//cout << b.cambiarElemento(7, -6) << endl;
	//cout << b.cambiarElemento(0, -6) << endl;
	
	cout << a.toString() << endl;
	cout << b.toString() << endl;
	cout << a.unionContenedores(b).toString() << endl;
	cout << "Sumatoria de contenedor a: " << a.sumatoria() << endl;
	cout << "Sumatoria de contenedor b con inicio en 2, y fin en 5: " 
		<< b.sumatoria(2, 5) << endl;
	
	cout << "Numeros cuadrados de contenedor b: " 
		<< b.contElementosCuadrados().toString() << endl;
	
	cout << "Contenedor a invertido: \n" << a.invertir().toString() << endl;
	
	b.burbuja();
	cout << b.toString() << endl;
	
	b.burbuja2();
	cout << b.toString() << endl;
	
	b.invertirVec();
	cout << b.toString() << endl;
	return 0;
}

