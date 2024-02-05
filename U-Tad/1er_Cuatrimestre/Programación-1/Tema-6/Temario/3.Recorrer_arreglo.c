#include <stdio.h>

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int *ptr = numeros;

    printf("Elementos del arreglo: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}
