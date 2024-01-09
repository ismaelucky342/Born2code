/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:35:56 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/09 12:38:35 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isalnum (int c)
{
	if ((c >= 'A' && C <= 'Z') || (c >= 'a' && c <= 'b') 
									|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}
/*COMENTARIOS*/
/*La funcion comprueba si el caracter es alfanumerico*/
/*Si esta entre a/z tanto minuscula como mayuscula o un nuumero entre 0 y 9*/
/*devuelve 1, en caso contrario devuelve 0*/
