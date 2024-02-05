#include<stdio.h>

int suma();
int num3 = 2; //variable global 
int main()
{
    int num1, num2; 
    printf("ingrese primer valor\n");
    scanf("%i", &num1);

    printf("ingrese segundo valor\n");
    scanf("%i", &num2);
    
    printf("El resultado es: %i\n", suma(num1, num2));
    return 0; 
}
int suma(int   num1, int num2)
{
    int suma = num1 + num2 + num3; 
    return suma; 
}