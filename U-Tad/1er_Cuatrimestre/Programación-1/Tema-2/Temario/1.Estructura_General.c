/* Nombre programa: Area de un circulo de radio 3*/
   

/* Directivas de preprocesador */
#include <stdio.h>
#define PI 3.14
#define RADIO 3

/* Declaraciones globales */
void AreaCirculo3 ();
float area;

/* Función Principal main */
void main (int argc, char **argv){
     AreaCirculo3 ();
}

/* Codificación de funciones */
void AreaCirculo3 (){
     area = PI* RADIO* RADIO;
     printf("El area de un circulo de radio 3 es: %f", area);
}