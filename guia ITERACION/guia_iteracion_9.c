/*
19) Escribir un programa que permita al usuario ingresar los montos de las compras
de un cliente y que al finalizar informe por pantalla el importe total a pagar,
teniendo en cuenta que si éste supera los $1000 se le debe aplicar un 10% de descuento.
Se desconoce la cantidad de datos que se van a ingresar.
La carga de datos finaliza cuando el usuario ingresa el monto 0 (cero).
Se debe validar que no se ingresen montos negativos indicando al usuario monto invalido.
*/

#include <stdio.h>

int main(){
    
    float monto;
    float total = 0;
    int contador_montos = 1;

    printf("ingrese el monto N°%d (Ingrese  el monto 0 para finalizar el programa): ",contador_montos);
    scanf("%f", &monto);
    
    // bucle que se repetira siempre que el valor no sea 0, sino finaliza el programa
    while (monto != 0){
        contador_montos ++;
        
        // mientras el monto sea menor a 0 indicara que el valor es invalido y tendra que volver a ingresar, no se cierra el bucle
        if (monto < 0){ 
            printf("Monto invalido \n");
        
        // mientras el monto sea mayor a 1000 aplicara un descuento del 10%
        } else {  
            if (monto >= 1000){
                printf ("Tiene un 10%% de descuento\n");
                monto *= 0.9; // multiplica el numero por 0.9 para solo sacar %10 
            }
            total += monto; // el valor modificado anterior se va ver modificado en el total y tambien los montos inferiores a 1000
        }  

        // Mensaje del bucle sino se finaliza con el 0 se seguira repitiendo 
        printf("ingrese el monto N°%d (Ingrese  el monto 0 para finalizar el programa) : ",contador_montos);
        scanf("%f", &monto);
    }
    printf("Se ha finalizado el programa. Cantidad final a pagar es de $%.2f",total);


    return 0;
}