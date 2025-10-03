#include <iostream>
using namespace std;

int main(){
    string usuario;
    string password;
    int opcionMenu;
    cout << "Introduzca su usuario, por favor." << "\n";
    cin >> usuario;
    cout << "Intoduzca su contraseña, por favor." << "\n";
    cin >> password;
    if (usuario == "Juan" && password == "NoHay2sin3"){
    cout << "Bienvenido, " + usuario + "teclee 1 para acceder." << "\n";
    cin >> opcionMenu;
    } else {
    cout << "Lo sentimos, datos incorrectos." << "\n";
    }
    cin.get();
    return 0;
}