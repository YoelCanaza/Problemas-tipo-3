#include <iostream>
using namespace std;
/*1. Implementar un programa que muestre los divisores de un número dado.*/
int main () {

    int numero;
    int indice = 0;
    int contInd = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    int divisores[numero];

    for(int i = 1; i <= numero; i++) {
        if(numero % i == 0) {
            divisores[indice] = i;
            indice += 1;
        }
    }

    cout << "Los divisores del numero " << numero << " son:" << endl;

    for(int i = 0; i < indice; i++) {
        cout << divisores[i] << endl;
    }

    return 0;
}
