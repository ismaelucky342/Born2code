/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:35:56 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/25 18:57:52 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	copy;
	int			temp;

	copy = (long int)n;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = (n < 0) ? 1 : 0;
	copy = (n < 0) ? -copy : copy;
	temp = copy;
	while (temp)
	{
		len++;
		temp /= 10;
	}
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = (copy % 10) + '0';
		copy /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
