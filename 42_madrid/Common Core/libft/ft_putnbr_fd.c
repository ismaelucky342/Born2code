/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 00:20:40 by ismherna          #+#    #+#             */
/*   Updated: 2024/02/06 00:40:45 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	copia;

	copia = n;
	if (copia < 0)
	{
		copia = (copia * -1);
		write(fd, "-", 1);
	}
	if (copia > 9)
	{
		ft_putnbr_fd(copia / 10, fd);
		ft_putchar_fd((copia % 10) + '0', fd);
	}
	else
		ft_putchar_fd(copia + '0', fd);
}

/*int main()
{
	int	num1 = 12345;
	int	num2 = -6789;

	ft_putnbr_fd(12345, 1);
	write(1, "\n", 1);

	ft_putnbr_fd(-6789, 1);
	write(1, "\n", 1);
	return (0);
}*/

/*COMENTARIOS
 *
	- PARAMETROS: n es el número entero que se imprimirá en el archivo 
	y fd es el descriptor de archivo donde se imprimirá ell numero.
 *
	- VARIABLES LOCALES: Copia se inicializa con el valor de n 
	y se utiliza para manipular el número sin afectar al original. 
	Esta variable es de tipo long para manejar numeros grandes.
 * - FUNCIONAMIENTO:
 *     - Se inicia copiando el valor d en en la variable copia.
 *    
	- se  verifica si el numero es negativo y si es asi se realiz 
	e cambio de signo y se imprime el caracter
	- en el archivo.
 *    
	- se verifica si la copia es mayor que nueve y si es asi se 
	llama recursivamente a ft_putnbr_fd diviidendo copai por diez 
	y luego imprimiendo el digito de las unidades.
 *     - si la copia es menor o igual a nueve,
	se imprime directamente el digito en el archivo.
 *
	- PROPOSITO: El proposito basicamente es de imprimir un numero entero e
	n el descriptor de archivo especifico incuso si el numero es negativo.*/
