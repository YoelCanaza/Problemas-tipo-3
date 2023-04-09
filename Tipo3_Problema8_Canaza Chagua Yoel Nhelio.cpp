#include <iostream>

using namespace std;
/*8. Implementar un programa que cuente el número de vocales que hay en una palabra.*/

int main () {

    string palabra;

    cout << "EScriba una palabra: ";
    cin >> palabra;

    int contvocales = 0;

    int largo = palabra.length();

    for (int i = 0; i < largo; i++) {
        if(palabra[i]=='a' || palabra[i]=='e' || palabra[i]=='i' || palabra[i]=='o'|| palabra[i]=='u') {
            contvocales += 1;
        }
    }

    cout << "La palabra que escribio tiene " << contvocales << " vocales" << endl;

    return 0;
}