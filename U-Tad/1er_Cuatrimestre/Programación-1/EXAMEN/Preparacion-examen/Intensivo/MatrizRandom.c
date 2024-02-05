#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define MAX_LENGHT 999

void printMatrix(int matrix[4][4]);

int main()
{
	srand(time(NULL)); 
	
	int matrix[4][4]; 
	int max_value = 0; 
	int max_row = 0; 
	int max_col = 0; 
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			matrix[i][j] = rand() % (MAX_LENGHT + 1); 
			
			if(matrix[i][j] > max_value){
				max_value = matrix[i][j]; 
				max_col = i; 
				max_row = j; 
			}
		}
	}
	
	printMatrix(matrix);
	
	printf("el valor maximo es %d, posicionado en la fila %d en la columna %d.\n", max_value, max_row, max_col);
	return 0; 
}

void printMatrix(int matrix[4][4]){
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			printf("%3d  ", matrix[i][j]);
		}
		printf("\n");
	}
}
