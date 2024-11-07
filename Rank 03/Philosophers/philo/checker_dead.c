/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_dead.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:37:15 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/23 16:21:54 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	checker_dead(t_global_info *data)
{
	pthread_mutex_lock(data->mutex_to_dead);
	if (*data->dead == 1)
	{
		pthread_mutex_unlock(data->mutex_to_dead);
		return (1);
	}
	pthread_mutex_unlock(data->mutex_to_dead);
	return (0);
}
