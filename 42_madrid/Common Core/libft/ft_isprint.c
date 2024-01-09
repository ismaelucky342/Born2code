/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:40:54 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/09 12:42:13 by rde-migu         ###   ########.fr       */
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