#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c = 15;

    // Uso del operador OR con números enteros
    if (a > b || a > c) {
        printf("a es mayor que al menos uno de los otros dos números\n");
    } else {
        printf("a no es mayor que ninguno de los otros dos números\n");
    }

    return 0;
}
/*IGUAL QUE AND ESTE OPERADOR SE USA MUCHO EN BUCLES WHILE*/
/*SIGNIFICADO LITERAL: MIENTRAS QUE PASE ESTO O ESTO OTRO HAGO LO SIGUIENTE*/