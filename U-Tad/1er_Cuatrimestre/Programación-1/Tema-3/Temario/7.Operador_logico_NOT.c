#include <stdio.h>

int main() {
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    // Aplicar operador NOT
    num = !num;

    printf("Resultado de la aplicación del operador NOT: %d\n", num);
    return 0;
}
/*EN ESTE CASO SE HA USADO LITERALMENTE PARA INVERTIR UN RESULTADO*/
/*SI SE USARA EN UN WHILE POR EJEMPLO DELANTE DE UN BLOQUE !()
    SIGNIFICARIA LITERALMENTE: MIENTRAS ESTO NO OCURRA HAGO LO SIGUIENTE*/

    /*while !() { */