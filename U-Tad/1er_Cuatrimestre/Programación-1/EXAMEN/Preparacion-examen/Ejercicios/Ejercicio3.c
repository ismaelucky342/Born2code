/*Pedir una calificacion y decir si es aprobado o suspenso*/

#include<stdio.h>

int main()
{
    float nota; 

    printf("introduce una calificacion: "); 
    scanf("%.2f", &nota);
    if(nota >= 6)
    {
        printf("has aprobado"); 
    } else {
        printf("has suspendido");
    }
    return 0; 
}
