/*
15) Dada una serie de números ingresados de a uno.
Indicar mayor, menor y promedio de la serie.
El ingreso de números finaliza cuando el usuario ingresa 0.
*/

#include <stdio.h>

int main(){

    int num, mayor, menor, suma = 0, contador = 0;
    float promedio;

    printf("Ingrese numeros (0 para terminar el programa): \n");
    scanf("%d", &num);

    if (num == 0){
        printf("Programa finalizado");
        return 0;
    }
    mayor = menor = num; //se actualiza a medida que el usuario ingresa numeros
    suma += num; //va ir sumando a medida que se ingresan numeros
    contador ++;

    // bucle para seguir leyendo
    // while (1) = infinito, sigue andando hasta que el operador lo detiene
    while(1){
        
        //imprime la cantidad de veces que se ejecuta el programa
        printf("N°%d: ",contador +1);
        scanf("%d", &num);
        
        if (num == 0){
            break;
        }
        else if (num > mayor) mayor = num;
        else if (num < menor) menor = num;

        suma += num;
        contador ++;
    }
    //calcular promedio
    promedio = suma / contador;

    printf("Mayor %d: ",mayor);
    printf("Menor %d: ",menor);
    printf("Promedio %f", promedio);

    return 0;
}