#include<stdio.h>

#define MAX_LENGHT 20 

int rellenarCadena(char cadena[]);

void imprimirPalabras(char cadena[]);


int main()
{
	char cadena[MAX_LENGHT + 1];
		
	
	
	printf("Escribe varias palabras separadas por comas, max 20 caracteres: \n"); 
	rellenarCadena(cadena); 
	
	
	
	
	
	
	return 0; 
}

 
int rellenarCadena(char cadena[])
{
	int i = 0; 
	char c; 
	
	while(c = getchar() != '\n' && i < MAX_LENGHT)
	{
		cadena[i++] = c; 
	}
	if(c > MAX_LENGHT){
		
		return 0; 
		
	}else{
		return i; 
	}	
}

void imprimirPalabras(char cadena[])
{
	int inicio = 0; 
	
	for(int i = 0; cadena[i] != '\n'; i++){
		if(cadena[i] == ','){
		cadena[i] == '\0'
		
		printf("%s\n", &cadena[inicio]);
		inicio = i + 1 ;      
		}
		printf("%s\n", &cadena[inicio]);

	}
	
		
		
}