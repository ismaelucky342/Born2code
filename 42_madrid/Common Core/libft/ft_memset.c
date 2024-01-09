/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:44:23 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/09 12:47:38 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset (void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

/*COMENTARIOS*/
/*La funcion consiste en rellenar con un valor a un hueco de memoria*/
/*Se inicializa un indice i para recorrer la memoria, Se utiiliza un bucle 
que recorre la memoria que nos han dado "len" veces*/
/*convierte b a unsigned char para manejar bytes indviduales y asigna e valor c*/
/*incrementa el valor y devuelve b*/
