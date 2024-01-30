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

int     recogerCadena(char cadena[])
{
    int i = 0; 
    char c;  

    printf("Introduce una frase: ");
    while((c = getchar() ) != '\n' && i < 30)
    {
        cadena[i++] = c;
    }
}
