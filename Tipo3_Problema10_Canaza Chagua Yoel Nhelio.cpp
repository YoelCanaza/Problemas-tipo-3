#include <iostream>

using namespace std;
/*10. Implementar un programa que sume los números pares de una matriz.*/

int main () {
    int n;
    cout << "ingresa la cantidad de elementos que tendra el array: ";
    cin >> n;

    int numeros[n];
    int pares[n];

    // cout << sizeof(numeros)/sizeof(int) << endl;

    cout << "Ingrese los numeros de la matriz: " << endl;

    for(int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    int contPares = 0;

    for(int i = 0; i < n; i++) {
        if(numeros[i]%2 == 0) {
            pares[contPares] = numeros[i];
            contPares += 1;
        }
    }

    cout << "Hay " << contPares << " numeros pares en la matriz." << endl;
    cout << "Los numeros pares de la matriz son: " << endl;

    for(int i = 0; i < contPares; i++) {
        cout << pares[i] << endl;
    }

    int sumaPares = 0;

    for(int i = 0; i<contPares; i++) {
        sumaPares += pares[i];
    }

    cout << "La suma de esos numeros pares es: " << sumaPares;

    return 0;
}