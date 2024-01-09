/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:31:40 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/09 12:33:28 by rde-migu         ###   ########.fr       */
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