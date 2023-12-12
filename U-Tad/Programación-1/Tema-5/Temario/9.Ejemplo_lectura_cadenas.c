#include <stdio.h>
#define TAM 20

int main(){

    char nombre[TAM];
    char apellido[TAM];
    char newChar;
    int strSize_1 = 0, strSize_2 = 0;
    int i;

    // Pide al usuario que introduzca el nombre
    printf("==> Introduce el nombre\n");
    
    // Lee cada caracter del nombre hasta que se presiona Enter ('\n')
    while ((newChar = getchar()) != '\n') {
        nombre[strSize_1] = newChar;
        strSize_1++;
    }

    // Agrega el carácter nulo al final de la cadena del nombre
    nombre[strSize_1] = '\0';

    // Pide al usuario que introduzca el apellido
    printf("==> Introduce ahora el apellido\n");

    // Lee cada caracter del apellido hasta que se presiona Enter ('\n')
    while ((newChar = getchar()) != '\n') {
        apellido[strSize_2] = newChar;
        strSize_2++;
    }

    // Agrega el carácter nulo al final de la cadena del apellido
    apellido[strSize_2] = '\0';

    // Imprime el nombre caracter por caracter usando putchar()
    printf("El nombre es: ");
    for (i = 0; i < strSize_1; i++) {
        putchar(nombre[i]);
    }
    putchar('\n');

    // Imprime el apellido caracter por caracter usando putchar()
    printf("El apellido es: ");
    for (i = 0; i < strSize_2; i++) {
        putchar(apellido[i]);
    }
    putchar('\n');

    // Imprime el nombre y apellido usando printf()
    printf("\n\n==> Imprimimos ahora el nombre y apellido utilizando printf()\n");
    printf("El nombre es: %s\n", nombre);
    printf("El apellido es: %s\n", apellido);

    return 0;
}
/*PROGRAMA RESUELTO EN LA CLASE SINCRONA DEL TEMA 5*/