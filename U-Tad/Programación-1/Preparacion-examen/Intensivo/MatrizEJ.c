#include<stdio.h>

#define NUM_COLUMNAS 4 
#define NUM_FILAS 5 

void imprimeMatriz(int matriz[][NUM_COLUMNAS], int n_filas, int n_columnas);

int esElementoValle(int matriz[][NUM_COLUMNAS], int n_filas, int n_columnas, int f, int c);

void imprimeValle(int matriz[][NUM_COLUMNAS], int n_filas, int n_columnas, int f, int c);

int calculaTraza(int matriz[][NUM_COLUMNAS], int n_filas, int n_columnas);


int		main()
{
	int matriz[NUM_FILAS][NUM_COLUMNAS] = {
		{7, 3, 5, 3},
		{4, 2, 1, 6},
		{8, 3, 9, 4},
		{9, 2, 6, 3},
		{3, 5, 8, 1},
		
		}; 
		printf("los valores de la  matriz original son: \n");
		imprimeMatriz(matriz, NUM_FILAS,NUM_COLUMNAS);
		
		printf("la traza de la matriz es: %d  \n", calculaTraza(matriz, 4, NUM_COLUMNAS)); 
		
		for(int i = 1; i<= NUM_FILAS - 1; i++){
			for(int j = 1; j<= NUM_COLUMNAS - 1; j++){
				if(esElementoValle(matriz, NUM_FILAS, NUM_COLUMNAS, i, j)){
					imprimeValle(matriz, NUM_FILAS, NUM_COLUMNAS, i, j);
				}
			}
		}
		return 0; 		
}


void imprimeMatriz(int matriz[][NUM_COLUMNAS], int n_filas, int n_columnas)
{
	for(int i = 0; i < NUM_FILAS; i++){
		for(int j = 0; j < NUM_COLUMNAS; j++){
			printf("%d  ", matriz[i][j]);
		}
		printf("\n");
	}
}

int esElementoValle(int matriz[][NUM_COLUMNAS], int n_filas, int n_columnas, int f, int c)
{
	int valle = matriz[f][c];
		
		for(int i = -1; i<= 1; i++){
			for(int j = -1; j<= 1; j++){
				if(!(i == 0 && j == 0)){
				
					if(matriz[i+f][j+c] <= valle){
					return 0; 
					}
			
				}
			}
		}
		return 1; 

}


void imprimeValle(int matriz[][NUM_COLUMNAS], int n_filas, int n_columnas, int f, int c)
{
	printf("hay un elemento valle en la fila %d  , columna %d  \n", f, c);
		
		for(int i = -1; i<= 1; i++){
			for(int j = -1; j<= 1; j++){
				printf("%d  ", matriz[i+f][j+c]);
			}
		printf("\n");
	}
}
int calculaTraza(int matriz[][NUM_COLUMNAS], int n_filas, int n_columnas)
{
	int traza = 0; 
	for(int i = 0; i < n_filas; i++){
		traza += matriz[i][i];		
	}
	return traza;
}
