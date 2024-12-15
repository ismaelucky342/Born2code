/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_current_time.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:50:32 by ismherna          #+#    #+#             */
/*   Updated: 2024/12/14 14:59:57 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo_bonus.h"

long long	ft_current_time(void)
{
	struct timeval	current_time;
	long long		ms;

	gettimeofday(&current_time, NULL);
	ms = (current_time.tv_sec * 1000) + (current_time.tv_usec / 1000);
	return (ms);
}
