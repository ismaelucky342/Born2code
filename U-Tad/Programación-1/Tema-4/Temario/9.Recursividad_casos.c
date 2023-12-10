#include <stdio.h>

int factorial(int n) {
    // Caso base
    if (n == 0) {
        return 1;
    }
    // Caso recursivo
    else {
        return n * factorial(n-1);
    }
}

int main() {
    printf("%d\n", factorial(5)); // Salida: 120
    return 0;
}
/*SE DEFINE UNA FUNCION QUE CALCULE EL FACTORIAL*/
/*si n es 0, la función devuelve 1 (ya que el factorial de 0 es 1).
- De lo contrario, la función devuelve n multiplicado por el factorial de n-1 
- (esto es, la función se llama a sí misma recursivamente).*/