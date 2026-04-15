/*
Ingresar un número (del 1 al 7) que representa un día de la semana, escribir el
nombre del día correspondiente. En el caso de haber ingresado un número fuera de
rango indicarle del error al usuario.
*/
#include <stdio.h>

int main(){

    int usuario;

    printf("Ingrese el numero (del 1 al 7) que representa un dia de la semana: ");
    scanf("%d", &usuario);

    if (usuario == 1){
        printf("El numero %d es el dia lunes\n",usuario);
    } else if (usuario == 2){
        printf("El numero %d es el dia martes\n",usuario);
    } else if (usuario == 3){
        printf("El numero %d es el dia miercoles\n",usuario);  
    } else if (usuario == 4){
        printf("El numero %d es el dia jueves\n",usuario);
    } else if (usuario == 5){
        printf("El numero %d es el dia viernes\n",usuario);
    } else if (usuario == 6){
        printf("El numero %d es el dia sabado\n",usuario);
    } else if (usuario == 7){
        printf("El numero %d es el dia domingo\n",usuario);
    } else {
        printf("El numero ingresado no esta en el rango indicado (1 al 7)");
    }
    
    return 0;
}