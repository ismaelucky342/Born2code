#include <stdio.h>

int main(void) {

    char cadena[10];
    int i;

    /* inicialización */
    cadena [0] = 'H ';
    cadena [1] = 'o';
    cadena [2] = 'l';
    cadena [3] = 'a';
    cadena [4] = '\0';

    /* imprimir cadena */
    i=0;
    while(cadena[i] != '\0') {
    printf(" %c", cadena[i]);
    i++;

    }

    return 0;

}

/*CADENA INICIALIZADA FUERA DE LA DECLARACION (NO RECOMENDABLE)*/