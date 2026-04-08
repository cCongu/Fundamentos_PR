/*
16) Dado un número entero positivo ingresado por el usuario, procesarlo e indicar:
(realizar un programa diferente para cada caso)
a) La cantidad de dígitos pares e impares que lo componen.
b) El menor y el mayor dígito del número.
Recordar uso de división y módulo:
Ejemplo:
111 / 10 = 11
111 % 10 = 1
*/

#include <stdio.h>

int main(){

    // mayor = -1 y menor = 9 ,dado que son valores iniciales fuera del rango para garantizar el primer digito leido actualice las variables. 
    int n_usuario, resultado, mayor = -1 , menor = 9;

    printf("Ingrese un numero entero: ");
    scanf("%d", &n_usuario);

    // ciclo for para separar cada digito y evaluarlo de diferente manera.
    for (;n_usuario > 0; n_usuario= n_usuario / 10){
       
        resultado = n_usuario % 10;

        // (PUNTO A) condicion para calcular si es par o impar cada digito.
        if (resultado % 2 == 0){
            printf("( %d ) es par\n", resultado);                  
        }
        else{
            printf("( %d ) es impar\n",resultado);
        }
        // (PUNTO B) condicion para calcular mayor y menor de los digitos.
        if (resultado > mayor){
            mayor = resultado;
        }
        else if(resultado < menor){
            menor = resultado;
        }
    }
    printf("El mayor es ( %d )",mayor);
    printf("El menor es ( %d )",menor);

    return 0;
}