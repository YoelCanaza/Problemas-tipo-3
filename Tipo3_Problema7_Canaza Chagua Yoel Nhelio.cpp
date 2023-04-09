#include <iostream>

using namespace std;
/*7. Implementar un programa que muestre una palabra al revés.*/

int main () {

    string palabra;

    cout << "Escribe una palabra: ";
    cin >> palabra;

    int largo = palabra.length();

    for(int i = largo - 1; i >= 0; i--) {
        cout << palabra[i];
    }

    return 0;
}