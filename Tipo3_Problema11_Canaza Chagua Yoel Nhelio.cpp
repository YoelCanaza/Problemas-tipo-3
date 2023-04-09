#include <iostream>

using namespace std;
/*11. Implemente un programa que calcule el promedio de la diagonal principal de una matriz.*/

int main () {

    int x;

    cout << "Ingrese la cantidad de filas y columnas de la matriz cuadrada: ";
    cin >> x;

    float matriz[x][x];
    float sumaDiagonal = 0;

    cout << "Ingrese los numeros de la matriz:" << endl;
    for(int i = 0; i < x; i++) {

        cout << "Ingrese los elementos de la fila " << i + 1 << endl;
        
        for(int j = 0; j < x; j++) {
            cin >> matriz[i][j];
            if(i == j) {
                sumaDiagonal += matriz[i][j];
            }
        }
    }

    cout << "Los elementos de la matriz son:" << endl;

    for(int i = 0; i < x; i++) {
        for(int j = 0; j < x; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    float promDiagonal = sumaDiagonal / x;
    cout << "El promedio de la diagonal principal de la matriz es: " << promDiagonal << endl;

    return 0;
}