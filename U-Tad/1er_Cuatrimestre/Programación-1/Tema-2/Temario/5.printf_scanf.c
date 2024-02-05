// Archivo de cabecera que contiene la declaración de la función "printf"
#include <stdio.h>

// Función principal del programa
int main(void)
{
   
   char car;
   int var;

   // Lectura de un carácter y un número entero del usuario
   scanf ("Introduce un carácter: %c\n", &car);
   scanf ("Introduce un número entero: %d\n", &var);

   // Impresión de los valores leídos por el usuario
   printf ("El carácter leído es: %c\n", car);
   printf ("El número introducido es: %d\n", var);

   // Retorno de 0 para indicar que el programa terminó correctamente
   return 0;
}