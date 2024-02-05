#include<stdio.h>

int		main()
{
	char *frutas[5];
	frutas[0] = "manzana";
	frutas[1] = "sandia";
	frutas[2] = "pera";
	frutas[3] = "limon";
	frutas[4] = "anana";
	
	//se imorime con un for
	for(int i = 0; i < 5; i++){
		printf(frutas[i]);
		printf("\n");
	}
	return 0; 

}