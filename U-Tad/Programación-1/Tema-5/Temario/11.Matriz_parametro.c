#include <stdio.h>

// Función que recibe una matriz y sus dimensiones como parámetros
void imprimirMatriz(int matriz[][3], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int miMatriz[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int filas = sizeof(miMatriz) / sizeof(miMatriz[0]);
    int columnas = sizeof(miMatriz[0]) / sizeof(miMatriz[0][0]);

    // Llamada a la función con la matriz como argumento
    imprimirMatriz(miMatriz, filas, columnas);

    return 0;
}
