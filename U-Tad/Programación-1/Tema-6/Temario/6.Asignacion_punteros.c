#include <stdio.h>

int main() {
    int a = 10;
    int *punt1;
    int *punt2;

    punt1 = &a;     // Asigna la dirección de 'a' a 'punt1'
    punt2 = punt1;  // Asigna el valor de 'punt1' a 'punt2'

    printf("El valor %d está en la posición %p\n", *punt2, (void *)punt2);

    return 0;
}
