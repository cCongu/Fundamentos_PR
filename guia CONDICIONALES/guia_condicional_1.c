/*
Ingresar un número entero y decir si:
a) es par o impar.
b) es mayor, menor o igual a cero.
*/

#include <stdio.h>

int main(){

    int numero_entero;

    printf("Ingresar un numero entero: ");
    scanf("%d", &numero_entero);

    // condicional para evaluar par e impares
    if (numero_entero % 2 == 0){
        printf("A) El numero %d es par. \n",numero_entero);
    }   else {
        printf("A) El numero %d es impar. \n",numero_entero);
    }

    // condicional para evaluar si es mayor, menor o igual a cero
    if (numero_entero > 0){
        printf("B) El numero %d es mayor a 0.\n",numero_entero);
    }   else if (numero_entero < 0){
        printf("B) El numero %d es menor a 0.\n",numero_entero);
    }   else {
        printf("B) El numero %d es igual a 0.\n",numero_entero);
    }
    
    return 0;
}