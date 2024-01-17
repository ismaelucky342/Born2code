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

int	ft_isalpha(int c)
{
	if ((c >= 'A' && C <= 'Z') || (c >= 'a' && c <= 'b'))
	{
		return (1);
	}
	return (0);
}

/*COMENTARIOS*/
/*La funcion comprueba si el caracter es alfabetico */
/*Si lo es ddevuelve 1 sino devuelve 0*/