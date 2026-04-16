/*
3) Escribir una función que reciba un valor entero y calcule el factorial del
mismo. Si no se puede calcular el factorial del valor recibido, la función deberá
devolver 0, de lo contrario deberá devolver el valor calculado.
*/

/**/
#include <stdio.h>

int calFactorial(int entero){

    int i,resultado;
    
    //evaluo si el entero es positivo, apartir de esa condicion le doy como numero inicial a resultado 1 para que calcule apartir del 1*2*3 n veces
    if (entero > 0){
        resultado = 1;

        //calculadora de factorial
        for (i = 1; i <= entero; i++){  
            resultado *= i;
        }
    }
    // si el programa es menor a cero devolvera 0
    else {
        resultado = 0;
    }

    return resultado;
}
int main(){
    int num_operador, resultado;

    printf("Ingrese algun numero entero a calcular su factorial: ");
    scanf("%d", &num_operador);

    printf("Su numero es (%d) y Su factorial es: (%d)",num_operador,calFactorial(num_operador));

    return 0;
}
