#include <stdio.h>

#define NUM_FILAS 5
#define NUM_COLUMNAS 4

void imprimeMatriz(int matriz[][NUM_COLUMNAS], int n_filas, int n_columnas);
int esElementoValle(int matriz[][NUM_COLUMNAS], int n_filas, int n_columnas, int f, int c);
void imprimeValle(int matriz[][NUM_COLUMNAS], int n_filas, int n_columnas, int f, int c);
int calculaTraza(int matriz[][NUM_COLUMNAS], int n_filas, int n_columnas);

int main() {
    int matriz[NUM_FILAS][NUM_COLUMNAS] = {
        {7, 3, 5, 3},
        {4, 2, 1, 6},
        {8, 3, 9, 4},
        {9, 2, 6, 3},
        {3, 5, 8, 1}
    };

    printf("==> Valores de la Matriz Original:\n");
    imprimeMatriz(matriz, NUM_FILAS, NUM_COLUMNAS);

    printf("==>La traza de la matriz es: %d\n", calculaTraza(matriz, NUM_FILAS, NUM_COLUMNAS));

    for (int i = 0; i < NUM_FILAS; i++) {
        for (int j = 0; j < NUM_COLUMNAS; j++) {
            if (esElementoValle(matriz, NUM_FILAS, NUM_COLUMNAS, i, j)) {
                imprimeValle(matriz, NUM_FILAS, NUM_COLUMNAS, i, j);
            }
        }
    }

    return 0;
}

void imprimeMatriz(int matriz[][NUM_COLUMNAS], int n_filas, int n_columnas) {
    for (int i = 0; i < n_filas; i++) {
        for (int j = 0; j < n_columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int esElementoValle(int matriz[][NUM_COLUMNAS], int n_filas, int n_columnas, int f, int c) {
    int valor = matriz[f][c];

    if (f > 0 && f < n_filas - 1 && c > 0 && c < n_columnas - 1) {
        for (int i = f - 1; i <= f + 1; i++) {
            for (int j = c - 1; j <= c + 1; j++) {
                if (matriz[i][j] >= valor) {
                    return 0; // No es un elemento valle
                }
            }
        }
        return 1; // Es un elemento valle
    }

    return 0; // No tiene 8 vecinos adyacentes
}

void imprimeValle(int matriz[][NUM_COLUMNAS], int n_filas, int n_columnas, int f, int c) {
    printf("==>Hay un elemento Valle en fila %d columna %d:\n", f, c);

    for (int i = f - 1; i <= f + 1; i++) {
        for (int j = c - 1; j <= c + 1; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int calculaTraza(int matriz[][NUM_COLUMNAS], int n_filas, int n_columnas) {
    int traza = 0;

    // Solo se consideran las 4 primeras filas para la traza
    for (int i = 0; i < 4 && i < n_filas; i++) {
        traza += matriz[i][i];
    }

    return traza;
}
