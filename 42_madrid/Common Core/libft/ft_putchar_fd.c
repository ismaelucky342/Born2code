/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:46:10 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/30 16:47:57 by rde-migu         ###   ########.fr       */
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
