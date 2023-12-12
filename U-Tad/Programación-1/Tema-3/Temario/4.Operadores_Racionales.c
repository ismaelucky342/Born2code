#include <stdio.h>

int main() {
    int num1 = 5;
    int num2 = 10;

    printf("%d\n", num1 == num2); // False, 5 no es igual a 10
    printf("%d\n", num1 != num2); // True, 5 no es igual a 10
    printf("%d\n", num1 < num2); // True, 5 es menor que 10
    printf("%d\n", num1 > num2); // False, 5 no es mayor que 10
    printf("%d\n", num1 <= num2); // True, 5 es menor o igual que 10
    printf("%d\n", num1 >= num2); // False, 5 no es mayor o igual que 10

    return 0;
}

/*
==: Verifica si los dos valores son iguales. 
!=: Verifica si los dos valores son diferentes. 
<: Verifica si el primer valor es menor que el segundo. 
>: Verifica si el primer valor es mayor que el segundo. 
<=: Verifica si el primer valor es menor o igual que el segundo. 
>=: Verifica si el primer valor es mayor o igual que el segundo.
*/