/*
2) Escribir una función que dado un número entero, devuelva un valor booleano
que indique si dicho número es primo o no. Antes de plantear una solución ten
presente las siguientes preguntas.
*/

#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int numero){

    //incializo diciendo que primo es verdadero
    bool primo = true;
    int i = 2;

    //hago checkeos para verificar cuando primo va ser falso
    if (numero <= 1){
        primo = false;
    }
    else {
        // evaluo que por cada vez que se multiplique por si mismo i y sea menor igual al numero primo i se va a sumar
        for (i; i * i <= numero && primo; i++){
            //si el resto de numero evaluado en i da 0 va a verificar que no es primo devolviendo que es falso
            if (numero % i == 0){
                primo = false;
            }
        }
    }
    return primo;
}
int main(){

    int numero_op;

    printf("Ingrese algun numero a averiguar si es primo o no: ");
    scanf("%d", &numero_op);
    
    //prints de sobra son solo para indicar al usuario que lo que ingresa lo devuelve en numeros enteros representando verdadero o falso
    printf("True = (1)\n");
    printf("False = (0)\n");

    //llamo a la funcion esPrimo con la variable que ingresa el usuario para que evalue en base a la funcion
    printf("Su numero %d, es: %d",numero_op,esPrimo(numero_op));

    return 0;
}

/*
a) ¿Tiene sentido seguir evaluando más divisores?
No.
En tu función, el ciclo for (i; i * i <= numero && primo; i++) se detiene automáticamente cuando encuentra un divisor (numero % i == 0), porque en ese momento primo pasa a false.
Esto cumple exactamente con la idea: una vez hallado un divisor distinto de 1 y del número mismo, ya sabemos que no es primo, y no tiene sentido seguir evaluando.
*/

/*
b) ¿Tiene sentido seguir en un ciclo si el número es par y distinto de 2?
Tampoco.
Tu código lo maneja indirectamente: si el número es par, el primer divisor que prueba es i = 2, y como numero % 2 == 0, inmediatamente marca primo = false.
Por tanto, el ciclo no continúa.
Podrías optimizarlo aún más agregando una verificación previa:
*/

/*
c) ¿Puedo encontrar un divisor mayor que número/2?
No.
Todo divisor distinto de 1 y del número mismo debe ser menor o igual a la raíz cuadrada del número, porque si existiera uno mayor, el otro factor sería menor que la raíz cuadrada.
Tu condición i * i <= numero refleja exactamente eso: no hace falta evaluar más allá de la raíz cuadrada.
*/