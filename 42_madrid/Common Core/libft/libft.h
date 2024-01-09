/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:58:26 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/09 12:23:58 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int i;

	i =  0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	if (i == n)
		return 0;
	return (s1[i] - s2[i]);
}

size_t	ft_strcpy(char *dst, const char *src, size_t dstsize)
{
	size_t srcsize;
	size_t i;

	if (!dst || !src)
		return (0);
	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	ft_isdigit(int c)
{
	if((c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

int	ft_isalnum (int c)
{
	if (( c >= 'A' && c <= 'Z') || (c >= 'a' && c <= '2') || (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

int	ft_isascii (int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

int	ft_isprint (int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

int	ft_memset (int c)
{

