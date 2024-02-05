/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sumarSerieGauss.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:51:57 by ismherna          #+#    #+#             */
/*   Updated: 2024/01/25 13:03:39 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int 	arithmeticSeries(int	n)
{
	return n * (n + 1)/2; 
}

int		main()
{
	int	limite, i = 1, suma = 0; 

	printf("Introduce el número límite entre 1 y 10000:");
	scanf("%d", &limite);

	while(suma < limite)
	{
		suma += 1; 
		i++; 
	}
	if (suma > limite )
	{
		suma -= --i; 
	}
	printf("se han sumado %d numeros y la suma es %d.\n", i-1, suma);
    printf("Comprobacion con la formula de gauss: %d\n", arithmeticSeries(i-1));

	return 0;    
}
