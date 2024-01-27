/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:44:20 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/25 18:57:52 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Definición de la función bzero donde se define al puntero *s
 * que apunta al inicio del bloque de memoria que se va a anular,
 * y size_t n se determinará la cantidad de bytes que se anularan*/
void	ft_bzero(void *s, size_t n)
{
	/*Llamada a la función ft_memset*/
	ft_memset(s, 0, n);
}
