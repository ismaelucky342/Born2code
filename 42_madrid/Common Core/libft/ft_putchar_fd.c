/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 00:20:40 by ismherna          #+#    #+#             */
/*   Updated: 2024/02/06 00:40:45 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main()
{
	ft_putchar_fd('H', 1);
	ft_putchar_fd('O', 1);
	ft_putchar_fd('L', 1);
	ft_putchar_fd('A', 1);

	return (0);

}*/
// COMENTARIOS//
/*
Funciona exáctamente igual que la funcion ft_putchar 
normal solo que esta proporciona
una forma de escribir un carácter en un descriptor 
de archivo específico  en lugar de la salida estandar.
 Es una funcion util si necesitamos controlar 
 el descriptor de archivo de destino. */
