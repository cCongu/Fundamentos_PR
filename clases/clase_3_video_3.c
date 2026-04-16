#include <stdio.h>

int main(){
    
    int valor1 , valor2;

    printf("ingrese el primer valor a calcular: ");
    scanf("%d", &valor1);
    printf("ingrese el segundo valor a calcular: ");
    scanf("%d", &valor2);
    
    //suma
    printf("La suma de valor1 y valor2 es: %d\n",valor1+valor2);
    //resta
    printf("La resta de valor1 y valor2 es: %d\n",valor1-valor2);
    //division entera
    printf("La division entera de valor1 y valor2 es: %d\n",valor1/valor2);
    //division con float
    printf("La divison con float de valor1 y valor2 es: %f\n",(float)valor1/valor2); //si deseas dividir y obtener un resultado flotante no hace falta cambiar la identacion de la variable al inicio de la funcion, en cambio se puede agregar al momento de realizar la cuenta
    //multiplicacion
    printf("La multiplicacion del valor1 y valor2 es: %d\n",valor1*valor2);    
    
    
    return(0);


}