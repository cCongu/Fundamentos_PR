//CONDICIONALES

#include <stdio.h>

void main(){

    int x,y;
    printf("El valor de X es: ");
    scanf("%d", &x);

    printf("El valor de Y es: ");
    scanf("%d", &y);

    if (x > y)
        printf("El valor de X es mayor a Y");
        else 
            if (x < y)
                printf("El valor de Y es mayor a X");
            else 
                printf("X y Y son iguales");
    return;
}