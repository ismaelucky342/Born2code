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

/*Básicamente utilizamos esta función para copiar un bloque de memoria 
 * desde una ubicación de origen hasta una ubicación de destino.*/


void	*ft_memcpy (void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	/*Primero verificamos que dst y src sean punteros nulos y si es asi la función retorna a cero.*/
	if (!dst && !src)
		return (0);
	/*Entramos en el bucle donde copiamos cada bloque de memoria de src a dst y vamos incrementando 
	 * con i mientras sea menor que n que es a longitud especificada*/
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

