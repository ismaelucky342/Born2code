#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

#define NUM_COLUMNAS 4 // Define el número de columnas de la matriz
#define NUM_FILAS 5 // Define el número de filas de la matriz

// Función que imprime una matriz de dimensión n_filas y n_columnas
void imprimeMatriz(int matriz[][NUM_COLUMNAS], int n_filas, int n_columnas) {
    for (int i = 0; i < n_filas; i++) {
        for (int j = 0; j < n_columnas; j++) {
            printf("%d ", matriz[i][j]); // Imprime cada elemento de la matriz
        }
        printf("\n"); // Imprime una nueva línea al final de cada fila
    }
} // Esta función recorre cada elemento de la matriz y lo imprime. Después de imprimir todos los elementos de una fila, imprime una nueva línea.

// Función que comprueba si el elemento de la matriz de la posición f,c es un elemento valle.
// Devuelve 1 en caso afirmativo y 0 en caso contrario.
int esElementoValle(int matriz[][NUM_COLUMNAS], int n_filas, int n_columnas, int f, int c) {
    int valle = matriz[f][c]; // El valor del posible elemento valle
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (!(i == 0 && j == 0)) { // Ignora el elemento central
                if (matriz[f + i][c + j] <= valle) { // Si algún vecino es menor o igual, no es valle
                    return 0;
                }
            }
        }
    }
    return 1; // Si todos los vecinos son mayores, es valle
} // Esta función comprueba si el elemento en la posición f,c es un elemento valle. Un elemento valle es aquel que es menor que todos sus vecinos. La función devuelve 1 si el elemento es un valle y 0 en caso contrario.

// Función que imprime el elemento valle de la posición f,c y sus 8 vecinos adyacentes.
void imprimeValle(int matriz[][NUM_COLUMNAS], int n_filas, int n_columnas, int f, int c) {
    printf("==>Hay un elemento Valle en fila %d columna %d:\n", f, c);
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            printf("%d ", matriz[f + i][c + j]); // Imprime el elemento valle y sus vecinos
        }
        printf("\n");
    }
} // Esta función imprime el elemento valle y sus vecinos. Un elemento valle es aquel que es menor que todos sus vecinos.

// Función que calcula la traza de una matriz de M filas x N columnas
int calculaTraza(int matriz[][NUM_COLUMNAS], int n_filas, int n_columnas) {
    int traza = 0;
    for (int i = 0; i < n_filas; i++) {
        traza += matriz[i][i]; // Suma los elementos de la diagonal
    }
    return traza;
} // Esta función calcula la traza de la matriz, que es la suma de los elementos de la diagonal.

// Función principal
int main() {
    // Declaración e inicialización de la matriz
    int matriz[NUM_FILAS][NUM_COLUMNAS] = {
        {7, 3, 5, 3},
        {4, 2, 1, 6},
        {8, 3, 9, 4},
        {9, 2, 6, 3},
        {3, 5, 8, 1}
    };

    printf("==> Valores de la Matriz Original:\n");
    imprimeMatriz(matriz, NUM_FILAS, NUM_COLUMNAS); // Imprime la matriz original

    printf("==>La traza de la matriz es: %d\n", calculaTraza(matriz, 4, NUM_COLUMNAS)); // Calcula e imprime la traza de la matriz

    // Busca e imprime los elementos valle de la matriz
    for (int i = 1; i < NUM_FILAS - 1; i++) {
        for (int j = 1; j < NUM_COLUMNAS - 1; j++) {
            if (esElementoValle(matriz, NUM_FILAS, NUM_COLUMNAS, i, j)) {
                imprimeValle(matriz, NUM_FILAS, NUM_COLUMNAS, i, j);
            }
        }
    }

    return 0; // Termina el programa
} 
/*ISMAEL HERNANDEZ | 16/01/2024*/
// En la función principal, se declara e inicializa la matriz. Luego, se imprime la matriz original, se calcula e imprime la traza de la matriz y se buscan e imprimen los elementos valle de la matriz.
    