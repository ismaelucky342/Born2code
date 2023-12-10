#include <stdio.h>

// Se define la función 'suma' que toma dos argumentos de tipo entero, 'a' y 'b'
void suma(int a, int b) {
    // Se imprime el valor de 'a' y 'b' dentro de la función
    printf("Dentro de la función, a = %d y b = %d\n", a, b);
}

int main() {
    // Se declaran e inicializan las variables 'x' e 'y'
    int x = 5, y = 10;

    // Se imprime el valor de 'x' e 'y' antes de llamar a la función 'suma'
    printf("Antes de llamar a la función, x = %d y y = %d\n", x, y);
    // Se llama a la función 'suma' con los argumentos 'x' e 'y'
    suma(x, y);
    // Se imprime el valor de 'x' e 'y' después de llamar a la función 'suma'
    printf("Después de llamar a la función, x = %d y y = %d\n", x, y);

    // Se retorna 0 para indicar que el programa terminó con éxito
    return 0;
}

/*LO QUE HACE EN DEFINITIVA ES CAMBIAR LAS VARIABLES, */
/*LO QUE BUSCA ES QUE SUTITUYAS A Y B POR CUALQUIER VARIABLE LUEGO EN EL MAIN*/