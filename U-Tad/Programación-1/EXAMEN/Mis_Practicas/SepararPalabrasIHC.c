#include<stdio.h>

#define MAX 20


int		rellenarCadena(char cadena[]);

void	imprimirCadena(char cadena[]);

void	limpiarBuffer(); 


int main()
{
	char cadena[MAX + 1]; 
	int longitud;
	
	while(rellenarCadena(cadena) == 0){
		printf("la cadena introducida es demasiado larga: \n"); 
	}
	imprimirCadena(cadena); 
	
	return 0; 
	
}

int		rellenarCadena(char cadena[])
{
	char	c; 
	int	longitud = 0; 
	
	printf("Introduzca una lista de palabras que no supere los 20 caracteres: \n");
	scanf("%c", &c);
	while((c != '\n') && longitud < MAX)
	{
		cadena[longitud] = c;
		longitud++; 
	}
	if (c == '\n'){
		
		cadena[longitud] = '\0';
		printf("la longitud es %d\n", longitud);
	}else{
		limpiarBuffer();
		longitud = 0; 
	}
	return longitud; 
}


void	imprimirCadena(char cadena[])
{
	int i = 0; 
	char c; 
	
	c = cadena[i]; 
	while(c != '\0'){
			printf("\n");
		if(c == ',')
		else{
			printf("%c", c);
		}
		c = cadena[i]; 
		i++; 
	}
}


void limpiarBuffer()
{
	while(getchar() != '\n'); 
}