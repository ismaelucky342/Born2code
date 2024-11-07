/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_rutines.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:37:15 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/22 21:37:32 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_eat(t_global_info *data, int fork_1, int fork_2)
{
	pthread_mutex_lock(&data->fork[fork_1]);
	ft_print(data, FORK);
	pthread_mutex_lock(&data->fork[fork_2]);
	ft_print(data, FORK);
	ft_print(data, EAT);
	ft_usleep(data->params.time_to_eat, data);
	pthread_mutex_unlock(&data->fork[fork_2]);
	pthread_mutex_unlock(&data->fork[fork_1]);
}

void	ft_sleep(t_global_info *data)
{
	ft_print(data, SLEEP);
	ft_usleep(data->params.time_to_sleep, data);
}

void	special_think(t_global_info *data)
{
	long	time;

	time = (data->params.time_to_eat * 2) - data->params.time_to_sleep;
	ft_usleep(time * 0.42, data);
	ft_print(data, THINK);
}

void	order_to_eat(t_global_info *data, int left_fork, int right_fork)
{
	if (left_fork == data->params.total_philos)
		ft_eat(data, right_fork - 1, left_fork - 1);
	else
		ft_eat(data, left_fork - 1, right_fork - 1);
}

void	*philo_routine(void *arg)
{
	t_global_info	*data;
	int				left_fork;
	int				right_fork;

	data = (t_global_info *)arg;
	left_fork = data->philo;
	right_fork = (left_fork % data->params.total_philos) + 1;
	if (left_fork % 2 != 0)
		ft_usleep(50, data);
	while (1)
	{
		order_to_eat(data, left_fork, right_fork);
		ft_sleep(data);
		if (data->params.total_philos == 3)
			special_think(data);
		else
			ft_print(data, THINK);
		pthread_mutex_lock(data->mutex_to_dead);
		if (*data->dead == 1)
		{
			pthread_mutex_unlock(data->mutex_to_dead);
			return (NULL);
		}
		pthread_mutex_unlock(data->mutex_to_dead);
	}
}
