#include <iostream>
using namespace std;
/*5. Implemente un programa que cuente los números pares e impares que hay
en una lista de números aleatorios ingresados por teclado.*/
int main () {
    int cant;
    int pares = 0;
    int impares = 0;
    cout << "Cuantos numeros tendra la lista?: ";
    cin >> cant;

    int lista[cant];
    cout << "Ingrese los numeros de la lista: " << endl;
    for(int i = 0; i<cant; i++) {
        cin >> lista[i];
    }

    for (int i = 0; i < cant; i++) {
        if(lista[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
    cout << "En la lista hay:" << endl;
    cout << pares << " pares" << endl;
    cout << impares << " impares" << endl;
    return 0;
}
