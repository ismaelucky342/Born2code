#include<stdio.h>
#include <stdlib.h> /* rand y srand */
#include <unistd.h> /* getpid */
#include <math.h> /* pow y sqrt */
#define N 5
#define M 3

void imprimirMatriz(float matriz[N][M]);


int main () 
{
	srand(getpid()); 
	float matriz[N][M]; 
    float minimo, maximo, suma, promedio, desviacion;
	
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			matriz[i][j] = (float) rand() / (float) RAND_MAX ;
		}
	}
	printf("--> La matriz generada es: \n");
	imprimirMatriz(matriz);
	
	printf("-->Imprimir metricas: \n"); 
	
	  for(int i = 0; i < N; i++){
        minimo = matriz[i][0];
        maximo = matriz[i][0];
        suma = 0;
        for(int j = 0; j < M; j++){
            if(matriz[i][j] < minimo) minimo = matriz[i][j];
            if(matriz[i][j] > maximo) maximo = matriz[i][j];
            suma += matriz[i][j];
        }
        promedio = suma / M;
        desviacion = 0;
        for(int j = 0; j < M; j++){
            desviacion += pow(matriz[i][j] - promedio, 2);
        }
        desviacion = sqrt(desviacion / M);
        printf("Fila %d: minimo: %.4f, maximo: %.4f, suma: %.4f, promedio: %.4f, desviacion: %.4f\n", i, minimo, maximo, suma, promedio, desviacion);
    }
	return 0; 
}







void imprimirMatriz(float matriz[N][M])
{
	for(int i = 0; i < N; i++){
			for(int j = 0; j < M; j++){
				
				printf("%4f", matriz[i][j]);
			}
				printf("\n");

	}
}