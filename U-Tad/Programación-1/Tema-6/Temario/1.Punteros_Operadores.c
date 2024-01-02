#include <stdio.h>

int main() {
    int num1 = 5, num2 = 7, suma;
    int *ptr1, *ptr2;

    // Asignar direcciones de memoria a los punteros
    ptr1 = &num1;
    ptr2 = &num2;

    // Realizar la suma utilizando los valores apuntados por los punteros
    suma = *ptr1 + *ptr2;

    // Mostrar el resultado
    printf("La suma de %d y %d es: %d\n", *ptr1, *ptr2, suma);

    return 0;
}
