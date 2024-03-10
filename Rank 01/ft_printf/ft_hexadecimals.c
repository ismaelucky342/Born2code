/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimales.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:35:46 by ismherna          #+#    #+#             */
/*   Updated: 2024/02/27 10:48:25 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_length_hex(unsigned int num); 
static void	ft_search_hex(unsigned int num, const char word);

int	ft_print_hex(unsigned int num, const char word)
{
	if (num == 0) //Verificamos si es nulo 
		return (ft_print_char('0'));
	else
		ft_search_hex(num, word); //llamamos a la funcion de buscar hex e imprimirlo
	return (ft_length_hex(num)); // luego devuelve la longitud del decimal
}

static void	ft_search_hex(unsigned int num, const char word)
{
	if (num >= 16) //imprimir los digitos hexadecimales de izquierda a derecha 
	{
		ft_search_hex(num / 16, word);
		ft_search_hex(num % 16, word);
	}
	else //cuando es menor que 16 
	{
		if (num < 10)//si es menor que 10 muestro numero mas nulo 
			ft_print_char(num + '0');
		else // si es mayor asigno las letras mayus o minusculas 
		{
			if (word == 'x')
				ft_print_char(num - 10 + 'a');
			if (word == 'X')
				ft_print_char(num - 10 + 'A');
		}
	}
}

static int	ft_length_hex(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0) //recorre el numero  hex 
	{
		len++;
		num = num / 16;
	}
	return (len);//devuelve su longitud 
}
