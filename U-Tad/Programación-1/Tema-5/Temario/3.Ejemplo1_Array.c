#include <stdio.h>

int main() {
    // Definimos un array para almacenar las calificaciones de 5 estudiantes
    float calificaciones[5];
    float suma = 0.0;
    float promedio;

    // Pedimos al usuario que ingrese las calificaciones
    for (int i = 0; i < 5; i++) {
        printf("Ingresa la calificación del estudiante %d: ", i + 1);
        scanf("%f", &calificaciones[i]);

        // Sumamos las calificaciones para calcular el promedio más tarde
        suma += calificaciones[i];
    }

    // Calculamos el promedio
    promedio = suma / 5.0;

    // Mostramos el resultado
    printf("\nLas calificaciones ingresadas son:\n");

    for (int i = 0; i < 5; i++) {
        printf("Estudiante %d: %.2f\n", i + 1, calificaciones[i]);
    }

    printf("\nEl promedio de calificaciones es: %.2f\n", promedio);

    return 0;
}
/*EXPLICACION*/
/*Este código es un programa sencillo en C que calcula la puntuación media de 5 estudiantes. 
Solicita al usuario que ingrese las puntuaciones de cada estudiante, las almacena en una matriz, calcula la suma de las puntuaciones.
 finalmente calcula la puntuación promedio.*/
