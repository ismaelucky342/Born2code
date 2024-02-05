#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    // Asegurar que ambas condiciones sean verdaderas antes de ejecutar el bloque de código
    if (a > 5 && b > 15) {
        printf("Ambas condiciones son verdaderas.\n");
    } else {
        printf("Al menos una de las condiciones es falsa.\n");
    }

    return 0;
}
/*El USO DE && SE SUELE USAR MUCHO EN LOS BUCLES WHILE*/
/*EJEMPLO DE SENTENCIA LOGICA: MIENTRAS HAGA ESTO Y ESTO OTRO HAGO LO SIGUIENTE*/