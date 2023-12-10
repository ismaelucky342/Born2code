#include <stdio.h>

int suma(int a, int b) {
    int resultado = a + b;
    return resultado;
}

int multiplica(int a, int b) {
    int resultado = a * b;
    return resultado;
}

int main() {
    int x = 5;
    int y = 10;
    int z = suma(x, y);
    int w = multiplica(z, x);
    printf("La suma de %d y %d es %d\n", x, y, z);
    printf("La multiplicación de %d y %d es %d\n", z, x, w);
    return 0;
}

/*En este ejemplo, tenemos tres funciones: suma, multiplica, y main. 
- La función main es la que inicia el programa. 
- Luego, main llama a las funciones suma y multiplica.
- Cuando la función suma es llamada, sus parámetros a y b, y el valor de retorno resultado se guardan en la pila. 
- Luego, cuando la función suma termina, el valor de retorno resultado se coloca en la pila y el flujo de control regresa a la función main.
- Lo mismo ocurre con la función multiplica.
- Cuando es llamada, sus parámetros a y b, y el valor de retorno resultado se guardan en la pila. 
- Y cuando la función multiplica termina, el valor de retorno resultado se coloca en la pila y el flujo de control regresa a la función main.
- Entonces, en este ejemplo, cuando se llama a main, sus variables locales x, y, z, y w se encuentran en la pila. 
- Luego, cuando main llama a suma y multiplica, las variables locales y los parámetros de esas funciones también se encuentran en la pila.

En resumen, la pila de llamadas se encarga de guardar y organizar todas las variables locales y los parámetros de las funciones que están siendo ejecutadas.*/