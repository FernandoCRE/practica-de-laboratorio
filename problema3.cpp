#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;

   
    for (int num = 2; num < n; num+=1) {
        int contador = 0;
        // Comprobar si el número es primo
        for (int divisor = 2; divisor < num; divisor+=1) {
            if (num % divisor == 0) {
                contador+=1;
                break; 
            }
        }
        
        if (contador == 0) {
            cout << num << " ";
        }
    }
    
    
}
