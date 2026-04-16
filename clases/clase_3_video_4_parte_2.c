//CONDICIONALES

#include <stdio.h>

void main(){
    int edad;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    if (edad < 18)
        printf("Usted es menor de edad no puede acceder");
    
    else 
        printf("Usted es mayor de edad por lo tanto puede acceder");

    return;



}
