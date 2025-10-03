#include <iostream> 
#include <string>
using namespace std;

class Cliente{
    private:
    string nombre;
    string apellidos;
    string turno;
    public:
    Cliente(string nombre, string apellidos, string turno){
        this->nombre = nombre;
        this->apellidos = apellidos;
        this->turno = turno;
    }
    void imprimirDatos(){
        cout << "Nombre: " << nombre << endl;
        cout << "Apellidos: " << apellidos << endl; 
        cout << "Turno: " << turno << endl;
    }
};
class Empleado{
    private:
    string nombre;
    string apellidos;
    string categoria;
    public:
    Empleado(string nombre, string apellidos, string categoria){
        this->nombre = nombre;
        this->apellidos = apellidos;
        this->categoria = categoria;
    }
    void imprimirDatos(){
        cout << "Nombre: " << nombre << endl;
        cout << "Apellidos: " << apellidos << endl; 
        cout << "Categoria " << categoria << endl;
    }
};

int main(){
    int registro;
    cout << "¿Qué tipo de registro desea almacenar?""\n" "Pulse 1 para Cliente " "\n" "Pulse 2 para empleado";
    cin >> registro;
    cin.ignore();

   if (registro == 1){ //Cliente
   string nombre, apellidos, turno;
   cout << "Introduzca el nombre del cliente: ";
   getline(cin, nombre);
   cout << "Introduzca los apellidos del cliente: ";
   getline(cin, apellidos);
   cout << "Introduzca el turno del cliente: ";
   getline(cin, turno);

   Cliente cliente(nombre, apellidos, turno);
   cout << "\n Datos del cliente: \n";
   cliente.imprimirDatos();
   } 
   else if (registro == 2){//Empleado
   string nombre, apellidos, categoria;
   cout << "Introduzca el nombre del empleado: ";
   getline(cin, nombre);
   cout << "Introduzca los apellidos del empleado: ";
   getline(cin, apellidos);
   cout << "Introduzca la categoria del empleado: ";
   getline(cin, categoria);

   Empleado empleado(nombre, apellidos, categoria);
   cout << "\n Datos del empleado; \n";
   empleado.imprimirDatos();
   }
   else {
    cout << "Opción no válida." << endl;
   }
   return 0;
}