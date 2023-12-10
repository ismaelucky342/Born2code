#include <stdio.h>

// En este programa, se implementa una función llamada operaciones que realiza varias operaciones aritméticas básicas entre dos números enteros
//luego muestra los resultados en la pantalla.
void operaciones(int a, int b) {
    // Declaramos cuatro variables enteras para almacenar los resultados de las operaciones.
    int suma, resta, multiplicacion, division;

    // Realizamos las operaciones aritméticas y almacenamos los resultados en las variables declaradas.
    suma = a + b;
    resta = a - b;
    multiplicacion = a * b;
    division = a / b;

    // Mostramos los resultados de las operaciones en la pantalla.
    printf("La suma es: %d\n", suma);
    printf("La resta es: %d\n", resta);
    printf("La multiplicación es: %d\n", multiplicacion);
    printf("La división es: %d\n", division);
}

int main() {
    // Definimos dos variables enteras, a y b, y les asignamos valores.
    int a = 10;
    int b = 3;

    // Llamamos a la función operaciones pasando a y b como argumentos.
    operaciones(a, b);

    // Retornamos 0 para indicar que el programa se ejecutó correctamente.
    return 0;
}
/*NO HA SIDO NECESARIO UN RETURN*/
/*LA FUNCION LLEGA AL FINAL Y SI ES NECESARIO USARLA OTRA VEZ SE LA VUELVE A LLAMAR*/