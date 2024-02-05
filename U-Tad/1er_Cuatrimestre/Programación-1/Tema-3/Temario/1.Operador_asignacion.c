#include <stdio.h>

// Definición de las variables
char nombre[] = "Pedro";
char apellido[] = "García";
int edad = 25;

// Creación de un struct para almacenar la información de la persona
struct Persona {
    char nombre[50];
    char apellido[50];
    int edad;
};

// Función principal
int main() {
    // Creación de un struct de la persona
    struct Persona persona;

    // Asignación de valores al struct
    strcpy(persona.nombre, nombre);
    strcpy(persona.apellido, apellido);
    persona.edad = edad;

    // Impresión de la información de la persona
    printf("Nombre: %s\n", persona.nombre);
    printf("Apellido: %s\n", persona.apellido);
    printf("Edad: %d\n", persona.edad);

    return 0;
}

