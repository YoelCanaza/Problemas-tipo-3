#include <iostream>

using namespace std;
/*4. Implementar un programa que muestre la tabla de multiplicar de un número. Utilizando for y while.*/

int main () {

    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "Usando for:" << endl;
    for(int i = 1; i < 11; i++) {
        cout << numero << " * " << i << " = " << numero * i << endl;
    }
    cout << endl;

    cout << "Usando while:" << endl;
    int iteraciones = 1;
    while(iteraciones < 11) {
        cout << numero << " * " << iteraciones << " = " << numero * iteraciones << endl;
        iteraciones++;
    }

    return 0;
}