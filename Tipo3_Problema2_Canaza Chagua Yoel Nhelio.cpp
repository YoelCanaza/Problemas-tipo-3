#include <iostream>
using namespace std;
/*2. Dado el siguiente bloque de código, reescribir primero utilizando el bucle do...while y
después utilizando el bucle while, de manera que ambos funcionen exactamente igual que el original
para cualquier caso. cin >> n; for(i = 1; i < n; i++) cout << i;*/

int main () {

    int n;
    int i = 1;

    cout << "Ingrese un numero: ";
    cin >> n;

    cout << "Usando do while: " << endl;
    do {
        cout << i;
        i += 1;
    } while (i < n);

    i = 1;
    cout << endl << "Usando while: " << endl;
    while(i < n) {
        cout << i;
        i += 1;
    }

    return 0;
}
