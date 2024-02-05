#include <stdio.h>

// Prototipo de la función (para poder poner el main antes)
int esPrimo(int numero);

int main() {
    int contadorPrimos = 0;

    // realizamos una iteracion sobre los números del 1 al 100
    for (int i = 1; i <= 100; i++) {
        // Si el número es primo, se va a imprimir y por tanto a aumentar el contadorr
        if (esPrimo(i)) {
            printf("%d ", i);
            contadorPrimos++;
        }
    }

    // Imprime números primos encontrados
    printf("\nTotal de numeros primos: %d\n", contadorPrimos);

    return 0;
}

// Función para ver que un número es primo
int esPrimo(int numero) {
    if (numero <= 1) {
        return 0; // No es primo
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0; // No es primo
        }
    }

    return 1; // Es primo
}
