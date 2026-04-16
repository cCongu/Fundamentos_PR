/*
22) Se tiene un listado de alumnos que consiste en número de padrón y 4 notas por
alumno. Informar el mayor y el menor promedio registrado junto con el número de
padrón del alumno, suponiendo que ambos son únicos.
*/

#include <stdio.h>

int main (){

    int padron,i,padron_mayor, padron_menor;
    float suma, notas, promedio ,mayor_promedio, menor_promedio;
    int primer_ingresante = 1;

    //para hacer el bucle while tengo que hacer un factor "sanguchito" denominado por mi, hay que utilizar el mismo printf y scanf para encerrar al while y que siga el bucle hasta que este fuera de su condicion.
    printf("Ingrese su numero de padron (para finalizar el programa ingrese 0) N°%d : ",primer_ingresante);
    scanf("%d", &padron);
    
    while (padron != 0){

        //incializo la suma adentro del while para que no se vayan sumando los promedios y se puedan guardar correctamente dependiendo si su valor es mayor o menor comparando los ingresados.
        suma = 0;
        
        //ciclo for para calcular un maximo de 4 notas
        for (i = 1; i <= 4; i++){
            printf("ingrese su nota N°%d :",i);
            scanf("%f", &notas);
            suma += notas;
        }
        
        //para calcular el promedio de un for hay que llevarlo afuera pero sin antes sumar por cada nota ingresada.
        promedio = suma / 4;
        printf("El promedio del padron (%d) es de %.2f \n",padron, promedio);
        
        //comparo cada vez que ingresen promedios evaluando cual es el mayor y cual el menor.
        if (primer_ingresante){
            mayor_promedio = menor_promedio = promedio;
            padron_mayor = padron_menor = padron;
            primer_ingresante = 0;
        } 
        else {
            
            // El promedio si es mayor a mayor_promedio se actualizara para indicar quien es mayor a medida que ingresan los promedios.
            if (promedio > mayor_promedio){
                mayor_promedio = promedio;
                padron_mayor = padron;
            }

            // El promedio si es menor a menor_promedio se actualizara para indicar quien es menor a medida que ingresan los promedios.
            if (promedio < menor_promedio){
                menor_promedio = promedio;
                padron_menor = padron;
            }
        }

    printf("ingrese su numero de padron (para finalizar el programa ingrese 0) N°%d :",primer_ingresante);
    scanf("%d", &padron);
    } 
    printf("Programa finalizado usted a ingresado el numero 0 \n");
    printf("El padron (%d) tiene el promedio mas alto, teniendo promedio de (%.2f)\n",padron_mayor,mayor_promedio);
    printf("El padron (%d) tiene el promedio mas bajo, teniendo promedio de (%.2f)\n",padron_menor,menor_promedio);
    
    return 0;
}