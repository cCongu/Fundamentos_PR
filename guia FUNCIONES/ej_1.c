/*
1) Escribir una función que reciba un valor n, entero, y devuelva la suma de los
valores entre 0 y n.
Ejemplos:
suma_n(5) = 15
suma_n(120) = 7260
suma_n(120120) = 7214467260
*/

//funcion que recibe un valor n y devuelve la suma de los valores entre 0 y n
//inicializa la entrada de numeros a sumar desde 0

#include <stdio.h>

int suma_n(int n){
    
    int suma = 0, i = 0;
    
    while (i <= n){
        suma += i;
        i = i + 1;
    }
    return suma;
}
int main(){
    
    printf("suma_n(5) = %d \n",suma_n(5));
    printf("suma_n(120) = %d \n",suma_n(120));
    printf("suma_n(120120) = %d \n",suma_n(120120));

    return 0;
}