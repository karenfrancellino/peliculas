#include <iostream>
using namespace std;

int main() {
    string nombre, apellido, nombre_completo;
    cout << "Por favor ecriba su nombre" << "\n";
    cin >> nombre;
    cout << "Por favor escriba su apellido" << "\n";
    cin >> apellido;
    nombre_completo = nombre + " " + apellido;
    cout << "Bienvenido " + nombre_completo + "\n";
    cin.get();
    return 0;
}