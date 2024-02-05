/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:54:41 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/30 16:44:22 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/*int main()
{
	char *str = "Hola mundo";
	int	fd = 1;

	ft_putendl_fd(str, fd);
	return (0);
}*/

/*COMENTARIOS
 * - Llamamos a la función ft_putstr_fd que es 
 *   la función que se encarga
 *   de imprimir un string en un descriptor 
 *   de archivo específico.
 *
	- Luego utilizamos la función write para ecribir 
	un salto de línea seguido del string.
 *
	- El objetivo de esta función es que se se 
	imprima una cadena seguida de un sato de linea
 *   dentro de un descriptor de archivo específico.*/
