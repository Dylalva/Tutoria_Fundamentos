#include<iostream>
#include<string>
#include<sstream>
#include<math.h>
using namespace std;

class Sucursal{
	private:
		int id;
		string nombre;
		string ciudad;
		string pais;
		int trabajadores;
		
	public:
		Sucursal(int i, string n, string c, string p, int t){
			id = i;
			nombre = n;
			ciudad = c;
			pais = p;
			trabajadores = t;
		}
		
		Sucursal() : Sucursal(-1, "", "", "", -1){}
		
		virtual ~Sucursal(){}
		
		int getId(){
			return id;
		}
			
		int getTrabajadores(){
			return trabajadores;
		}
		
		string getNombre(){
			return nombre;
		}
			
		string getCiudad(){
			return ciudad;
		}
			string getPais(){
			return pais;
		}
			
		string toString(){
			stringstream s;
			s << "ID: " << id << "\nNombre: " << nombre << "\nCiudad: " 
				<< ciudad << "\nPais " << pais << "\n" << "Trabajadores: " 
				<< trabajadores << "\n";
			return s.str();
		}

};

#define TAM_VEC 10

class Compania{
	private:
		//Atributos clave
		Sucursal vec[10];
		int numSucursales;
		int tamano;
		//atributos extra
		string nombre;
		string paisOrigen;
		float patrimonio;
		
	public:	
		Compania(string nom, string pais, float patri){
			nombre = nom;
			paisOrigen = pais;
			patrimonio = patri;
			
			numSucursales = 0;
			tamano = 10; // DEBE SER IGUAL AL TAMAÑO ASIGNADO EN EL VECTOR
			for(int i = 0; i < tamano; i++){
				vec[i] =  Sucursal();
			}
		}
		
		void insertar(Sucursal element){
			if(numSucursales < tamano){
				vec[numSucursales] = element;
				numSucursales++;
				
				return;
			}
			cout << "Ya no hay espacio" << endl;
		}
			
		bool existeSucursal(int id){
			for(int i = 0; i < numSucursales; i++){
				if(vec[i].getId() == id){
					return true;
				}
			}
			return false;
		}
			
		bool eliminar(int id){
			for(int i = 0; i < numSucursales; i++){
				if(vec[i].getId() == id){
					for(int j = i; j < numSucursales - 1; j++){
						vec[j] = vec[j + 1];
					}
					numSucursales--;
				}
			}
		}
		
		int totalTrabajadores(){
			int suma = 0;
			
			for(int i = 0; i < numSucursales; i++){
				suma += vec[i].getTrabajadores();
			}
			
			return suma;
		}
			
		void burbuja(){
			for(int i = 0; i < numSucursales; i++){
				for(int j = 0; j < numSucursales - i - 1; j++){
					if(vec[j].getId() < vec[j + 1].getId()){
						Sucursal aux = vec[j];
						vec[j] = vec[j + 1];
						vec[j + 1] = aux;
					}
				}
			}
			
		}
		
		string toString(){
			stringstream s;
			s << "Compania: " << nombre << "\nCantidad de sucursales: " 
				<< numSucursales << "\nPatrimonio: " << patrimonio << "\nTam: " << tamano << endl;
			for(int i = 0; i < numSucursales; i++){
				s << vec[i].toString() << endl;
			}
			return s.str();
		}
			
		float mediaTrabajadores(){
			//(a1+a2+...+an)/n
			float suma = 0;
			
			for(int i = 0; i < numSucursales; i++){
				suma += vec[i].getTrabajadores();
			}
			
			//return totalTrabajadores() / numSucursales;
			return suma / numSucursales;
		}
			
		int modaCantTrabajadores(){
			int cantidad = 0;
			int numTrabajores = 0;
			//{numTrabajores : cantidad;}
			for(int i = 0; i < numSucursales; i++){
				int cantTrabajadores = vec[i].getTrabajadores();
				int cant = cantRepetidos(cantTrabajadores);
				if(cant > cantidad){
					numTrabajores = cantTrabajadores;
					cantidad = cant;
				}
			}
			return numTrabajores;
		}
			
		int cantRepetidos(int trabajadores){
			int cant = 0;
			for(int i= 0; i < numSucursales; i++){
				if(vec[i].getTrabajadores() == trabajadores){
					cant++;
				}
			}
			return cant;
		}
};

int main (int argc, char *argv[]) {
	Compania c("TechGlobal", "Estados Unidos", 450.5);
	
	c.insertar(Sucursal(1, "Sucursal Norte", "Chicago", "EEUU", 120));
	c.insertar(Sucursal(2, "Sucursal Sur", "Miami", "EEUU", 80));
	c.insertar(Sucursal(3, "Sucursal Este", "Nueva York", "EEUU", 200));
	c.insertar(Sucursal(4, "Sucursal Oeste", "Los Angeles", "EEUU", 150));
	c.insertar(Sucursal(5, "Sucursal Europa", "Madrid", "España", 90));
	c.insertar(Sucursal(6, "Sucursal Asia", "Tokio", "Japon", 300));
	c.insertar(Sucursal(7, "Sucursal Latam", "Ciudad de Mexico", "Mexico", 250));
	c.insertar(Sucursal(8, "Sucursal Andina", "Bogota", "Colombia", 100));
	c.insertar(Sucursal(9, "Sucursal Cono Sur", "Buenos Aires", "Argentina", 100));
	c.insertar(Sucursal(10, "Sucursal Caribe", "Santo Domingo", "Republica Dominicana", 70));
	
	cout << c.toString() << endl;
	
	cout << "Total de trabajadores: ";
	cout << c.totalTrabajadores() << endl;
	
	c.eliminar(1);
	
	cout << c.toString() << endl;
	
	cout << "Total de trabajadores: ";
	cout << c.totalTrabajadores() << endl;
	
	cout << boolalpha;
	cout << c.existeSucursal(2) << endl;
	cout << c.existeSucursal(1) << endl;
	
	c.burbuja();
	
	cout << c.toString() << endl;
	return 0;
}

