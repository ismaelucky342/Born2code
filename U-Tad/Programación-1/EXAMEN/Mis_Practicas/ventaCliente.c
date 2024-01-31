#include<stdio.h>

int main()
{
	float	ventaCliente, ventaTotal = 0; 
	
	do{
		printf("ingrese dinero obtenido : ");
		scanf("%f", &ventaCliente);
		ventaTotal += ventaCliente; 
	}while(ventaCliente != 0 );
	
	printf("la venta total del dia es: %f\n", ventaTotal);
	return 0;
}
