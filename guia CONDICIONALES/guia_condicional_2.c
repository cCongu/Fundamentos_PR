/*
Ingresar tres números y hallar el mayor
*/

#include <stdio.h>

int main(){

    float n1,n2,n3;
    printf("A continuacion ingresara 3 numeros van a ser evaluados para hallar el mayor\n");
    
    printf("Ingrese el primer numero: \n");
    scanf("%f", &n1);

    printf("Ingrese el segundo numero: \n");
    scanf("%f", &n2);

    printf("Ingrese el tercero numero: \n");
    scanf("%f", &n3);

    if (n1 > n2 && n1 > n3){
        printf("El primer numero: %.2f es mayor a todos los ingresados\n", n1);
    } else if (n2 > n1 && n2 > n3){
        printf("El segundo numero: %.2f es mayor a todos los ingresados\n", n2);
    } else if (n3 > n1 && n3 > n2){
        printf("El tercer numero: %.2f es mayor a todos los ingresados\n", n3);
    } else {
        printf("Son todos iguales por lo tanto no hay mayor\n");
    }
    

    return 0;
}