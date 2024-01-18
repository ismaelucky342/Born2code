#include<stdio.h>

int	main()
{
	char	C = 'y'; //de 1 byte a 255
	int	a = 20; //2 bytes -32768 a 32767
	short	e = -1; /* 2 bytes de -128 a 127*/
	unsigned int u = 25; // 2 bytes de 0 a 65535
	long	l = 5932; // 4 bytes -2147483648 a 2147483647
	float	f = 72.534; //decimales y aproxima, puedes especificar cuantos cojes en el print con %.2f
	double	d = 12323.87654; //8 bytes 
	
	
	
	printf ("%.2lf\n", d); 
	return 0; 

}