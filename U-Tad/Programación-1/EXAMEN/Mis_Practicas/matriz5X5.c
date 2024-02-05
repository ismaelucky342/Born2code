/*LIBRERIAS Y DECLARACIONES GLOBALES*/

#include<stdio.h>

#define MAX 5


/*AREA DE PROTOTIPADO: */

void 		rellenarMatriz(float matriz[MAX][MAX]);
void		imprimirMatriz(float matriz[MAX][MAX]);
void 		sumatorio(float	matriz[MAX][MAX], float array[5]);
void		mostrarArray(float array[5]);

/*PROGRAMA PRINCIPAL MAIN: */

int		main()
{
	float matriz[MAX][MAX]; 
	float array[5] = {0.0};
	
	printf("Introduce los parametros de la matriz: \n");
	rellenarMatriz(matriz);
	
	printf("La matriz ingresada es: \n");
	imprimirMatriz(matriz);
	sumatorio(matriz,array);
	
	printf("el sumatorio de filas es: \n");
	mostrarArray(array);
	
	return 0; 
}

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