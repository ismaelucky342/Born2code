#include<stdio.h>

#define NUM_CHAR_CORREO 100 
#define NUM_EMPLEADOS 3 

void	GenerarUsuario(char	correo[NUM_CHAR_CORREO], char user[NUM_CHAR_CORREO]);
int		tamanoUser(char *user);


int		main()
{
	char	user[NUM_CHAR_CORREO]; 
	char	correo[NUM_CHAR_CORREO];
	
	for(int	i = 0; i < 1; i++){
		printf("Introduce correo del empleado %d: \n", i);
		scanf("%s", &correo);
			
		
		printf("El correo es: %s \n", correo);
		GenerarUsuario(correo, user); 
		
				
		printf("El usuario es: %s \n ", user);	
		tamanoUser(user);
		printf("el tamaño del usuario es: %d \n", tamanoUser(user));
		
	}
	return 0; 
}

void	GenerarUsuario(char	correo[NUM_CHAR_CORREO], char user[NUM_CHAR_CORREO])
{
	int i = 0; 
	
	while(correo[i] != '@' && correo[i] != '\0'){
		user[i] = correo[i]; 
		i++; 
	}
	user[i] = '\0';
}

int		tamanoUser(char *user)
{
	int longitud = 0; 
	
	while(user[longitud] != '\0'){
		longitud++; 		
	}
	return longitud; 
}

















































