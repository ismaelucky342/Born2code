#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 4
#define MAX_VALUE 999

int main() {
    srand(time(NULL));

    int matrix[SIZE][SIZE];
    int max_value = 0;
    int max_row = 0;
    int max_col = 0;

    // Llenar la matriz con números aleatorios entre 0 y 999
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = rand() % (MAX_VALUE + 1);

            // Actualizar el valor máximo y su posición
            if (matrix[i][j] > max_value) {
                max_value = matrix[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }

    // Mostrar la matriz
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Mostrar el valor máximo y su posición
    printf("El valor máximo es %d y se encuentra en la fila %d, columna %d.\n", max_value, max_row, max_col);

    return 0;
}
