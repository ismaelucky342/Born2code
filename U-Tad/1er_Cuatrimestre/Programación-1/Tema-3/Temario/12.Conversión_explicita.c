#include <stdio.h>

int main() {
    int i = 42;
    float f;

    f = (float) i; // La conversión explícita de 'int' a 'float' se realiza aquí

    printf("Valor de la variable 'i': %d\n", i);
    printf("Valor de la variable 'f': %f\n", f);

    return 0;
}
/*ES NECESARIO ESPECIFICAR CON EXPRESIONES DE CONVERSION*/