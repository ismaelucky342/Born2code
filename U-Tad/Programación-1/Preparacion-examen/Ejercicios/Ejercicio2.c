/*Obtener media de varios numeros*/
#include<stdio.h>

int main()
{
    int numero, resultado1; 
    float total; 
    for(int i = 0; i<3; i++)
    {
        printf("Dame un numero %d: ", i+1);
        scanf("%d", &numero);
        resultado1= resultado1+numero; 
    }
    total=resultado1/3; 
    printf("\nLa media es: %.2f\n",total);
    return 0; 
}