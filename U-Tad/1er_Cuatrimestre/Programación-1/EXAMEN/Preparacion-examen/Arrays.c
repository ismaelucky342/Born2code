#include<stdio.h>

int     main()
{
	/*
	int multi[2][3] = {{5,3,1},{6,4,2}}; 
	printf("%i\n", multi[0][2]);
	*/

	int	sizeA; //variable tamaño

	printf("tamaño arreglo\n"); //vamos a solicitar el tamaño del array
	scanf("%i", &sizeA); 
	int age[sizeA];
	for(int	i = 0; i < sizeA; i++)
	{
		printf("ingresa el valor %i\n", i);
		scanf("%i",&age[i]);
	}
	printf("los valores del arreglo son:\n");
	for (int i = 0; i < sizeA; i++)
	{
		printf("%i-\n", age[i]);
	}
	printf("\n");
	return 0; 
    
}
