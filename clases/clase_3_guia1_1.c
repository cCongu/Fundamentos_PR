/*
Hallar la superficie de un triángulo conociendo la base y la altura. Solicitarle los
datos de entrada al usuario.
*/

#include <stdio.h>

int main(){
    int base, altura;  //buenas practicas declarar las variables al principio de la funcion
    printf("ingrese la base de su triangulo: ");
    scanf("%d", &base);

    printf("ingrese la altura del triangulo: ");
    scanf("%d", &altura);

    printf("La superficie del triangulo es: %d",(base*altura)/2);

    return 0;
}




