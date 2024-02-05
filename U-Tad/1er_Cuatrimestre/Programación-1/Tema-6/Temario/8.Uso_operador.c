#include <stdio.h>

int main() {
    int x = 5;
    int *ptr = &x;

    // Utilizando el operador * para manipular el contenido del puntero
    *ptr += 3;  // Incrementa el valor al que apunta 'ptr' en 3

    printf("El nuevo valor de x es: %d\n", x);

    return 0;
}
