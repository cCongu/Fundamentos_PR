/*
4) Escribir una función que dados 2 números, calcule el porcentaje que el
primero representa respecto del segundo.
*/

#include <stdio.h>

float fun_porcentaje(float numero_1, float numero_2){

    float porcentaje;

    if (numero_2 != 0){
        porcentaje = (numero_1 / numero_2) * 100;
    }
    else {
        porcentaje = 0;
    }
    
    return porcentaje;
}

int main(){

    float numero_1_op, numero_2_op;

    printf("Ingrese el primer numero: ");
    scanf("%f", &numero_1_op),

    printf("Ingrese el segundo numero: ");
    scanf("%f", &numero_2_op);

    printf("El porcentaje que el primer numero (%.2f) representa respecto del segundo (%.2f) es: (%.2f)",numero_1_op, numero_2_op, fun_porcentaje(numero_1_op, numero_2_op));

    return 0;
}