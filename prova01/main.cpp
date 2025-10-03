#include <iostream>
#include <string.h>
using namespace std;

int main (){
    string direccion;
    double ancho, largo, superficie;
    cout << "Escriba la direccion " "\n";
    getline (cin, direccion);
    cout << "Escriba el ancho: " "\n";
    cin >> ancho;
    cout << "Escriba el largo: " "\n";
    cin >> largo;
    superficie = largo * ancho;
    cout << "La superficie de " + direccion + " es de " + to_string (superficie) + "m2";
    cin.get();
    return 0;
}