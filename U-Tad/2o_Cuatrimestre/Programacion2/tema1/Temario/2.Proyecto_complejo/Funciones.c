#include "Lib.h"
/*FUCNIONES: */

void sumatorio(float	matriz[MAX][MAX], float array[5])
{
	for(int i = 0; i < MAX; i++){
			for(int j = 0; j < MAX; j++){
				array[i] += matriz[i][j];
			}
	}
}

void 		rellenarMatriz(float matriz[MAX][MAX])
{
	for(int i = 0; i < MAX; i++){
			for(int j = 0; j < MAX; j++){
				
				printf("introduce el elemento %d, %d: \n", i, j);
				scanf("%f", &matriz[i][j]);
			}
	}
}

void		mostrarArray(float array[5])
{
	for(int i = 0; i < 5; i++){
		
		printf("%2f  ", array[i]);

	}
}

void		imprimirMatriz(float matriz[MAX][MAX])
{
	for(int i = 0; i < MAX; i++){
			for(int j = 0; j < MAX; j++){
				
				printf("%f  ", matriz[i][j]);
				
			}
		printf("\n");
	}
}                  

int		limpiarBuffer()
{
	while(getchar() != '\n');
}