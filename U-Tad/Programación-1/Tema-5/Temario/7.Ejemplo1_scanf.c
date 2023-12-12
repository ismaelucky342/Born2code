#include <stdio.h>

int main() {
    // Declaración de variables
    int numero, result;

    // Solicitar al usuario que introduzca un número entero
    printf("\n===> Por favor introduce un número entero\n");

    // Leer el número introducido por el usuario y almacenar el resultado en 'result'
    result = scanf("%d", &numero);

    // Verificar si la lectura fue exitosa (result=1)
    if (result != 1)
        // Imprimir un mensaje de error si el dato introducido no es un número entero
        printf("==> El dato introducido no es correcto. Debe ser un número entero\n");
    else
        // Imprimir un mensaje de éxito si el dato introducido es un número entero
        printf(" ===> CORRECTO!!, el número leído es un entero\n");

    // Devolver 0 para indicar que el programa se ejecutó correctamente
    return 0;
}
/*EXPLICACION*/
/*este programa lee un dato de tipo entero 
y lo evalua en el resultado de la función para determinar que el dato introducido es correcto.*/