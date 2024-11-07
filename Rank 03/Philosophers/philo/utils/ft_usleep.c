/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usleep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:15:35 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/23 16:23:37 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	ft_usleep(long long wait, t_global_info *data)
{
	long long	start_time;

	start_time = ft_get_time();
	while (ft_get_time() < start_time + wait)
	{
		if (checker_dead(data) == 1)
			return ;
		usleep(100);
	}
}
