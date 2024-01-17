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

int	ft_isalnum(int c)
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
