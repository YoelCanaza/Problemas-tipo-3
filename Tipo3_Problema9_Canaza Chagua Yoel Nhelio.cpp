#include <iostream>

using namespace std;
/*9. Implementar un programa que muestre los “n” términos de la serie Fibonacci.*/

int main () {

    int n;
    cout << "ingrese los 'n' terminos de la serie finobacci que desea ver: ";
    cin >> n;

    int fibonacci[n] = {0, 1};

    for(int i = 2; i < n; i++) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }

    for(int i = 0; i < n; i++) {
        
        if(i < n-1) {
            cout << fibonacci[i] << ", ";
        } else if (i == n-1) {
            cout << fibonacci[i];
        }
    }

    return 0;
}