#include <stdio.h>

// Estructura de datos
typedef struct {
    int x;
    int y;
} Coord;

int main() {
    // Crear una variable de tipo Coord
    Coord punto = {1, 2};

    // Crear un puntero a la variable punto
    Coord *p = &punto;

    // Cambiar el valor de la variable x utilizando el puntero p
    p->x = 10;

    // Imprimir el valor de la variable x utilizando el puntero p
    printf("Valor de x: %d\n", p->x);

    // Imprimir la dirección de la variable x utilizando el puntero p
    printf("Dirección de x: %p\n", &(p->x));

    return 0;
}
/*En este ejemplo, se muestra cómo se pueden utilizar los operadores
 de direcciones &, * y -> para acceder y modificar los miembros de una estructura 
mediante un puntero a la estructura*/