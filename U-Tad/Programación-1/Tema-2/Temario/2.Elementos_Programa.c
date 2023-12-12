#include <stdio.h>
#include <stdlib.h>

// Separador
int suma(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, resultado;

    // Palabras reservadas
    printf("Introduzca el primer número: ");
    scanf("%d", &num1);

    printf("Introduzca el segundo número: ");
    scanf("%d", &num2);

    // Identificadores
    resultado = suma(num1, num2);

    // Separadores
    printf("El resultado de la suma es: %d\n", resultado);

    return 0;
}


/*Identificadores: Son los nombres que damos a las variables, funciones, estructuras, etc*/

/*Palabras reservadas: Son las palabras que tiene una función específica en el lenguaje C 
y que no pueden ser utilizadas como identificadores*/

/*Signos de puntuación: Son los símbolos que permiten una correcta interpretación del código y su sintaxis.*/

/*Separadores: Son los símbolos que separan los distintos elementos*/

/*Archivos de cabecera: Son archivos que contienen declaraciones de variables, funciones, estructuras, constantes, etc.*/