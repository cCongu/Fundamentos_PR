/*
18) Se realiza una encuesta para estimar el grado de aceptación de los productos x e y en
el mercado. A cada encuestado se le pregunta si consume el producto x y si consume el
producto y. La respuesta puede ser sí o no.
Se pide calcular e informar el porcentaje de consumidores de:
a) del producto x
b) del producto y
c) del producto x solamente
d) del producto y solamente
e) de ambos productos
f) de ninguno de los productos
*/

#include <stdio.h>

int main(){

    char x[2],y[2],fin; //x[2] ---> cadenas de 1 caracter + terminador
    int i,encuesta_u, contx = 0, conty = 0, contambos = 0, cont_solox = 0, cont_soloy = 0, cont_ninguno = 0;
    
    printf("Ingrese cuantas encuentas quiere generar: ");
    scanf("%d", &encuesta_u);

    // ciclo para indicar la cantidad de encuestas a crear
    for (i = 1; i <= encuesta_u; i++){
        printf("Encuesta N°%d",i);
        
        printf("\nIndique si consume el producto ( X ) s/n: ");
        scanf("%s", &x);
    
        printf("\nIndique si consume el producto ( Y ) s/n: ");
        scanf("%s", &y);

        // Cada vez que ingresen "s" en ambos casos los va a contar juntos y por separado

        if (x[0] == 's' && y[0] == 's'){ // Comillas simples para comparar caracteres
            contx++;
            conty++;
            contambos++;
        
        // Cada vez que en X ingresen "s" y en Y "no" solo va a contar X y los que solamente indicaron X

        }else if (x[0] =='s' && y[0] == 'n'){ // Comillas simples para comparar caracteres
            contx++;
            cont_solox++;
        
        // Cada vez que en X ingresen "n" y en Y "s" solo va a contar Y y los que solamente indicaron X

        }else if (x[0] == 'n' && y[0] == 's'){ // Comillas simples para comparar caracteres
            conty++;
            cont_soloy++;
        
        // Cada vez que ingresen "n" en ambos casos lo va a contar

        }else{
            cont_ninguno++;
        }

    }
    // A)
    printf("Consumidores del producto X (%d)\n",contx);
    // B)
    printf("Consumidores del producto Y (%d)\n",conty);
    // C)
    printf("Consumidores que solo consumen X (%d)\n",cont_solox);
    // D)
    printf("Consumidores que solo consumen Y (%d)\n",cont_soloy);
    // E)
    printf("Consumidores que consumen ambos productos (%d)\n",contambos);
    // F)
    printf("Consumidores que consumen ningun producto (%d)\n",cont_ninguno);
    
    return 0;
}