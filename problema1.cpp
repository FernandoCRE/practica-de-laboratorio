/*Si se imprimiera todos los n´umeros naturales menores que 10, los cuales sean multiplos de 3 o 5, obtendr´ıamos: 3, 5, 6, 9. La suma
de estos m´ultiplos es 23.
Encontrar la suma de todos los m´ultiplos de 3 o 5 menores a 1000000.*/

#include <iostream>
using namespace std;

int main(){

    int num=0;
    long long suma{0};

    while(num<1000000){

        if (num%3==0 || num%5==0){
            suma+=num;
        }
        num+=1;
    }
    cout<<suma;
}