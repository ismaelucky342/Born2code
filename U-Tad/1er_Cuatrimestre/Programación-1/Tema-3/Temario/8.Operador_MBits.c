#include <stdio.h>

int main() {
    int a = 15; // 1111
    int b = 3;   // 0011

    // OR
    printf("a OR b: %d\n", a | b); // 1111 OR 0011 -> 1111 (15)

    // AND
    printf("a AND b: %d\n", a & b); // 1111 AND 0011 -> 0011 (3)

    // XOR
    printf("a XOR b: %d\n", a ^ b); // 1111 XOR 0011 -> 1100 (12)

    // NOT
    printf("NOT a: %d\n", ~a); // 1111 (15) -> 0001 -> 1 (TRUE)

    // SHIFT
    printf("a << 2: %d\n", a << 2); // 1111 (15) << 2 -> 111100 -> 60
    printf("a >> 2: %d\n", a >> 2); // 1111 (15) >> 2 -> 0011 -> 3

    return 0;
}
/*Estos videos los explica muy bien, necesario aún así la teoria*/
/*https://www.youtube.com/watch?v=E_zdDC67HM8*/
/*https://www.youtube.com/watch?v=FphdXXiHNPE*/
