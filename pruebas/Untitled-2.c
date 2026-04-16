# include <stdio.h>

int main(){

    int num_mayor, num;
    int contador = 1;

    printf("Ingrese algun numero, cero para finalizar. N°%d :",contador),
    scanf("%d", &num);

    num_mayor = num;
    
    while (num != 0 ){
        
        contador++;
        printf("ingrese algun numero, cero para finalizar. N°%d :",contador);
        scanf("%d", &num);

        if (num > num_mayor){
            num_mayor = num;
        }
       
    } printf("Progama finalizado. El numero mas grande es %d", num_mayor);


    return 0;
}