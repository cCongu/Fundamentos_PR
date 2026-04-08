/*
17) Generar un dibujo por pantalla con el siguiente patrón solicitando al usuario la altura.
Ejemplo: altura=5 debe dibujar por pantalla:
*
**
***
****
*****
*/

#include <stdio.h>

int main(){

    int j,i,altura;
    
    printf("Ingrese la altura: ");
    scanf("%d", &altura);

    // primer for evalua la cantidad maxima a evaluar el segundo for
    for (i = 1; i <= altura ; i++){
        
        // este segundo for va a imprimir por cada cantidad el ciclo for anterior asi hasta llegar a el valor de i deseado
        for (j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n"); 
    }

     
    return 0;
}