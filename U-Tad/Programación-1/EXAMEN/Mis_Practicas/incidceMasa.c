#include<stdio.h>

int		main()
{
	float peso, altura, imc; 
	
	printf("ingrese su peso: \n");
	scanf("%f", &peso);
	
	printf("ingrese su altura: \n");
	scanf("%f", &altura);
	
	imc = peso/(altura * altura) ; 
	
	if(imc < 18.5){
		printf("el IMC es mas bajo de lo normal");
		
	}else if(imc >= 18.5 && imc < 25){
		printf("el IMC es normal");
		
	}else if(imc > 30){
		printf("peso por encima de lo normal");
	}
	
	printf("su imc es de: %f", imc);
	return 0; 
}
