/*LIBRERIAS Y DECLARACIONES GLOBALES*/

#include "Lib.h"
#define MAX 5
#include <stdio.h>

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
