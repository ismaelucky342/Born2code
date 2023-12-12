#include <stdio.h>

int main() {
    // Definir un array de enteros
    int miArray[] = {1, 2, 3, 4, 5};

    // Calcular el número de elementos en el array
    int tamanoArray = sizeof(miArray) / sizeof(miArray[0]);

    // Imprimir el contenido del array
    printf("Contenido del array:\n");
    for (int i = 0; i < tamanoArray; ++i) {
        printf("%d ", miArray[i]);
    }

    // Imprimir el tamaño total del array en bytes
    printf("\nTamaño total del array en bytes: %lu\n", sizeof(miArray));

    // Imprimir el número de elementos en el array
    printf("Número de elementos en el array: %d\n", tamanoArray);

    return 0;
}
/*EJEMPLO SENCILLO AÑADIENDO EL SIZEOF*/