#include<stdio.h>

int main()
{
	int num1, num2, suma, multiplicacion, division; 
	
	printf("Introduzca valor 1: ");
	scanf("%d", &num1);
	printf("Introduzca valor 2: ");
	scanf("%d", &num2);
	
	suma = num1 + num2; 
	multiplicacion = num1*num2; 
	division = num1/num2; 
	
	printf("El resultado de la suma es %d\n", suma); 
	printf("El resultado de la multiplicacion es %d\n", multiplicacion); 
	printf("El resultado de la division es %d\n", division); 

	return 0; 
}

