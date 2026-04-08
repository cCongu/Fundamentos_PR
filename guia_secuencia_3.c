/*
Ingresar el radio de una esfera y calcular el volumen.
*/

#include <stdio.h>
#include <math.h>
#define M_PI 3.141592653589793

int main(){

    float radio, volumen;

    printf("Ingrese el radio de una esfera: ");
    scanf("%f", &radio);

    volumen = (4.0/3.0) * M_PI * pow(radio, 3);

    printf("El volumen de tu esfera es: %.2f", volumen);


    return 0;
}
