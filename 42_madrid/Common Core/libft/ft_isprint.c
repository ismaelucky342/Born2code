/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:19:51 by ismherna          #+#    #+#             */
/*   Updated: 2024/01/16 19:20:10 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_isprint (int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
/*COMENTARIOS*/
/*caracteres imprimibles: incluyen todos 
los caracteres que no son ni letras ni números*/
/*La funcion comprubea si el caracter es un caracter que imprimible
entre espacio y ~ */