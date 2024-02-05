#include <stdio.h>

int main() {
    float altura, peso, resultado;
    //solicitar altura y leerla 
    printf("Introduzca su altura en metros: ");
    scanf("%f", &altura);
    //solicitar peso y leerlo 
    printf("Introduzca su peso en kg: ");
    scanf("%f", &peso);

    // Calcular el IMC utilizando la fórmula IMC = peso / (altura * altura)
    resultado = peso / (altura * altura);
    //imprimir resutlado 
    printf("Su IMC es: %.2f\n", resultado);

    return 0;
}
