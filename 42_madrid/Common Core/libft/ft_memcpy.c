/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:13:24 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/25 18:57:52 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Básicamente utilizamos esta función para copiar un bloque de memoria
 * desde una ubicación de origen hasta una ubicación de destino.*/

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
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
