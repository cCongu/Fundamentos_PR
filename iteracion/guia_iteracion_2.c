/*
Dados a y n números enteros, informar la potencia enésima de a por productos
sucesivos.
*/

#include <stdio.h>

int main(){

    int a, n, i, resultado = 1;

    printf("Ingrese un numero que quiera saber su potencia: ");
    scanf("%d", &a);

    printf("Ingrese la cantidad de veces que quiere se multiplique sucesivamente: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++ ){ //empieza por el 1 asi que va ser ej: 2*2 si el usuario ingreso n=1 se corta ahi sino sigue hasta el numero que puso el usuario
        resultado *= a; //producto sucesivo
    }
    printf("%d Elevado a la %d es: %d\n", a, n, resultado);
    
    return 0;
}