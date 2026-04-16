// ingrese un numero e indicar si es positivo o negativo
#include <stdio.h>

int main(){
    int Num;
    printf("ingrese un numero");
    // scanf lee lo que el usuario ingresa
    // %d lee los numeros enteros
    scanf("%d", &Num); // &Num indica que lea el int de nuestra variable
    if (Num>0)
        prinf("numero positivo");
    else 
        if (Num<0)
            printf("numero negativo");
        else 
            printf("numero cero");
    return 0;
}