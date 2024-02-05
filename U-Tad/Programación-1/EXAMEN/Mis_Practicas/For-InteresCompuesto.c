/*PROGRAMA INTERES COMPUESTO*/

#include<stdio.h>

int		main()
{
	double	dineroActual, adicionAnual, interesAnual = 0; 
	int		anios = 0; 
	
	printf("Ingrese dinero actual: \n");
	scanf("%lf", &dineroActual);
	
	printf("Ingrese dinero anadido anualmente: \n");
	scanf("%lf", &adicionAnual);
	
	printf("Ingrese tiempo en anios: \n");
	scanf("%lf", &anios);
	
	printf("Ingrese interes a calcular: \n");
	scanf("%lf", &interesAnual);

	double total = dineroActual; 
	
	for(int i = 0; i < anios; i++){
		total += 1000 ;
		total = total + (interesAnual * total / 100); 
		
	}
	
	printf("en 10 años tendras %lf", total); 
	return 0; 
}