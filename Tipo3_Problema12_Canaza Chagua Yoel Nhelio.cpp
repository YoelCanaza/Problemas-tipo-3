#include <iostream>
#include <string>

using namespace std;
/*12. Implementar un programa que complete a un número con “n” ceros por la izquierda, hasta completar una longitud dada.*/

int main () {

    int num;
    int longitudDeseada;

    cout << "Escribe un numero: ";
    cin >> num;

    cout << "Ingresse la longitud deseada: ";
    cin >> longitudDeseada;

    string numString = to_string(num);

    if(numString.length() < longitudDeseada) {
        numString = string(longitudDeseada - numString.length(), '0') + numString;
    }

    cout << numString << endl;

    return 0;
}