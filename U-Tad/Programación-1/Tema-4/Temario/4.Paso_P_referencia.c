#include <stdio.h>

// Se define la función 'suma' que toma dos argumentos de tipo puntero a entero, 'a' y 'b'
void suma(int *a, int *b) {
    // Se suman los valores de los punteros 'a' y 'b'
    int sum = *a + *b;

    // Se imprime el resultado de la suma
    printf("Dentro de la función, la suma de a y b es: %d\n", sum);
}

// Se define la función 'main' que es el punto de entrada del programa
int main() {
    // Se declaran e inicializan las variables 'x' e 'y'
    int x = 5, y = 10;

    // Se imprime el valor de 'x' e 'y' antes de llamar a la función 'suma'
    printf("Antes de llamar a la función, x = %d y y = %d\n", x, y);
    // Se llama a la función 'suma' con los argumentos 'x' e 'y' como punteros
    suma(&x, &y);
    // Se imprime el valor de 'x' e 'y' después de llamar a la función 'suma'
    printf("Después de llamar a la función, x = %d y y = %d\n", x, y);

    // Se retorna 0 para indicar que el programa terminó con éxito
    return 0;
}

/*AQUI NOS METEMOS YA EN TEMA PUNTEROS, ESTAMOS TOMANDO POSICIONES DE MEMORIA*/