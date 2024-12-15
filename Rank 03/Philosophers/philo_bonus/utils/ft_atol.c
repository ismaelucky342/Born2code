/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:20:29 by ismherna          #+#    #+#             */
/*   Updated: 2024/12/14 14:59:05 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo_bonus.h"

long	ft_atol(const char *str)
{
	long	i;
	int		sign;
	long	digits;

	sign = 1;
	digits = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] == '0')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		digits = digits * 10 + (str[i++] - 48);
	return (digits * sign);
}
