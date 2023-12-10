#include <stdio.h>

// Prototipos de funciones
int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);


/*Programa main*/
int main() {
    int a = 10;
    int b = 5;

    printf("La suma es: %d\n", suma(a, b));
    printf("La resta es: %d\n", resta(a, b));
    printf("La multiplicación es: %d\n", multiplicacion(a, b));

    return 0;
}

/*Funciones que utiliza el main*/
int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}