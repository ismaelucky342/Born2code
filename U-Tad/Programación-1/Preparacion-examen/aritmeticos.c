#include<stdio.h>

int	main()
{
	int	num1; 
	int	num2;


    int a=12; 
    int b=3; 


	int	resultado1; 
    int	resultado2; 
    int	resultado3; 
    int	resultado4; 

    int resultado5; 
	
	printf("ingrese primer valor\n"); 
    /*letra d = entero decimal, 2 argumentos para el scanf*/
	scanf("%d", &num1);
	printf("ingrese segundo valor\n"); 
	scanf("%d", &num2); 

	resultado1 = num1 + num2; 
    resultado2 = num1 - num2; 
    resultado3 = num1 * num2; 
    resultado4 = num1 / num2; 

    resultado5 = a*(num1 * num2)-b ; 
    
	printf("el resultado es: %d\n", resultado1);
    printf("el resultado es: %d\n", resultado2);
    printf("el resultado es: %d\n", resultado3);
    printf("el resultado es: %d\n", resultado4);
     printf("el resultado es: %d\n", resultado5);
	return 0; 
}
