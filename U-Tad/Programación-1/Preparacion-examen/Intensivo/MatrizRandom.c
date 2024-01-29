#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define SIZE 4
#define MAX_LENGHT 999

int main()
{
	srand(time(NULL)); 
	
	int matrix[SIZE][SIZE]; 
	int max_value = 0; 
	int max_row = 0; 
	int max_col = 0; 
	
	for(int i = 0; i < SIZE; i++){
		for(int j = 0; j < SIZE; j++){
			matrix[i][j] = rand() % (MAX_LENGHT + 1); 
			
			if(matrix[i][j] > max_value){
			max_value = matrix[i][j]; 
			max_col = i; 
			max_row = j; 
			}
		}
	}
	for(int i = 0; i < SIZE; i++){
		for(int j = 0; j < SIZE; j++){
			printf("%3d  ", matrix[i][j]);
		}
		printf("\n");
	}
	printf("el valor maximo es %d, posicionado en la fila %d en la columna %d.\n", max_value, max_row, max_col);
	return 0; 
	
	
}