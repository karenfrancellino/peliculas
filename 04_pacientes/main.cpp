#include <iostream>
using namespace std;

class Paciente {
    private:
    string nombre;
    string apellidos;
    public:
     void setPaciente (string nombre, string apellido){
        this->nombre = nombre;
        this->apellidos = apellidos;
     }
     string getNombreCompleto (){
        return this->nombre + " " +this->apellidos;
     }
};
int main(){
    string nombre;
    string apellidos;
    Paciente paciente;
    Paciente pacientes[3] = {};
    for (int i = 0; i < 3; i++) {
        cout << "Paciente nº "<< i + 1 << "\n";
        cout << "Introducir nombre" << "\n";
        getline(cin, nombre);
        cout << "Introducir apellidos" << "\n";
        getline(cin, apellidos);
        paciente.setPaciente(nombre, apellidos);
        pacientes[i] = paciente;
    }
    cout << "Listado de Pacientes" << "\n";
    for (int i = 0; i < 3; i++){
        cout << i+1 << ".- " << pacientes[i].getNombreCompleto() << "\n";
    }
    cin.get();
    return 0;
}