#include<stdio.h>

int		main()
{
	int number; 
	
	printf("ingrese un numero entre 1 y 7: \n");
	scanf("%d", &number); 
	
	switch(number)
	{
	case 1: 
			printf("hoy es lunes");
			break;
	case 2: 
			printf("hoy es martes");
			break; 
	case 3: 
			printf("hoy es miercoles");
			break; 
	case 4: 
			printf("hoy es jueves");
			break;
	case 5: 
			printf("hoy es viernes");
			break; 
	case 6: 
			printf("hoy es sabado");
			break; 
	default: 
			printf("hoy es domingo");
			break; 			
	}
	return 0; 
}