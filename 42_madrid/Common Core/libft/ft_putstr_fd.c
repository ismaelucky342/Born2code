/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 00:20:40 by ismherna          #+#    #+#             */
/*   Updated: 2024/02/06 00:40:45 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s != NULL)
		while (s[i])
			write(fd, &s[i++], 1);
}

/*int main()
{
	char	str[] = "Hola mundo";
	ft_putstr_fd(str, 1);
	return (0);
}*/

/*COMENTARIOS
 *
	- Los parámetros de esta función y al igul que putchar_fd 
	son la s que es el puntero que a punta 
	a una cadena de caracteres que se imprimirá en el archivo.
	Y fd que es el descriptor de archivo 
	donde se imprimirá la cadena.
 * - El funcinamiento será el siguiente:
 *   - Se comienza inicializando i para recorrer el string.
 *   - Se verifica si el puntero s es nulo.
 *  
	- Se entra en un bucle while que itera a través de la cadena 
	de caracteres s hasta llegar al final de la cadena.
 *  
	- Denro dell bucle la función utiliza write pra escribir 
	un solo caracter en el descriptor de archivo especificado con fd.
 *  
	- La función incrementa i para pasar al siguiente caracter 
	de la cadena hasta alcanzar el final.
 *
	- El proposito es imprimir un string en 
	un descriptor de archivo especifico.*/
