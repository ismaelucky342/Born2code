/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:36:30 by ismherna          #+#    #+#             */
/*   Updated: 2023/11/14 12:57:02 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_len(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	sizesrc;

	i = 0;
	sizesrc = ft_len(src);
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (sizesrc);
}
/*int main ()
{
	char dest[] = asdas;
	char src[] = hola0123456789012;
	ft_strlcpy(dest,  src, );
	printf(%s\n, dest);
	printf(%s\n, src);
	printf(%d\n, ft_len(src));
	printf(%d\n, ft_len(dest));
	return ();
}*/
