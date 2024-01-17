#include<stdio.h>

int	main()
{
	int	num1; 
	int	num2;
	int	resultado; 
	
	printf("ingrese primer valor\n"); 
    /*letra d = entero decimal, 2 argumentos para el scanf*/
	scanf("%d", &num1);
	printf("ingrese segundo valor\n"); 
	scanf("%d", &num2); 
	resultado = num1 + num2; 
	printf("el resultado es: %d\n", resultado);
	return 0; 
}
