// CICLO FOR
/* Ejemplo que usa un for.
Imprime los numeros del 1 al 100.

El for necesita:
1: una variable_contador con su valor_inicial
2: condicion que debe cumplir la variable_contador
3: incremento o decremento que se le aplicará en cada ciclo a la variable_contador
*/

// ciclo creciente
#include <stdio.h>

void main(){

    int contador;

    for (contador = 1; contador <= 100; contador ++) // inicia el contador desde el 1, el contador alcanza su maximo valor al llegar al 100, el contador va estar sumando continuamente hasta su limite 100
        printf("%d\n", contador);

    return;
}