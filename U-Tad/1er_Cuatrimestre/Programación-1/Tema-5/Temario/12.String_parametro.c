#include <stdio.h>

// Función que recibe un array y su tamaño como parámetros
void imprimirArray(int arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int miArray[] = {1, 2, 3, 4, 5};
    int tamano = sizeof(miArray) / sizeof(miArray[0]);

    // Llamada a la función con el array como argumento
    imprimirArray(miArray, tamano);

    return 0;
}
