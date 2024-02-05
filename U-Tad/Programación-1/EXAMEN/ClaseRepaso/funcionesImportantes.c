/*AREA DE DECLARACIONES GLOBALES Y LIBRERIAS: */
#include<stdio.h>

#define MAX 5 

/*AREA DE PROTOTIPADO: */
void	rellenarMatriz(float	matriz[MAX][MAX]);
void	imprimirMatriz(float	matriz[MAX][MAX]);

int		strlen(char *str);
/*AREA DEL PROGRAMA PRINCIPAL MAIN: */

int		main()
{
	float matriz[MAX][MAX]; 
	float array[5] = {0,0};

		printf("Introduzca los parametros de la matriz: \n");
		rellenarMatriz(matriz);
		printf("Su matriz introducida es la siguiente: \n");
		imprimirMatriz(matriz); 
		return 0; 
}

/*AREA DE FUNCIONES: */

void	rellenarMatriz(float	matriz[MAX][MAX]) //Funcion para rellenar la matriz con numeros float
{
	for(int i = 0; i < MAX; i++){
			for(int j = 0; j < MAX; j++){
				
				printf("introduce el parametro %d  %d:  \n",i, j);
				scanf("%f", &matriz[i][j]);
			}
	}
}

void	imprimirMatriz(float	matriz[MAX][MAX]) 
{
	for(int i = 0; i < MAX; i++){
			for(int j = 0; j < MAX; j++){
				printf("%2f", matriz[i][j]);
			}
			printf("\n");
	}
}
