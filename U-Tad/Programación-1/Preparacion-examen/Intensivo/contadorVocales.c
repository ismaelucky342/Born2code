#include<stdio.h>

int     recogerCadena(char cadena[]);
void    contarVocales(char cadena[]);


int     main()
{
    char  cadena[31];
    if(recogerCadena(cadena))
    {
        contarVocales(cadena); 
    } 
    return 0; 
}

int recogeCadena(char cadena[]) {
    printf("Introduce una cadena de texto: ");
    int i = 0;
    char c;
    while ((c = getchar()) != '\n' && i < 30) {
        cadena[i++] = c;
    }
    cadena[i] = '\0';

    if (c != '\n') {
        printf("La cadena es demasiado larga. Inténtalo de nuevo.\n");
        while (getchar() != '\n');
        return 0;
    }

    return i;
}