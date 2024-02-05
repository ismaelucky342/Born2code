/* Escribir un programa que crea una matriz de tamaño 4x4 de números
 aleatorios enteros entre 0 y 999. 
 
 Una vez construida la matriz mostrar su contenido (atención, no sirve
 mostrar el contenido mientras se construye)
 
 Después de mostrada por pantalla la matriz en un formato correcto,
 buscar el valor máximo y mostrar en el terminal dicho valor, y posición
 en la que se encuentra (fila, columna). Si por una casualidad estuviese
 repetido mostrar la última ocurrencia

 
 Usar el siguiente esqueleto
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

...

int main(){

...

srand(time(NULL));
 
}


y la función rand() para generar los números enteros aleatorios (además
tendrás que añadir algo para que sean entre 0 y 999)

- NO puedes usar tus propias funciones en este programa
- Se valorará el uso de constantes y comentarios adecuados
 
 
*/ 




#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
#include <time.h>

#define MATRIX_SIZE 4

int main(){

int i,j;
int mymatrix[MATRIX_SIZE][MATRIX_SIZE];
int max, imax, jmax;

srand(time(NULL));

for (i=0; i<MATRIX_SIZE; i++)
	for(j=0; j<MATRIX_SIZE; j++)
		mymatrix[i][j] = rand()%1000;


for (i=0; i<MATRIX_SIZE; i++){
	for(j=0; j<MATRIX_SIZE; j++)
		printf("%d\t",mymatrix[i][j]);
	printf("\n");
}

max = mymatrix[0][0];
imax = 0;
jmax = 0;
for (i=0; i<MATRIX_SIZE; i++)
	for(j=0; j<MATRIX_SIZE; j++)
		if (mymatrix[i][j]>=max){
			max = mymatrix[i][j];
			imax = i;
			jmax = j;
		}

printf("\n\nMáximo valor %d -  Posición %d,%d\n", max, imax, jmax);

return 0;

}
