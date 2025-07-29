#include <iostream>
using namespace std;

class Objeto {
    // Definición de la clase Objeto
    private:
    // Aquí podrías definir variables y/o métodos privados de la clase
    int variablePrivada;
    void metodoPrivado() {
        // Código del método privado, este método no puede ser accedido desde fuera de la clase, pero un
        // método público de la clase puede llamarlo.
        cout << "Este es un método privado de la clase Objeto." << endl;
    }
    
    public:
    Objeto() {
        // Constructor de la clase sin PARAMETROS
        // Aquí podrías inicializar variables o realizar otras acciones al crear un objeto
        cout << "Objeto creado." << endl;
    }
    ~Objeto() {
        cout << "Objeto destruido." << endl;
    }


    void mostrar() {
        cout << "Este es un objeto de la clase Objeto." << endl;
    }

    void llamarMetodoPrivado() {
        // Método público que puede llamar al método privado
        metodoPrivado();
    }

};

int main() {
    Objeto e; // Creación de un objeto de la clase Objeto
    e.mostrar(); // Llamada al método público para mostrar información del objeto
    e.llamarMetodoPrivado(); // Llamada al método que accede al método privado

    return 0;
}
