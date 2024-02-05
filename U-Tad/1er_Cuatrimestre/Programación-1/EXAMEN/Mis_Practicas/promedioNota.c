/*OBTENER PROMEDIO NOTAS 10 ESTUDIANTES */

#include<stdio.h>

int main()
{
	 int nota,notaFinal, sumaNotas = 0; 
	
	for(int i = 1; i <= 10; i++)
	{
		printf("Ingrese el valor de la nota %d: ", i);
		scanf("%d", &nota);
		if(nota > 10){
			printf("error notas ponderadas sobre 10");
		}else{
		sumaNotas += nota; 
		}
	}
	notaFinal = sumaNotas / 10; 
	printf("el promedio de notas es: %d",notaFinal);
	
	return 0; 
}