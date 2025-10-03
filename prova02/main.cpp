#include <iostream>
#include <string>
using namespace std;

int main(){
    struct Alumno{
        string nombre;
        string apellido;
        string dni;
        double calificacion;
    };
    const int numAlumnos = 4;
    Alumno listaAlumnos[4];
    string DNIsolicitado;
    bool alumnoEncontrado = false;

    listaAlumnos[0] = {"Juan", "Lopes", "44567234P"};
    listaAlumnos[1] = {"Laura", "Peres", "23456981F"};
    listaAlumnos[2] = {"Carlos", "Lopes", "44567342G"};
    listaAlumnos[3] = {"Maria", "Gutierre", "44567342P"};
    cout << "Introduzca el DNI del alumno: ";
    cin >> DNIsolicitado;
    
    for (int i = 0; i < numAlumnos; ++i){
        if (listaAlumnos[i].dni == DNIsolicitado){
            cout << "Introduce la calificacion para " << listaAlumnos[i].nombre << " " <<listaAlumnos[i].apellido << ": ";
            cin >> listaAlumnos[i].calificacion;

            cout << "El alumno " <<listaAlumnos[i].nombre << " " <<listaAlumnos[i].apellido<< " ha obtenido un " << listaAlumnos[i].calificacion << endl; 
            
            alumnoEncontrado = true;
            break;
        } 
    }
    if (!alumnoEncontrado) {
        cout << "No se encotro ningun alumno con el DNI ingresado. " <<endl;
    }
    return 0;
}