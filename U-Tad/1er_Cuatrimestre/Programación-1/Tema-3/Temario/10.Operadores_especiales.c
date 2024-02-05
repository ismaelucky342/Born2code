#include <stdio.h>

int main() {
    // Crear un array de enteros
    int a[5] = {1, 2, 3, 4, 5};//uso de ,

    // Acceder a los elementos del array utilizando los operadores () y []
    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]); // Usando el operador []
        printf("*(a+%d) = %d\n", i, *(a+i)); // Usando el operador ()
    }

    return 0;
}

/*ESTE CÓDIGO NO TIENE DIFICULTAD Y ES PARA MOSTRAR EL USO DE LOS OPERADORES "," "()" "[]"*/