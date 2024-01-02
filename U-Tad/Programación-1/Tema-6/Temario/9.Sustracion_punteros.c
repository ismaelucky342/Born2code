#include <stdio.h>

int main() {
    int arreglo[] = {10, 20, 30, 40, 50};
    int *p1 = &arreglo[0];
    int *p3 = &arreglo[3];

    // Resta de punteros para obtener la diferencia de posiciones
    printf("La diferencia de posiciones entre p3 y p1 es: %ld\n", p3 - p1);

    return 0;
}
