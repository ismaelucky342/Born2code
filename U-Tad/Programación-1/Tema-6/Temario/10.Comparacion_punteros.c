#include <stdio.h>

int main() {
    int arreglo[] = {5, 10, 15, 20};
    int *p1 = &arreglo[0];
    int *p2 = &arreglo[2];

    // Comparación de punteros
    if (p1 < p2) {
        printf("p1 apunta a una posición anterior a p2 en el arreglo.\n");
    } else {
        printf("p1 apunta a una posición posterior a p2 en el arreglo.\n");
    }

    return 0;
}