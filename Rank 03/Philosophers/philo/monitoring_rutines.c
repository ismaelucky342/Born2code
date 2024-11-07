/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   monitoring_rutines.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:37:15 by ismherna          #+#    #+#             */
/*   Updated: 2024/11/02 19:46:20 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	verify_eat(t_global_info *data)
{
	int	i;

	i = 0;
	if (data->params.count_meals_required == 0)
		return (0);
	pthread_mutex_lock(data->mutex_to_eats);
	while (i < data->params.total_philos)
	{
		if (data->number_eats[i] < data->params.count_meals_required)
		{
			pthread_mutex_unlock(data->mutex_to_eats);
			return (0);
		}
		i++;
	}
	pthread_mutex_unlock(data->mutex_to_eats);
	pthread_mutex_lock(data->mutex_to_dead);
	*data->dead = 1;
	pthread_mutex_unlock(data->mutex_to_dead);
	return (1);
}

int	verify_dead(t_global_info *data)
{
	pthread_mutex_lock(data->mutex_to_dead);
	if (*data->dead == 1)
	{
		pthread_mutex_unlock(data->mutex_to_dead);
		return (1);
	}
	pthread_mutex_lock(data->mutex_l_ate);
	if (ft_get_time() - data->start_time - data->last_ate
		> data->params.time_to_die)
	{
		*data->dead = 1;
		pthread_mutex_unlock(data->mutex_l_ate);
		pthread_mutex_unlock(data->mutex_to_dead);
		ft_print_death(data);
		return (1);
	}
	pthread_mutex_unlock(data->mutex_l_ate);
	pthread_mutex_unlock(data->mutex_to_dead);
	return (0);
}

void	*routine_monitor(void *arg)
{
	int				i;
	t_global_info	*data;

	data = arg;
	while (1)
	{
		i = 0;
		while (i < data->params.total_philos)
		{
			if (verify_dead(&data[i]) || verify_eat(&data[i]))
				return (NULL);
			i++;
		}
	}
}
