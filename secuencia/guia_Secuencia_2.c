/*
Calcular el sueldo de un operario ingresando por teclado la cantidad de horas que
trabajó en el mes y el valor de la hora. Mostrarle el resultado al usuario con un
mensaje adecuado.
*/

#include <stdio.h>

int main(){

    float sueldo, horas, valor_hora;
    printf("\n Calculador de sueldo");
    
    printf("\n ingrese la cantidad de horas que trabajo en el mes: ");
    scanf("%f", &horas);
    
    printf("\n Ingrese el valor por hora: "); 
    scanf("%f", &valor_hora);

    sueldo = horas*valor_hora;
    printf("Su sueldo deberia ser de: %.2f", sueldo);
    

    return 0;
}