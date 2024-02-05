#include<stdio.h>

/* 
void    saludo()
{
    printf("Hola, como estas?\n");
    return;
}
*/
int suma();
int main()
{
    //saludo();
    printf("%i\n", suma());
    return 0; 
}
int suma()
{
    int num = 12; 
    int num2 = 4; 
    int suma = num + num2; 
    return suma; 
}