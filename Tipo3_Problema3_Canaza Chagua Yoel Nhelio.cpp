#include <iostream>

using namespace std;
/*3. Dado el siguiente bloque de código, reescribir primero utilizando el bucle while
y después utilizando el bucle for, de manera que ambos funcionen exactamente igual
que el original para cualquier caso.
i = 0; cin << n; do { i = i + 1; cout << i; } while (i <= n);*/

int main () {

    int i = 0;
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;

    cout << "Usando while:" << endl;
    while(i <= n) {
        i = i + 1;
        cout << i;
    }

    cout << endl << "Usando for:" << endl;
    for(int i = 0; i <= n; i++) {
        cout << i + 1;
    }

    return 0;
}
