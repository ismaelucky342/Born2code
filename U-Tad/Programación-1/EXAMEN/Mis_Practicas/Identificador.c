#include <stdio.h>
#include <stdbool.h>
#define NUM_EMEPLEADOS 3 /* Numero máximo de empleados */
#define NUM_CHAR_CORREO 100 /* Numero máximo de caracteres del correo */

void GenerarUsuario (char correo[NUM_CHAR_CORREO], char user[NUM_CHAR_CORREO]);
int TamanioUser (char *user); 
bool EsCorreoValido(char correo[NUM_CHAR_CORREO]);

int main()
{
	char usuario[NUM_CHAR_CORREO];
	char correo[NUM_CHAR_CORREO];
	
	for(int i = 1; i <= NUM_EMEPLEADOS; i++){
		printf("introduce el correo del usuario %d: \n", i);
		scanf("%s", &correo);
		
		if(EsCorreoValido(correo)){
			printf("el correo es: %s\n", correo);

			GenerarUsuario(correo, usuario);
			printf("El id del empleado es: %s\n", usuario);
			
			TamanioUser(usuario); 
			printf("el tamaño del id es de: %d\n", TamanioUser(usuario));
		} else {
			printf("El correo introducido no es válido.\n");
		}
	}
	return 0; 
}

void GenerarUsuario (char correo[NUM_CHAR_CORREO], char usuario[NUM_CHAR_CORREO])
{
	int i = 0; 
	
	while(correo[i] != '@' && correo[i] != '\0')
	{
		usuario[i] = correo[i];
		i++; 
	}
	usuario[i] = '\0'; 
}

int TamanioUser (char *usuario)
{
	int a = 0; 
	
	while(usuario[a] != '\0')
	{
		a++; 
	}
	return a; 
}

bool EsCorreoValido(char correo[NUM_CHAR_CORREO])
{
	int i = 0;
	while(correo[i] != '\0'){
		if(correo[i] == '@'){
			return true;
		}
		i++;
	}
	return false;
}
k