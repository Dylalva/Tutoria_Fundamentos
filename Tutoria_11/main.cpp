#include<iostream>
#include<string>
#include<sstream>

using namespace std;

class Juego{
	private:
		int id;
		string nombre;
		string genero;
		float precio;
	public:
		Juego() : Juego(1, "Zelda", "RPG, Aventura", 10950){}
		
		Juego(int id, string nombre, string genero, float precio){
			this->id = id;
			this->nombre = nombre;
			this->genero = genero;
			this->precio = precio;
		}
			
		Juego(const Juego& other){
			this->id = other.id;
			this->nombre = other.nombre;
			this->genero = other.genero;
			this->precio = other.precio;
		}
		
		virtual ~Juego(){
			
		}
			
		//getter y setter
		int getId(){
			return id;
		}

		void setId(int id){
			this->id = id;
		}

		string getNombre(){
			return nombre;
		}

		void setNombre(string nombre){
			this->nombre = nombre;
		}

		string getGenero(){
			return genero;
		}

		void setGenero(string genero){
			this->genero = genero;
		}

		float getPrecio(){
			return precio;
		}

		void setPrecio(float precio){
			this->precio = precio;
		}

		string toString(){
			stringstream s;
			s << "ID: " << id << "\nNombre: " << nombre << "\nGenero: " 
				<< genero << "\nPrecio: " << precio << "\n";
			return s.str();
		}
			
		virtual void gameplay(){
			cout << "Siendo un pro player\n";
		}
};

//class Zelda : public Juego{
//	
//};

class CuentaSteam{
	private:
		string nombreUsuario;
		string contrasena;
		Juego juegos[100];
		int numJuegos;
		int tamanoMaximo;
	public:
		CuentaSteam(string nickname, string password){
			nombreUsuario = nickname;
			contrasena = password;
			numJuegos = 0;
			tamanoMaximo = 100;
			for(int i = 0; i < tamanoMaximo; i++){
				juegos[i] = Juego();
			}
		}
		
		CuentaSteam(const CuentaSteam& other){
			this->nombreUsuario = other.nombreUsuario;
			this->contrasena = other.contrasena;
			this->numJuegos = other.numJuegos;
			this->tamanoMaximo = 100;
			for(int i = 0; i < other.numJuegos; i++){
				this->juegos[i] = Juego(other.juegos[i]);
			}
		}
			
		bool existeJuego(int id){
			for(int i = 0; i < numJuegos; i++){
				if(juegos[i].getId() == id){
					return true;
				}
			}
			return false;
		}
		
		bool insertar(Juego juego){
			if(numJuegos < tamanoMaximo && !existeJuego(juego.getId())){
				juegos[numJuegos] = juego;
				numJuegos++;
				return true;
			}
			return false;
		}
			
		Juego juegoMasCaro(){
			Juego aux(-1, "NA", "NA", -1);
			for(int i = 0; i < numJuegos; i++){
				if(juegos[i].getPrecio() > aux.getPrecio()){
					aux = juegos[i];
				}
			}
			return aux;
		}

		Juego juegoMasBarato(){
			Juego aux(-1, "NA", "NA", 999999);
			for(int i = 0; i < numJuegos; i++){
				if(juegos[i].getPrecio() < aux.getPrecio()){
					aux = juegos[i];
				}
			}
			return aux;
		}
			
		float total(){
			float suma = 0;
			for(int i = 0; i < numJuegos; i++){
				suma += juegos[i].getPrecio();
			}
			return suma;
		}
			
		CuentaSteam cuentaFamiliar( CuentaSteam& other){
			CuentaSteam aux(other); //o puede ser this
			for(int i = 0; i < this->numJuegos; i++){
				aux.insertar(this->juegos[i]);
			}
			
			return aux;
		}
			
		bool burbuja() {
			for (int i = 0; i < numJuegos - 1; i++) {
				for (int j = 0; j < numJuegos - i - 1; j++) {
					if (juegos[j].getId() > juegos[j + 1].getId()) {
						// Intercambiar juegos[j] y juegos[j + 1]
						Juego temp = juegos[j];
						juegos[j] = juegos[j + 1];
						juegos[j + 1] = temp;
					}
				}
			}
			return true;
		}
		
		void intercambiar(Juego& a1, Juego& a2){
			Juego a3 = a1;
			a1 = a2;
			a2 = a3;
		}
		
		void burbuja2(){
			bool ordenado = false;
			while(!ordenado){
				ordenado = true;
				for(int i = 0; i < numJuegos - 1; i++){
					if(juegos[i].getId() < juegos[i + 1].getId()){
						intercambiar(juegos[i], juegos[i + 1]);
						ordenado = false;
					}
				}
				
			}
		}
			
			
		bool busquedaBinaria(int id) {
			int izquierda = 0;
			int derecha = numJuegos - 1;
			
			while (izquierda <= derecha) {
				int medio = izquierda + (derecha - izquierda) / 2;
				cout << juegos[medio].toString() << endl;
				if (juegos[medio].getId() == id) {
					return true; // Juego encontrado
				}
				if (juegos[medio].getId() > id) {
					cout << "Izquierda" << endl;
					izquierda = medio + 1; // Buscar en la mitad derecha
				} else {
					cout << "Derecha" << endl;
					derecha = medio - 1; // Buscar en la mitad izquierda
				}
			}
			return false; // Juego no encontrado
		}
};

int main (int argc, char *argv[]) {
	// Cuentas
	CuentaSteam c1("kubernetero", "supersecreta");
	CuentaSteam c2("invitado", "1234");
	
	// Juegos para c1
	Juego j1(10, "Hades", "Roguelike, Accion", 8990.0);
	Juego j2(3, "Portal 2", "Puzzle", 2990.0);
	Juego j3(25, "The Witcher 3", "RPG, Aventura", 10950.0);
	Juego j4(17, "Hollow Knight", "Metroidvania", 5990.0);
	
	// Juegos para c2
	Juego k1(5, "Stardew Valley", "Simulacion", 4990.0);
	Juego k2(12, "Celeste", "Plataformas", 3990.0);
	Juego k3(33, "DOOM Eternal", "FPS", 12990.0);
	
	// Inserciones
	
	cout << boolalpha;
	cout << "Insertando en c1...\n";
	cout << (c1.insertar(j1)) << endl;
	cout << (c1.insertar(j2)) << endl;
	cout << (c1.insertar(j3)) << endl;
	cout << (c1.insertar(j4)) << endl;
	
	cout << "\nInsertando en c2...\n";
	cout << (c2.insertar(k1))<< endl;
	cout << (c2.insertar(k2)) << endl;
	cout << (c2.insertar(k3)) << endl;
	
	// Reportes por cuenta
	cout << "\n=== Cuenta c1 ===\n";
	cout << "Mas caro:\n"    << c1.juegoMasCaro().toString();
	cout << "Mas barato:\n"  << c1.juegoMasBarato().toString();
	cout << "Total c1: "     << c1.total() << "\n";
	
	cout << "\n=== Cuenta c2 ===\n";
	cout << "Mas caro:\n"    << c2.juegoMasCaro().toString();
	cout << "Mas barato:\n"  << c2.juegoMasBarato().toString();
	cout << "Total c2: "     << c2.total() << "\n";
	
	// Ordenar por id usando burbuja()
	cout << "\nOrdenando c1 por ID con burbuja()...\n";
	c1.burbuja();
	cout << "Mas caro (despues de ordenar):\n"   << c1.juegoMasCaro().toString();
	cout << "Mas barato (despues de ordenar):\n" << c1.juegoMasBarato().toString();
	
	// Cuenta familiar (copia other y le inserta los juegos de this)
	cout << "\n=== Cuenta familiar (c2 + c1) ===\n";
	CuentaSteam fam = c1.cuentaFamiliar(c2);
	cout << "Mas caro (familiar):\n"    << fam.juegoMasCaro().toString();
	cout << "Mas barato (familiar):\n"  << fam.juegoMasBarato().toString();
	cout << "Total familiar: " << fam.total() << "\n";
	cout << "Ordenando cuenta familiar\n\n\n";
	fam.burbuja2();
	cout << "Busqueda binaria" << endl;
	cout << fam.busquedaBinaria(3) << endl << endl << endl;
	cout << "Segunda busqueda\n";
	cout << fam.busquedaBinaria(25) << endl;
	return 0;
}
	
