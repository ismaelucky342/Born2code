#include <stdio.h>

// Constantes definidas con #define
#define PI 3.1415929
#define MENSAJE "Hola, mundo!"

// Enumeración de estaciones
enum Estaciones {PRIMAVERA, VERANO, OTONIO, INVIERNO};

int main() {
    // Constantes enteras y reales
    const int numeroEntero = 42;
    const float valorReal = 3.14;

    // Constantes de caracteres y cadenas
    const char caracter = 'A';
    const char cadena[] = "Ejemplo de cadena constante";

    // Declaración de constante const para pi
    const float pi = PI;

    // Enumeración de estaciones
    enum Estaciones estacionActual = VERANO;

    // Declaración de constante volatile
    volatile int contador = 0;

    // Uso de las constantes en un programa simple
    printf("Número entero: %d\n", numeroEntero);
    printf("Valor real: %.2f\n", valorReal);
    printf("Carácter: %c\n", caracter);
    printf("Cadena: %s\n", cadena);
    printf("Valor de pi: %.4f\n", pi);
    printf("Estación actual: %d\n", estacionActual);

    // Modificación de la constante volatile
    contador++;
    printf("Contador: %d\n", contador);

    return 0;
}
