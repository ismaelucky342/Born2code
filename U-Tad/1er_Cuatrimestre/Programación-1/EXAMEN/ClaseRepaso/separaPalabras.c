/*
Este programa pide una serie de palabras separadas por comas y las imprime en diferentes lineas.
El tamanio de la cadena no puede exceder los 20 caracteres*/

#include <stdio.h>

#define MAX 20

int rellenaCadena(char cadena[]);
void separarPalabras(char cadena[]);
void limpiaBuffer();

int main()
{
  char cadena[MAX + 1];
  char c;
  int longitud;

  while (rellenaCadena(cadena) == 0) {
    printf("La cadena introducida no ha sido valida\n");
  }
    
  separarPalabras(cadena);
  return 0;
}

int rellenaCadena(char cadena[])
{
  char c;
  int longitud = 0;

  printf("Escribe varias palabras separadas por coma, maximo %d caracteres\n\t", MAX);
  c = getchar();
  while ((c != '\n') && longitud < MAX)
  {
    cadena[longitud] = c;
    c= getchar();
    longitud++;
  }
  if (c == '\n') {
    cadena[longitud] = '\0';
    printf("longitud: %d\n", longitud)  ;  
  }
  else {
    limpiaBuffer();
    longitud = 0;
  } 

  return longitud;
}

void separarPalabras(char cadena[])
{
  int i = 0;  
  char c;

  c= cadena [i];
  while (c != '\0') {

    if (c == ',') {
      putchar('\n');
    } else {
      putchar(c);
    }
    i++;
    c=cadena[i];
  }
  putchar('\n');
}

void limpiaBuffer() {
  while (getchar()!='\n');
}