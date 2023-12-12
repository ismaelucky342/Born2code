#include <stdio.h>

#define NUMFILAS 3
#define NUMCOLUMNAS 4

int main() {
    // Declaración e inicialización de una matriz 3x4
    int matriz[NUMFILAS][NUMCOLUMNAS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Imprimir la matriz
    printf("Matriz:\n");
    for (int i = 0; i < NUMFILAS; i++) {
        for (int j = 0; j < NUMCOLUMNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
