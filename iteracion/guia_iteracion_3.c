/*
13) Solicitar un número entero positivo al usuario y calcular su factorial. En el caso de
ingresar un número negativo mostrar un mensaje que diga “no se puede calcular el factorial
del número ingresado”.
Recordar que por definición factorial(0)=1 y factorial(1)=1
*/

#include <stdio.h>

int main(){

    int n_entero, resultado = 1, i;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n_entero);

    if (n_entero > 0){
        for (i = 1; i <= n_entero ; i++){ //i inicializa con el 1 y aumenta en base al numero ingreso
            resultado *= i; //acumulamos el producto inicia multiplicando 1*1 hasta n veces
            
        }
        printf("El factorial de %d! es %d\n", n_entero, resultado); // el print va afuera para que no imprima cada vez que calcula el for, imprime la cuenta final 
            
    }
    else {
        printf("Vuelva a intentar. Usted ingreso ( %f ) se le solicito un numero positvo entero",n_entero);
    }     

    return 0;
}