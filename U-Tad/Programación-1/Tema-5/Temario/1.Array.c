#include <stdio.h>

int main() {

    /*Array de enteros de 5, metodo no recomendable*/
    int a[5];
    a[0] = 10; /* Asigna el valor 10 al elemento 0 del array */
    a[1] = 20; /* Asigna el valor 20 al elemento 1 del array */
    a[2] = 30; /* Asigna el valor 30 al elemento 2 del array */
    a[3] = 40; /* Asigna el valor 40 al elemento 3 del array */
    a[4] = 50; /* Asigna el valor 50 al elemento 4 del array */
    

    // Array de 6 enteros (tipo int) inicializado en el momento de la declaración 
    int num[6] = {10,20,30,40,50,60};   

    // Array de 3 enteros (tipo int) inicializado en el momento de la declaración. 
    // Hemos omitido el tamaño por lo que dicho tamaño será el número de constantes 
    // utilizado en la inicialización. 
    int num2[ ] = {1,2,3};

    // Array de 4 caracteres (tipo char) inicializado en el momento de la declaración. 
    char ch[ ] = {'H','o','l','a'};

    // Array de 5 enteros (tipo int) inicializado en el momento de la declaración 
    int p[5] = {10,20,30,40,50};

    printf("The 6th integer in num array is: %d\n", num[5]); // Accessing 6th integer
    printf("The 3rd integer in num2 array is: %d\n", num2[2]); // Accessing 3rd integer
    printf("The 4th character in ch array is: %c\n", ch[3]); // Accessing 4th character
    printf("The 5th integer in p array is: %d\n", p[4]); // Accessing 5th integer
    printf("The 5th integer in p array is: %d\n", a[4]); // Accessing 5th integer
    return 0;
}
/*PARA ESPECIFICAR EL TAMAÑO DE UN ARRAY SE PUEDE HACER DURANTE O DESPUES DE LA DECLARACION*/
/*POR ESO SE OMITE EN ALGUNOS CASOS*/