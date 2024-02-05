/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:09:09 by shzhu             #+#    #+#             */
/*   Updated: 2024/01/26 19:15:05 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	b;
	int				i;

	b = (unsigned char)c;
	i = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == b)
			return ((char *)&str[i]);
		i++;
	}
	if (b == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
/*int main() {
	const char *str = "Hello, World!";
	char target = 'H';

	char *result = custom_strchr(str, target);

	if (result != NULL) {
		printf("posición %ld de la cadena.\n", result - str);
	}
	return (0);
}

COMENTARIOS
CORRECCIONES:
- Básicamente se han realizado dos correcciones siendo la primera 
al principio de la función para ver si str es NULL. 
de lo contrario procede a buscar el caracter c en str.
- La segunda correccion se basa básicamente comrpueba 
si el último caracter del string es igual a c despues del bucle while. 
si es asi devuelve el puntero a ese caracter y por lo contrario retornara 
en NULL indicando que c no se encontro en str.*/
