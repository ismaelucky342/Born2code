#include<stdio.h>

#define MAX 20

int rellenaCadena(char cadena[]); 

void imprimirPalabras(char cadena[]);

void limpiarbuffer();

int		main()
{
	char cadena[MAX + 1];
	char 	c;
	int		longitud; 

	while((rellenaCadena(cadena)) == 0)
	{
		printf("La cadena introducida no es valida");
	}
	imprimirPalabras(cadena); 
	return 0 ;
}


int rellenaCadena(char cadena[])
{
	char c; 
	int longitud = 0; 

	printf("introduce varias palabras maximo %d caracteres: \n", MAX);
	c = getchar(); 

	while((c != '\n') && longitud < MAX) //mientras no se pulse el enter y sea menor puedo seguir leyendo caracteres
	{
		cadena[longitud] = c; 
		c = getchar(); 
		longitud++; 
	} 
		if(c == '\n'){
		cadena[longitud] = '\0';
		printf("%d\n", longitud);
		}
		else{
			limpiarbuffer();
			longitud = 0; 
		}
	return longitud;
}

void imprimirPalabras(char cadena[])
{
	int i = 0; 
	char c; 

	c = cadena[i];
	while(c != '\0'){
		if(c == ','){
			putchar('\n');
		}else{
			putchar(c);
		}
		i++; 
		c = cadena[i];
	}
	putchar('\n');
}
void limpiarbuffer()
{
	while  (getchar()!='\n')
}