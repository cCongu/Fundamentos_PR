/*
14) Escribir un programa que muestre las tablas de multiplicar desde la tabla del 1 hasta la
tabla del 9 para los primeros 100 números naturales.
*/


#include <stdio.h>

int main(){

    int i, j;

    //tabla del 1 al 9
    for (i = 1; i <= 9; i++ ){
        printf("Tabla del %d\n", i);
        
        for (j = 0; j <= 100; j++ ){

        printf("%d x %d = %d\n", i, j, i * j);

        }
        printf("\n");
    }
   
    return 0;
}