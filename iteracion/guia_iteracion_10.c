/*
20) Se dan como datos de entrada las fechas de nacimiento (día, mes, año) y los números
de DNI de cada integrante de un grupo.
Se indica fin de datos de entrada cuando día = 0.
Muestre por pantalla el número de DNI del integrante más joven del grupo.
*/

#include <stdio.h>

int main(){

    int dia,mes,anio,dni;
    int dia_joven = 0, mes_joven = 0, anio_joven = 0, dni_joven = 0;
    int primer_ingresante = 1;

    printf("Ingrese el dia de nacimiento (Ingrese el numero 0 para finalizar el programa) N°%d : ",primer_ingresante);
    scanf("%d", &dia);

    while (dia !=0 ){
        
        printf("Ingrese el mes de nacimiento: ");
        scanf("%d", &mes);
        
        printf("Ingrese el año de nacimiento: ");
        scanf("%d", &anio);

        printf("Ingrese el DNI: ");
        scanf("%d", &dni);

        if (primer_ingresante){ //compara para ver quien es el valor mas bajo en cada variante
            dia_joven = dia;
            mes_joven = mes;
            anio_joven = anio;
            dni_joven = dni;
            primer_ingresante = 0;
        } 
        else {
            if (anio > anio_joven || (anio == anio_joven && mes > mes_joven) || (anio == anio_joven && mes == mes_joven && dia > dia_joven)){
                dia_joven = dia;
                mes_joven = mes;
                anio_joven = anio;
                dni_joven = dni;
            }
        }
        printf("Ingrese el dia de nacimiento (Ingrese el numero 0 para finalizar el programa) N°%d : ",primer_ingresante);
        scanf("%d", &dia);
    } 
    printf("Progama finalizado. El DNI mas joven es: %d",dni_joven);

    return 0;
}