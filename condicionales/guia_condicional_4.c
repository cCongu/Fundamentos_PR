/*
Ingresar un número (del 1 al 12) que representa un mes, indicar la cantidad de
días de dicho mes.
*/

#include <stdio.h>

int main(){

    int usuario;
    
    printf("ingrese un numero del 1 al 12, cada numero representa un mes: ");
    scanf("%d", &usuario);

    if (usuario == 1){
        printf("El numero %d representa a enero\n",usuario);
        printf("Tiene 31 dias");
    } else if (usuario == 2){
        printf("El numero %d representa a febrero\n",usuario);
        printf("Tiene 28 dias");
    } else if (usuario == 3){
        printf("El numero %d representa a marzo\n",usuario);
        printf("Tiene 31 dias");  
    } else if (usuario == 4){
        printf("El numero %d representa a abril\n",usuario);
        printf("Tiene 31 dias");
    } else if (usuario == 5){
        printf("El numero %d representa a mayo\n",usuario);
        printf("Tiene 31 dias");
    } else if (usuario == 6){
        printf("El numero %d representa a junio\n",usuario);
        printf("Tiene 31 dias");
    } else if (usuario == 7){
        printf("El numero %d representa a julio\n",usuario);
        printf("Tiene 31 dias");
    } else if (usuario == 8){
        printf("El numero %d representa a agosto\n",usuario);
        printf("Tiene 31 dias");
    } else if (usuario == 9){
        printf("El numero %d representa a octubre\n",usuario);
        printf("Tiene 31 dias");
    } else if (usuario == 10){
        printf("El numero %d representa a septiembre\n",usuario);
        printf("Tiene 31 dias");
    } else if (usuario == 11){
        printf("El numero %d representa a octubre\n",usuario);
        printf("Tiene 31 dias");
    } else if (usuario == 12){
        printf("El numero %d representa a diciembre\n",usuario);          
        printf("Tiene 31 dias");
    } else
        printf("Error flaco te dije del 1 al 12, cerra esto y volve (shift + f5, f5) ☻");
    return 0;
}