#include <stdio.h>
int main() {
    
    // Aqui ira el codigo de nuestra calculadora.
    
    float num1, num2, resultado;
    char operacion;
    printf("Elija una orperacion (+,-,*,/): ");

    // scanf lee lo que el usuario ingresa desde el teclado.
    // %c es para leer un solo caracter (en este caso, la operacion:).

    scanf("%c", &operacion); // Leemos la operacion que usuario ingrese.
    
    printf("Ingrese el primer numero: ");

    // scanf("%f", &num1); lee un numero decimal (flotante) y lo almacena en num1. hacemos lo mismo para num2.

    scanf("%f", &num1); // Leemos el primer numero.

    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2); // Leemos el segundo numero.

    // Ahora que tenemos los dos numeros y la operacion, usamos una estructura switch para hacer diferentes operaciones según la opcion elegida por el usuario.
    // swtich evalua el valor de operacion.
    
    switch(operacion){
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
        case '*':
            resultado = num1 * num2;
        case '/':
            if(num2 !=0){
                resultado = num1 / num2;
            } else {
                printf("Error: Division por cero. \n");

            }
            // break sale del switch una vez que se hace la operacion.
            
            break;
        default:
        printf("Operacion no valida. \n");
    }

    // Mostrar el resultado de la operacion.

    // %.2f es para mostrar los numeros con 2 decimales y c es para imprimir el operador elegido.

    printf("el resultado de %.2f %c %.2f es %.2f\n",num1, operacion, num2, resultado);
    return 0;

}           