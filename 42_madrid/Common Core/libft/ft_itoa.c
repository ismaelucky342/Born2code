/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:35:56 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/26 19:08:08 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int	len;
	long int	copy;

	len = 0;
	copy = (long int)n;
	if (n == 0)
	{
		return (ft_strdup("0"));
	}
	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	if (n < 0)
	{
		len = 1;
		copy = -copy;
	}
	int temp = copy;
	while (temp)
	{
		len++;
		temp /= 10;
	}
	if (!(str = malloc(sizeof(char) * (len + 1))))
	{
		return (NULL);
	}
	str[len] = '\0';

	while (len--)
	{
		str[len] = (copy % 10) + '0';
		copy /= 10;
	}
	if (n < 0)
	{
		str[0] = '-';
	}
	return (str);
}
