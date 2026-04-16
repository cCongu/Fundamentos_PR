/*
7) Escribir una función que dados a y b devuelva el cociente de la división
entera, sin utilizar el operador correspondiente del lenguaje. Para esta
resolución deben considerar la utilización de restas sucesivas.
*/

#include <stdio.h>

int cociente(int dividiendo, int divisor){
    
    int contador = 0;

    while (dividiendo >= divisor){
        dividiendo = dividiendo - divisor;
        contador++;
    }
    return contador;
}

int main(){
    int dividiendo, divisor, resultado;

    printf("Ingrese el dividiendo (a) (Ingrese el numero 0 para cerrar el programa): ");
    scanf("%d", &dividiendo);

    while(dividiendo != 0){
        
        printf("Ingrese el divisor (b): ");
        scanf("%d", &divisor);

        if (divisor == 0){
            printf("Error no se puede dividir por cero \n");
        }
        else {
            resultado = cociente(dividiendo, divisor);
            printf("El cociente de (%d / %d) : %d \n",dividiendo, divisor, resultado);
        }

    printf("Ingrese el dividiendo (a) (Ingrese el numero 0 para cerrar el programa): ");
    scanf("%d", &dividiendo);
    }
    printf("El programa ha finalizado.");

    return 0;
}






