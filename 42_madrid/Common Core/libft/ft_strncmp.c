/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:52:11 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/26 19:24:51 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0' || s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*COMENTARIOS
 * - ORIGINAL: return (s1[i] - s2[i]);
 * - CORREGUIDO: return (unsigned char)s1[i] - (unsigned char)s2[i]
 *
	- el cambio utiliza el tipo unsigned char al 
	realizar la resta 
	para asegurarse de que el resultado sea tratado 
	como un valor sin singno. evitando problemas 
	con carácteres que pueden tener valores negativos 
	fuera del conjunto ascci.*/
