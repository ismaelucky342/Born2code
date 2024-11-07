/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   monitoring_routines_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:46:47 by ismherna          #+#    #+#             */
/*   Updated: 2024/11/02 19:34:47 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	is_dead(t_data *data)
{
	sem_wait(data->eat_semaphore);
	if (ft_get_time() - data->last_meal >= data->time_to_die)
	{
		printf_with_id_and_time(data, data->philo->id,
			"\033[31mhas died\033[0m\n");
		sem_wait(data->print_semaphore);
		data->dead_flag = 1;
		exit(1);
	}
	sem_post(data->eat_semaphore);
}

void	*monitor(void *arg)
{
	t_data	*data;
	int		i;

	i = 0;
	data = (t_data *)arg;
	while (1)
	{
		is_dead(data);
		if (data->dead_flag == 1)
			exit(0);
		usleep(100);
		while (data->num_of_meals != -1
			&& data->philo[i].times_eaten >= data->num_of_meals
			&& i < data->num_of_philo)
			i++;
		if (i == data->num_of_philo)
		{
			data->dead_flag = 1;
			exit(0);
		}
	}
	return (NULL);
}

void	check_alive(long long time, t_data *data, char *str)
{
	time_t		start;

	start = ft_get_time();
	if (str)
		printf_with_id_and_time(data, data->philo->id, str);
	while (1)
	{
		if (ft_get_time() - start >= time)
			break ;
		usleep(10);
		sem_wait(data->dead_semaphore);
		if (data->dead_flag == 1)
		{
			sem_post(data->dead_semaphore);
			break ;
		}
		sem_post(data->dead_semaphore);
	}
	return ;
}
