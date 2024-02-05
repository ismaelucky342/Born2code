#include <stdio.h> 

int main() {
    int a, b, mcd, resultado;

    printf("Introduzca el primer numero: ");
    scanf("%d", &a); // Leer el primer número ingresado por el usuario

    printf("Introduzca el segundo numero: ");
    scanf("%d", &b); // Leer el segundo número ingresado por el usuario

    mcd = 0;
    resultado = 0;

    if(a == b) {
        resultado = a;
    } else {
        while(a != b) {
            if(a > b) {
                a = a - b;
            } else {
                b = b - a;
            }
        }
        resultado = a;
    }

    printf("El MCD de %d y %d es: %d\n", a, b, resultado); // Imprimir el resultado del MCD

    return 0;
}