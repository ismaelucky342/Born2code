#include <stdio.h>

int main() {
    // Variables
    float valorFloat = 110.1;
    double valorDouble = 110.1;
    int valorInt = 42;
    char valorChar = 'A';

    // Uso de printf con varios tipos de datos y opciones de formato
    printf("--- Ejemplo de printf() con varios tipos de datos ---\n");

    // Imprimir un float y un double con diferentes formatos
    printf("1. Valor float con formato por defecto: %f\n", valorFloat);
    printf("2. Valor double con formato científico: %e\n", valorDouble);
    printf("3. Valor double con formato de punto flotante: %.2lf\n", valorDouble);

    // Imprimir un entero con opciones de ancho y alineación
    printf("4. Valor entero justificado a la derecha con ancho 5: %5d\n", valorInt);
    printf("5. Valor entero justificado a la izquierda con ancho 5: %-5d\n", valorInt);

    // Imprimir un carácter y un string
    printf("6. Carácter: %c\n", valorChar);
    printf("7. String con ancho máximo 10: %.10s\n", "Ejemplo de cadena larga");

    return 0;
}
