/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:35:46 by ismherna          #+#    #+#             */
/*   Updated: 2024/02/27 10:48:25 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_length_ptr(unsigned long long ptr);

static void	ft_search_ptr(unsigned long long ptr);

int	ft_print_pointer(unsigned long long ptr)
{
	int	size;

	size = 0; // inicializa el string a 0
	size += ft_print_str("0x"); // imprime el string 0x 
	if (ptr == 0) // verifica si es nulo 
		size += ft_print_char('0');
	else // busca el hexadecimal en el string y devuelve la longitud que almacena en size 
	{
		ft_search_ptr(ptr);
		size += ft_length_ptr(ptr);
	}
	return (size);
}

static int	ft_length_ptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	while (ptr > 0) // recorre el puntero y devuelve la longitud 
	{
		len++;
		ptr /= 16;
	}
	return (len);
}

static void	ft_search_ptr(unsigned long long ptr)
{
	if (ptr >= 16) // imprime de izquerda a derecha un hexadecimal 
	{
		ft_search_ptr(ptr / 16);
		ft_search_ptr(ptr % 16);
	}
	else
	{
		if (ptr < 10) // si es menor que 10 imprime numero mas nulo
			ft_print_char(ptr + '0');
		else
			ft_print_char(ptr - 10 + 'a'); //  si es mayoer de 10 imprime numero menos 10 mas la letra correspondiente 
	}
}
