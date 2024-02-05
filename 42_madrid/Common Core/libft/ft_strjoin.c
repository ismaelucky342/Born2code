/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:03:17 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/30 17:39:29 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		a;
	int		b;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	i = 0;
	str = malloc(a + b + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[i - a])
	{
		str[i] = s2[i - a];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	char	*s1 = "Hola";
	char	*s2 = "mundo!";
	char	*result;

	result = ft_strjoin(s1,s2);

	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}*/

/*COMENTARIOS

 * - Primero delcaramos las variables un char puntero,
	las dos cadenas y un índice
 *
	- Se verifica si alguna de las dos cadenas es NULL o 
	esta vavia y si es asi devuelve NULL.
 * - Se utiliza la funcion strlen para calcular la 
 *   longitud de las cadenas.
 *
	- Se utiliza la función malloc para asignar memoria 
	dinámica para la nueva cadena. 
	La longitud necesara sera la suma de a
	+ b + uno.
 *
	- Se cpia cada caracter de la cadena s1 a la cadena str y 
	posteriormente se restablece 
	el indice y se copian los caracteres de la cadena s2 a 
	continuacion de la cadena s1 en str.
 * - Se agrega el caracter nulo para indicar el final de la cadena.
 *
	- Por ultimo la funcion devuelve str que sera la 
	concatenacion de las cadenas s1 y s2.
 *
	- Ventajas: No modifica las cadenas originales y 
	permite crear una cadena 
	nueva que tiene exactamente el tamaño necesario 
	para contener ambas cadenas 
	lo que evita desperdiciar memoria.*/
