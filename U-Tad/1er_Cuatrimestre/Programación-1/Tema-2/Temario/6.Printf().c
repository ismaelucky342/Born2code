#include <stdio.h> 

int main(void){ 

    // declarar y asignar variables
    char c = 'y';
    int e = 11; 
    float f = 10.2;

    // imprimir las variables
    printf ("Las variables valen: c = %c, e = %d, f = %f\n", c, e, f); 

    // imprimir la variable entera como float (incorrecto)
    printf ("La variable entera ahora vale e = %f\n", e); 

    return 0; 
}