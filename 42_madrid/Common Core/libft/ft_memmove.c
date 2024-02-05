/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 00:20:40 by ismherna          #+#    #+#             */
/*   Updated: 2024/02/06 00:40:45 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_cpy;
	const unsigned char	*src_cpy;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_cpy = (unsigned char *)dest;
	src_cpy = (const unsigned char *)src;
	if (dest <= src)
	{
		while (n--)
			*dest_cpy++ = *src_cpy++;
	}
	else
	{
		dest_cpy += n;
		src_cpy += n;
		while (n--)
			*--dest_cpy = *--src_cpy;
	}
	return (dest);
}

/*COMENTARIOS*/
/*Se crean dos punteros: dest_cpy que apunta a i
 * la ubicación de
destino y src_cpy que apunta a la ubicación de origen.
Estos punteros se tratan como punteros a caracteres no i
firmados para facilitar
la manipulación de bytes individuales. */
/*Se verifica si las regiones de memoria de destino y origen se solapan.
Esto se hace comparando las direcciones de memoria dest y src.
- Si dest es menor o igual a src, significa que no se solapan.
- Si las regiones no se solapan,
	se realiza una copia de memoria de izquierda a derecha (hacia adelante).
- Se utiliza un bucle while para copiar byte por byte desde src_cpy a dest_cpy,
	y ambos punteros se incrementan en cada iteración.
- Si las regiones se solapan,
	se realiza una copia de memoria de derecha a izquierda (hacia atrás). 
	Se ajustan los punteros dest_cpy y src_cpy para apuntar al final de 
	las regiones de destino y origen,
	respectivamente. Luego,
	se utiliza un bucle while similar para copiar byte por byte,
	pero esta vez decrementando los punteros después de cada iteración.
Finalmente, la función devuelve un puntero al destino (dest).*/
