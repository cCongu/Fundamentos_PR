/*
Solicitar al usuario el ingreso de una temperatura (puede tener decimales por
ejemplo 24.5) y la unidad en la que se encuentra (siendo solo un carácter F ó C).
Luego el programa debe mostrar la temperatura ingresada, convertida en la otra
unidad.
La relación entre temperaturas Celsius y Fahrenheit está dada por la fórmula:
C=5.0 / 9.0 * (F − 32)
*/

#include <stdio.h>

// if en temp F° o C°
// programa calcula C° a F° o F° a C°

int main(){

    float temp1, temp2, temp3;
    char unidad;
    
    printf("Ingrese una temperatura: \n");
    scanf("%f", &temp1);
    
    printf("Ingrese que tipo de unidad se encuentra (C o F): \n");
    scanf(" %c", &unidad);

    if (unidad == 'F' || unidad == 'f'){
        temp2 = ((temp1 - 32) * 5) / 9;
        printf("La temperatura en C° (Celsius) es: %.2f",temp2);

    } else if (unidad == 'C' || unidad == 'c'){
        temp3 = ((temp1 * 9) / 5) + 32;
        printf("La temperatura en F° (Fahrenheit) es: %.2f",temp3);
        
    } else {
        printf("Se le pregunto Celsius o Fahrenheit abstengase a lo solicitado");
    }

    return 0;
}