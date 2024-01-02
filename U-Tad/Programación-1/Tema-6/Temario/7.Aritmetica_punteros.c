#include <stdio.h>

int main() {
    int arreglo[] = {1, 2, 3, 4, 5};
    int *ptr = arreglo;

    // Acceder a elementos y realizar operaciones aritméticas con punteros
    printf("Elementos del arreglo: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
