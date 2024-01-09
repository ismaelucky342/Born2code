/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:34:05 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/09 12:35:28 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if((c >= '0' && '9'))
	{
		return (1);
	}
	return (0);
}

/*COMENTARIOS*/
/*La funcion compreba si c es numerico*/
/*Si es asi devuelve 1 sino 0*/