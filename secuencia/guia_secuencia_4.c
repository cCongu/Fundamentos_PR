/*
Calcular y mostrar la suma de los n primeros números naturales. Siendo n un
número ingresado por el usuario. Usar fórmula [ n.(n+1) ] / 2
*/

#include <stdio.h>

int main(){

    int suma, n;
    
    printf("Ingrese un numero n: ");
    scanf("%d", &n);

    suma = (( n * ( n + 1 ) ) / 2);

    // %d sirve para que imprima en un lugar expecifico
    printf("La suma de los %d primeros numeros naturales es: %d", n, suma);

    return 0;
}
