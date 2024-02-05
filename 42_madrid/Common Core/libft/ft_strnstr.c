/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:51:35 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/26 19:23:21 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
	const char	*haystack = "Hello, world";
	const char	*needle = "world";
	const char	*result;

	result = ft_strnstr(haystack, needle, 13);
	if (result != NULL)
	{
		printf("La subcadena %s fue encontrada en la posicion %ld", needle,
			result - haystack);
	} else {
		printf("La subcadena %s no fue encontrada", needle);
	}
	return (0);
}

COMENTARIOS
* - Declaras dos variable size_t, i y j
* - Comprueba si la subcadena es una cadena vacia o NULL,
	en cuyo caso devuelve el puntero a la cadena original.
*
	- Recorre la cadena principal (haystack) hasta el final o 
	hasta alcanzar la ongitud máxima (len)
*
	- Inicializa j para comenzar la comparación de la subcadena 
	desde el principio.
*
	- Compara la subcadea (needle) con la porción correspondiente de 
	la cadena principal (haystack) mientras no se alcance el final 
	de la cadena principal (haystack) ni la longitud máxima (len),
* - si se encuentra una coinciencia completa de la subcadena,
	devuelve el puntero a la posición actual en la cadena principal.
* - Incrementa j para comparar el siguiente carácter de la subcadena.
* - Si la comparación no fue exitosa,
	incrementa i para pasar al siguiente carácter en la cadena principal.
* - si no se encontró la subcadena, devuelve NULL.*/
