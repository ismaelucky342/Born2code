#include <stdio.h>

// Prototipo de la función para calcular el área del círculo
double calcularAreaCirculo(double radio);

// Prototipo de la función para mostrar el resultado
void mostrarResultado(double area);

int main() {
    double radio, area;

    // Solicitar al usuario que ingrese el radio del círculo
    printf("Ingrese el radio del circulo: ");
    scanf("%lf", &radio);

    // Llamar a la función para calcular el área del círculo
    area = calcularAreaCirculo(radio);

    // Llamar a la función para mostrar el resultado
    mostrarResultado(area);

    return 0;
}

// Definición de la función para calcular el área del círculo
double calcularAreaCirculo(double radio) {
    const double PI = 3.141592653589793;
    return PI * radio * radio;
}

// Definición de la función para mostrar el resultado
void mostrarResultado(double area) {
    printf("El area del circulo es: %lf\n", area);
}
