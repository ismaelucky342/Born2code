/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:24:34 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/10 17:17:08 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#include "libft.h"//
#include <stdio.h>
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t	i;

	str = (unsigned char)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

int	main()
{
	char	str[] = "Hola Mundo";
	char	ch = 'M';

	void *result = ft_memchr(str, ch, size_t(str));

	if (result != NULL)
		printf("Se encontro 'M' en la posicion: %ld\n", result - str);
	else
		printf(" 'M' no se encontro en la cadena\n");
	return 0;
}

