/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:35:46 by ismherna          #+#    #+#             */
/*   Updated: 2024/02/27 10:48:25 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	int	size;

	size = 0;
	if (n == 0) // si es nulo imprime caracter nulo 
		size += ft_print_char('0');
	else// sino 
	{
		if (n / 10 != 0)// verificamos si entre 10 da 0 
			ft_print_unsigned(n / 10);//divide para mostrar el numero uno por uno 
		ft_print_char((n % 10) + '0'); // lo pasa a cadena y añade el nulo 
		while (n > 0)// cuenta la cantidad total de digitos
		{
			n /= 10;
			size++;
		}
	}
	return (size);
}
