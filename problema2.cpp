#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero entero : ";
    cin >> num;

    // Imprimir los números impares separados por comas
    for (int i = 1; i <= num; i += 2) {
        if (i > 1) {
            cout << ", ";
        }
        cout << i;
    }

    
}
