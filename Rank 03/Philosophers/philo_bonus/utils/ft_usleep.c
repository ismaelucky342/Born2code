/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usleep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:50:12 by ismherna          #+#    #+#             */
/*   Updated: 2024/12/14 15:00:06 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo_bonus.h"

void	ft_usleep(int time_action)
{
	long	start;

	start = ft_current_time();
	while (ft_current_time() < start + time_action)
		usleep(10);
}
