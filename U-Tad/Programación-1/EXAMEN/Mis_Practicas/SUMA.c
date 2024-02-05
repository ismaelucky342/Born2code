#include<stdio.h>

int	sumaGauss(int	n);



int		main(){
	
	int		n = 0; 
	int 	suma = 0; 
	int 	limite; 
	
	do{
		printf("introduce el límite que quieres alcanzar: "); 
		scanf("%d", &limite);		
	}while((limite<0)||(limite >10000));

	while (suma <= limite){
	n++;
	suma += n; 
	}

	printf("Por fuerza bruta, número de enteros sumados: %d, valor de la suma: %d\n",n,suma);
	printf("Por la fórmula del niño Gauss, número de enteros sumados: %d, valor de la suma: %d\n",n,sumaGauss(n));

}




int	sumaGauss(int	n)
{
	return(n*(1+n)/2); 
}