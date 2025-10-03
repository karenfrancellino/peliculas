#include <iostream>
#include <string>
using namespace std;

int main(){
    string** clientes;
    int numClientes, numCampos;
    string* campos;
    cout << "Ingrese la cantidad de clientes que desea almacenar";
    cin >> numClientes;
    cout << "Ingrese la cantidad de campos que tiene cada cliente";
    cin >> numCampos;
    clientes = new string*[numClientes];
    campos = new string[numCampos];
    cout << "Ingrese el nombre del campo:\n";
    for (int i = 0; i < numCampos; ++i) {
    cout << "Campo " << i + 1 << ": ";
    cin >> campos[i];
    }
    for (int i = 0; i < numClientes; ++i) {
        clientes[i] = new string[numCampos];
        cout << "\n Ingrese los valores para el cliente " << i + 1 << ":\n";
        for (int j = 0; j < numCampos; ++j) {
            cout << campos[j] << ": ";
            cin >> clientes[i][j];
        }
    }
    delete[] campos;
    for (int i = 0; i < numClientes; ++i) {
        delete[] clientes[i];
    }
    delete[] clientes;
    return 0;
}