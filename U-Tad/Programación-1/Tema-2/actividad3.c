#include<stdio.h>

int main()
{
	int	x = 1; 
	int	y = 3; 
	int i_result; 
	
	int	var1 = 12; 
	int	var2 = 0 ; 
	int result; 
	
	int num1 = 5; 
	int num2 = -2; 
	int	num3 = 10; 	
	int resultado; 
	
	int	i = 5; 
	int j = 3;
	int res_bits;
	
	int valor1 = 7; 
	int valor2 = 0; 
	int valor3 = 2; 
	int *p = NULL; 
	int *q = NULL; 
	
	printf("\nOperadores de Aritmeticos\n");
	pritnf("Datos de entrada: x = %d, y = %d, a = %f, b = %f\n\n", x, y, a, b); 
	
	i_result = x + (y*2 + x*3);
	printf("==> sentencia 1: i_result = %d\n", i_result); 
	
	d_result = x + y*5 + x*2; 
	printf("==> sentencia 2: d_result = %f\n", d_result); 
	
	d_result = x + a*(y/2.0 + x/2.0);
	printf("==> sentencia 3: d_result = %f\n", d_result); 
	
	i_result = x + a*(y/2.0 + x/2.0);
	printf("==> sentencia 4: i_result = %d\n", i_result);
	
	d_result = -a*(x + y*(a + b/3.0));
	printf("==> sentencia 5: d_result = %f\n", d_result);
	
	printf("\nOperadores de Asignacion, incremetno u Decremento\n");
	printf("Datos de entrada: var1 = %, var2= %d\n\n", var1, var2); 
	
	var1 *= 3.2;
	printf("==> sentencia 6: var1 = %d\n", var1); 
	
	var1++;
	printf("==> sentencia 7: var1 = %d\n", var1); 
	
	var2 = var1++; 
	printf("==> sentencia 8: var1 = %d, var2 = %d\n", var1, var2); 
	
	var2 = --var1; 
	printf("==> sentencia 9: var1 = %d, var2 = %d\n", var1, var2);
	
	var2 /= var2;
	printf("==> sentencia 10: var2 = %d\n", var2);
	
	printf("\nOperadores Relacionales y Lógicos\n");
	pritnf("Datos de entrada: num1 = %d, num2= %d, num3 = %d\n\n", num1, num2, num3); 
	
	resultado = (num1 == num2); 
	printf("==> sentencia 11: resultado = %d\n", resultado); 
	
	resultado = (num1 >= num2) || (num2 < num3); 
	printf("==> sentencia 12: resultado = %d\n", resultado); 
	
	resultado = num2 < 0 && num3 >= 6; 
	printf("==> sentencia 13: resultado = %d\n", resultado); 
	
	resultado = !(num1 <= 3); 
	printf("==> sentencia 14: resultado = %d\n", resultado); 
	
	printf ("\nOperadores de manipulacion de bits\n");
	pritnf("Datos de entrada: i = %d, j = %d\n\n", i, j); 
	
	res_bits = i << j; 
	printf("==> sentencia 15: res_bits = %d\n", res_bits);
	
	res_bits = i >> j; 
	printf("==> sentencia 16: res_bits = %d\n", res_bits);
	
	printf ("\nOperadores de direcciones\n");
	pritnf("Datos de entrada: valor1 = %d, valor2 = %d, valor3 = %d, p = %x, q = %x\n\n",valor1, valor2, valor3, p, q); 
	
	p = &valor1; 
	printf("==> sentencia 17: p = %x\n", p);
	
	valor2 = *p; 
	printf("==> sentencia 18: valor2 = %d\n", valor2);
	
	q = &valor2; 
	printf("==> sentencia 19: q = %x\n", q);
	
	valor3 = *q; 
	printf("==> sentencia 20: valor3 = %d\n", valor3);
	
	return 0; 
}