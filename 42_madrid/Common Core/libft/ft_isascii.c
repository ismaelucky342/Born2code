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