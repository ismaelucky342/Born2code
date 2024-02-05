/*TABLA DE MULTIPLICAR*/

#include<stdio.h>

int		main()
{
	int	tabla, resultado; 
	printf("Introduce la tabla que quieras: \n");
	scanf("%d", &tabla);
	
	for(int	i = 0; i <= 10; i++){
		
		resultado = tabla * i; 
		printf("\n%d * %d = %d", tabla, i, resultado);
	}
	return 0; 
}