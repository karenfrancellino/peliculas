#include <iostream>
using namespace std;

int main (){
    struct jugador {
        string nombre;
        string equipo;
    };
    jugador jugadores[3];
    cout << "Introduzca su top 3 de jugadores" << "\n";
    // Bucle for para solicitar lo 3 jugadores favoritos
    for (int i = 3; i>0; i--) {
        cout << "Top " << i << "\n";
        cout << "Nombre " << "\n";
        getline(cin, jugadores[i-1].nombre);
        cout << "Equipo " << "\n";
        getline(cin, jugadores[i - 1].equipo);
    }
    //salida por pantalla del top 3 jugadores
    cout << "Su top 3 jugadores es: " "\n";
    cout << "1.-" + jugadores[0].nombre + " - " +jugadores[0].equipo << "\n";
    cout << "2.-" + jugadores[1].nombre + " - " +jugadores[1].equipo << "\n";
    cout << "3.-" + jugadores[2].nombre + " - " +jugadores[2].equipo << "\n";
    cin.get();
    return 0;
}