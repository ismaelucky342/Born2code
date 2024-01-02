#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)malloc(sizeof(int));

    if (ptr != NULL) {
        *ptr = 42;
        printf("Valor almacenado dinámicamente: %d\n", *ptr);
        free(ptr); // Liberar la memoria asignada dinámicamente
    } else {
        printf("Error en la asignación de memoria.\n");
    }

    return 0;
}
