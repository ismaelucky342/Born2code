/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:46:15 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/26 19:20:53 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}

/*COMENTARIOS
 *
	- Primero se declara la variable i de tipo entero que se igualará 
	su valor a la función ft_strlen con el objetiuvo de obtener 
	la longitud de la cadena.
 * - Se inicia el bucle para recorrer el string.
 * - Se verifica si el caracter actual es igual a c.
 *
	- Y si es igual se devuelve un puntero a esa posición en el string 
	se convierte en char *) (str
	+ i) para asegurarse de que el tipo de puntero coiujncida con 
	el tipo de retorno de la función.
 *
	- Despues de cada iteración del bucle i se decrementa para pasar 
	al siguiente carácter hacia atrás en la cadena.
 *
	- Finalmente cuando no s eencutnra mas deja d eiterar y devuelve NULL 
	lo que significa fin ds ela función.
 *
	- en resumen ft_strrchr busca la ultima posicion 
	del caracter c en la cadena str 
	y devuelve un puntero a esa posición en la cadena.
 *
 * - básicamente sirve para localizar un caracte rencontreto 
 *   dentro de una cadena de caracteres.*/
