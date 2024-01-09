/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:38:52 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/09 12:40:34 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii (int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*COMENTARIOS*/
/*La funcion calcula si el caracer esta dentro del codigo ascii*/
/*Devuelve 1 si es asi, devuelve 0 en caso contrario*/