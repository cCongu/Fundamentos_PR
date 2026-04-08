/*
Dado un número n, informar los n primeros términos de la sucesión geométrica de
razón 3 (1, 3, 9, 27, etc.).
*/

#include <stdio.h>

int main(){

    // defino termino = 1 para que multiplique apartir del 1 hasta n veces por 3
    int n, i, termino = 1;
    
    //primer termino

    printf("Ingrese un numero ");
    scanf("%d", &n);

    //defino el numero inicial de i, ejecutara este for n cantidad veces hasta llegar a n
    // (inicializacion; condicion; control)
    for (i = 1; i <= n; i++){
        printf(", %d", termino);
        termino *= 3;
    }
    return 0;
}