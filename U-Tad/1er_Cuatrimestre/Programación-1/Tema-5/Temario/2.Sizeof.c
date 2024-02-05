#include <stdio.h>

int main() {
    int nums[5] = {1, 2, 3, 4, 5};

    // Obtiene el tamaño de un elemento de la lista (int)
    int sizeofElement = sizeof(nums[0]);

    // Obtiene el tamaño total de la lista
    int sizeofList = sizeof(nums);

    // Calcula el número de elementos en la lista
    int numberOfElements = sizeofList / sizeofElement;

    printf("Tamaño de un elemento de la lista: %d bytes\n", sizeofElement);
    printf("Tamaño total de la lista: %d bytes\n", sizeofList);
    printf("Número de elementos en la lista: %d\n", numberOfElements);

    return 0;
}
/*EXPLICACION SIZEOF*/
/*si por ejemplo trabajamos con números,sizeof literalmente pregunta al pc: 
"¿Cuánto espacio ocupa un número entero en la memoria?" 
Y el pc nos dirá cuántos bloques de memoria necesita para almacenar ese tipo de dato.*/