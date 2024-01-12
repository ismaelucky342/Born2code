#include <stdio.h>

#define NUM_FILAS 5
#define NUM_COLUMNAS 4

void imprimeMatriz(int matrix[][NUM_COLUMNAS], int num_filas, int num_columnas);
int esElementoValle(int matrix[][NUM_COLUMNAS], int num_filas, int num_columnas, int f, int c);
void imprimeValle(int matrix[][NUM_COLUMNAS], int num_filas, int num_columnas, int f, int c);
int calculaTraza(int matrix[][NUM_COLUMNAS], int num_filas, int num_columnas);

int main() {
    // Check that the number of rows and columns are positive
    if (NUM_FILAS <= 0 || NUM_COLUMNAS <= 0) {
        printf("Error: The number of rows and columns must be positive.\n");
        return 1;
    }

    int matrix[NUM_FILAS][NUM_COLUMNAS] = {
        {7, 3, 5, 3},
        {4, 2, 1, 6},
        {8, 3, 9, 4},
        {9, 2, 6, 3},
        {3, 5, 8, 1}
    };

    printf("==> Valores de la Matriz Original:\n");
    imprimeMatriz(matrix, NUM_FILAS, NUM_COLUMNAS);

    // Check that the matrix is square
    if (NUM_FILAS != NUM_COLUMNAS) {
        printf("Error: The matrix must be square.\n");
        return 1;
    }

    printf("==> La traza de la matriz es: %d\n", calculaTraza(matrix, NUM_FILAS, NUM_COLUMNAS));

    for (int i = 0; i < NUM_FILAS; i++) {
        for (int j = 0; j < NUM_COLUMNAS; j++) {
            if (esElementoValle(matrix, NUM_FILAS, NUM_COLUMNAS, i, j)) {
                imprimeValle(matrix, NUM_FILAS, NUM_COLUMNAS, i, j);
            }
        }
    }

    return 0;
}

void imprimeMatriz(int matrix[][NUM_COLUMNAS], int num_filas, int num_columnas) {
    // Check that the matrix is not null
    if (matrix == NULL) {
        printf("Error: The matrix is null.\n");
        return;
    }

    for (int i = 0; i < num_filas; i++) {
        for (int j = 0; j < num_columnas; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int calculaTraza(int matrix[][NUM_COLUMNAS], int num_filas, int num_columnas) {
    // Check that the matrix is square
    if (num_filas != num_columnas) {
        printf("Error: The matrix must be square.\n");
        return -1;
    }

    int traza = 0;
    for (int i = 0; i < num_filas; i++) {
        traza += matrix[i][i];
    }
    return traza;
}

int esElementoValle(int matrix[][NUM_COLUMNAS], int num_filas, int num_columnas, int f, int c) {
    // Check that the matrix is not null
    if (matrix == NULL) {
        printf("Error: The matrix is null.\n");
        return -1;
    }

    // Check that the current element is not on the edge of the matrix
    if (f == 0 || f == num_filas - 1 || c == 0 || c == num_columnas - 1) {
        return 0;
    }

    // Check that the current element is lower than its neighbors
    if (matrix[f][c] < matrix[f-1][c] && matrix[f][c] < matrix[f+1][c] &&
        matrix[f][c] < matrix[f][c-1] && matrix[f][c] < matrix[f][c+1]) {
        return 1;
    }

    return 0;
}

void imprimeValle(int matrix[][NUM_COLUMNAS], int num_filas, int num_columnas, int f, int c) {
    // Check that the matrix is not null
    if (matrix == NULL) {
        printf("Error: The matrix is null.\n");
        return;
    }

    // Check that the current element is actually a valle
    if (!esElementoValle(matrix, num_filas, num_columnas, f, c)) {
        return;
    }

    printf("El elemento (%d, %d) es un valle con valor %d\n", f, c, matrix[f][c]);
}