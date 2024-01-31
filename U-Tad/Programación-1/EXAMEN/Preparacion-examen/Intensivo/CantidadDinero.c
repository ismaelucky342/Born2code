#include<stdio.h>

int main()
{
	int	costo, pago, cambio, falta;
	
	printf("Introduzca precio del producto: \n");
	scanf("%d", &costo);
	
	printf("Introduzca pago del cliente: \n");
	scanf("%d", &pago);

	cambio = pago - costo; 
	falta = costo - pago; 

	if(cambio < 0 && falta < 0)
	{
		cambio = -cambio;
		falta = -falta;

	}

	if(pago > costo)
	{
		printf("El cambio es de: %d\n", cambio); 
	}else{
		printf("Le queda por pagar: %d\n", falta); 
		
	}
	return 0; 
}
