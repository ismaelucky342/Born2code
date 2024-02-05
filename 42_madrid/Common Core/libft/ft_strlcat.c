/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 00:20:40 by ismherna          #+#    #+#             */
/*   Updated: 2024/02/06 00:40:45 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	while (i < size && dst[i] != '\0')
		i++;
	if (i == size)
		return (size + src_len);
	j = 0;
	while (src[j] && i + j + 1 < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
	{
		dst[i + j] = '\0';
	}
	else if (size > 0)
		dst[size - 1] = '\0';
	return (dst_len + src_len);
}

/*COMENTARIOS
llamamos al strlen del destino y origen para calcular 
su tamaño y los almacena
luego mientras i mas j mas uno (por el nulo) sean menores al 
size j recorre el origen
se encuentra la posicion en que termina la cadena destino*

CORRECCION
- Se ha agregado una corrección mas antes de iniciar 
la copia desde src a dst.
- Si i es igual a size, significa que ya hemos 
alcanzado el límite de dst,
	y en este caso, simplementew devolvemos size + srclen,
	lo cual significa que dado que la cadena de destino dst 
	ya ha alcanzado su capacidad máxima size,
	el resultado sería igual a esa capacidad size más la longitud de 
	la cadena de origen src_len lo qque indica que la cadena resultante sería de 
	esa longitud si no hubiera restricciones de tamaño.*/
