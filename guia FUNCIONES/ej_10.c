/*
10) Escribir una función que dado un tiempo expresado en segundos, devuelva
por parámetros el equivalente en días, horas, minutos y segundos.
Utilizar esta función dentro de un programa que solicite el valor al usuario.
Se debe validar que el valor ingresado sea entero positivo, de lo contrario,
deberá mostrarse el mensaje: “Valor ingresado inválido”.
*/

#include <stdio.h>

void descomponer_tiempo(int total_segundos, int *dias, int *horas, int *minutos, int *segundos){

    *dias = 0;
    *horas = 0;
    *minutos = 0;
    *segundos = 0;

    *dias = total_segundos / 86400;  //1 dia = 86400segundos, 1hora = 3600segundos, 1minuto = 60segundos
    total_segundos = total_segundos % 86400;

    *horas = total_segundos / 3600;
    total_segundos = total_segundos % 3600;
    
    *minutos = total_segundos / 60;
    total_segundos = total_segundos % 60;

    *segundos = total_segundos;

    }

int main(){

    int segundos_operador;
    int dias,horas,minutos,segundos;

    printf("Ingrese la cantidad de segundos a trasnformar en (Dias/Horas/Minutos/Segundos): ");
    scanf("%d", &segundos_operador);

    if (segundos_operador < 0){
        printf("Valor ingresado invalido");
    }
    descomponer_tiempo(segundos_operador, &dias, &horas, &minutos, &segundos);

    printf("Total de segundos: %d, Dias: %d, Horas: %d, Minutos: %d, Segundos: %d ",segundos_operador, dias, horas, minutos, segundos);

    return 0;
}