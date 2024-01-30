#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define  SIZE 5 
#define  MAX_NUMBER 100


void	imprimeMatriz(int matrix[SIZE][SIZE]); 


int		main()
{
	srand(time(NULL)); 
	int	matrix[SIZE][SIZE];
	int max_value = 0; 
	int max_row = 0; 
	int max_col = 0; 
	
	
	for(int i = 0; i < SIZE; i++){
			for(int j = 0; j < SIZE; j++){
				matrix[i][j] = rand() % (MAX_NUMBER + 1); 
				
				if(matrix[i][j] > max_value)
				{
				max_value = matrix[i][j];
				max_col = j; 
				max_row = i; 
				}
			}
		
	}
	imprimeMatriz(matrix); 
	printf("el valor maximo de la matriz es %d en la fila %d en la columna %d.\n", max_value, max_row, max_col);
	return 0; 
	
}


void	imprimeMatriz(int matrix[SIZE][SIZE])
{
	for(int i = 0; i < SIZE; i++){
			for(int j = 0; j < SIZE; j++){
				printf("%d  ", matrix[i][j]);
			}
				printf("\n");

	}
				

}