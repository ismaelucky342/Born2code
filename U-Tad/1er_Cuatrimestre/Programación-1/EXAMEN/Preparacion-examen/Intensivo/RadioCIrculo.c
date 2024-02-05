#include<stdio.h>
#define PI 3.1416

int LongitudCircunferencia(int	radio); 
int	AreaCircunferencia(int	radio); 

int	main()
{
	int radio; 
	
	printf("INtroduce el radio de la circunferencia: \n"); 
	scanf("%d", &radio);
	
	printf("el area de la circunferencia en enteros es: %d\n", AreaCircunferencia(radio));
	printf("la longitud de la circunferencia en enteros es: %d\n", LongitudCircunferencia(radio));

	return 0; 
}


int LongitudCircunferencia(int	radio)
{
	return(2*PI*radio);
}

int	AreaCircunferencia(int	radio)
{
	return(PI*(radio*radio));
}