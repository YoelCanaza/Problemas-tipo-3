#include <iostream>
#include <string>

using namespace std;
/*13. Implementar un programa que invierta las cifras de un número. */


int main() {

    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    string int_string = to_string(num);

    int numCifras = int_string.length();

    for(int i = 0; i < numCifras; i++) {
        cout << int_string[numCifras - (i+1)];
    }

    return 0;
}
