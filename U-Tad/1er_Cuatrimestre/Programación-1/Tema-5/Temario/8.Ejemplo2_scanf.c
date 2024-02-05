#include <stdio.h>

#define LONG_MAX 80

int main(void) {
    // Declaración de variables
    char cadena[LONG_MAX + 1];   // +1 para el carácter '\0'

    // Solicitar al usuario que introduzca una cadena
    printf("Introduce cadena:\n");

    // Leer la cadena introducida por el usuario y almacenarla en 'cadena'
    scanf("%s", cadena);

    // Imprimir la cadena leída
    printf("La cadena leída es %s\n", cadena);

    // Devolver 0 para indicar que el programa se ejecutó correctamente
    return 0;
}
/*EXPLICACION*/
/*ejemplo de cómo leer una cadena con scanf() utilizando el especificador de formato %s.
En el ejemplo se pretende leer e imprimir una cadena 
en la que podemos guardar hasta 80 caracteres (sin contar el carácter nulo):*/