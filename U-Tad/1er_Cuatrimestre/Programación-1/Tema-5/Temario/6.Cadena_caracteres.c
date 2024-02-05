// Programa que lee de la entrada estándar (teclado) 
// el nombre y apellido de un usuario y los imprime 
// por la salida estándar (pantalla)
#include <stdio.h>
#define TAM 20

 void main(){

     char nombre [TAM];
     char apellido [TAM];

     printf ("Introduce el nombre: \n ");

     scanf ("%s",nombre);
     printf ("El nombre es: %s\n", nombre);

     printf ("Introduce el apellido: \n ");
     
     scanf ("%s",apellido);
     printf ("El apellido es: %s\n", apellido);

}