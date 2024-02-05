#include<stdio.h>

int main()
{
	int suma = 0, numero; 
	
	while(suma <= 30)
	{
		printf("introduce un numero");
		scanf("%d", &numero);
		suma= suma+numero; 
	}
	printf("la suma total es: %d", suma);
	return 0; 
}
