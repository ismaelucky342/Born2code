/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                           :+:      :+:    :+:*/
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 00:20:40 by ismherna          #+#    #+#             */
/*   Updated: 2024/02/06 00:40:45 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	max_len;

	if (!s || start > ft_strlen(s))
		return (ft_strdup(""));
	max_len = ft_strlen(s) - start;
	if (len > max_len)
		len = max_len;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*int main()
{
	const char *original = "Hello, World!";
	char	*substring = ft_substr(original, 7, 5);


	printf("%s\n", original);
	printf("%s\n", substring);

	free(substring);

	return (0);
}*/

/*COMENTARIOS


	- Se declaran dos variables que sob el char puntero str 
	que representa la subcadena 
	resultante e i que será el indice para rastrear 
	la posición actual de la cadena str
   - Se verifica si la cadena de entrada s es nula, 
   en cuyo caso devuelve NULL.

	- Se manejan casos especiales como por ejemplo que 
	si el indice de inicio "start" 
	es mayor que la cadena s se devuelve una cadena vacía 
	utilizando la función ft_strdup

	- Se copia la subcadena utilizando un bucle se copia 
	len desde la posicion start 
	de la cadena s a la cadena str
   - Se agrega el caracter nuclo al final de la cadena str

	- Se retorna el resultado a str que ser a la nueva cadena que contendra 
	la subcadena de la cadena principal  */
