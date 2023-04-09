#include <iostream>

using namespace std;
/*6. Implementar un programa que imprima los números primos menores a un número dado.*/

int main () {

    int numero;
    int primos[1000];

    cout << "Ingrese el numero tope(maximo 6000): ";
    cin >> numero;

    int contdivisores = 0;
    int contprimos = 0;

    for(int i = 2; i < numero; i++) {
        for(int j = 1; j <= i; j++) {
            if(i%j == 0) {
                contdivisores += 1;
            }
        }

        if(contdivisores == 2) {
            primos[contprimos] = i;
            contprimos += 1;
            contdivisores = 0;
        } else {
            contdivisores = 0;
        }
    }

    for (int i = 0; i < contprimos; i++) {
        cout << primos[i] << endl;
    }

return 0;
}