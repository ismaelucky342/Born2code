#include<stdio.h>

void cubo(int *n); 
int	main()
{
	int	num = 5; 
	printf("Valor original%i\n",num); 
	cubo(&num);
	printf("el nuevo valor es %i\n", num);
	return 0;

}

void	cubo(int *n)
{
	*n  = *n * *n * *n; 
}
