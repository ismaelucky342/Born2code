/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:46:47 by ismherna          #+#    #+#             */
/*   Updated: 2024/11/02 22:21:21 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	printf_with_id_and_time(t_data *data, int id, char *str)
{
	size_t	time;

	sem_wait(data->print_semaphore);
	time = ft_get_time() - data->start_time;
	if (data->dead_flag == 1)
	{
		sem_post(data->print_semaphore);
		return ;
	}
	printf("\033[1;33m%ld \033[32mphilo[%d]: \033[0m%s\033[0m\n", time, id,
		str);
	sem_post(data->print_semaphore);
}

int	dead_philo(t_data *data)
{
	sem_wait(data->dead_semaphore);
	if (data->dead_flag == 1)
	{
		sem_post(data->dead_semaphore);
		return (1);
	}
	sem_post(data->dead_semaphore);
	return (0);
}

void	eating(t_data *data)
{
	usleep(10);
	sem_wait(data->forks);
	printf_with_id_and_time(data, data->philo->id,
		"\033[1;34mhas taken a fork\033[0m");
	sem_wait(data->forks);
	printf_with_id_and_time(data, data->philo->id,
		"\033[1;34mhas taken a fork\033[0m");
	sem_wait(data->eat_semaphore);
	data->last_meal = ft_get_time();
	sem_post(data->eat_semaphore);
	check_alive(data->time_to_eat, data, "\033[32mis eating\033[0m");
	data->philo->times_eaten++;
	sem_post(data->forks);
	sem_post(data->forks);
}

static void	run_philo_cycle(t_data *data)
{
	while (1)
	{
		sem_post(data->dead_semaphore);
		eating(data);
		if (dead_philo(data))
			exit(0);
		if (data->num_of_meals != -1
			&& data->philo->times_eaten >= data->num_of_meals)
			exit(0);
		check_alive(data->time_to_sleep, data,
			"\033[38;5;214mis sleeping\033[0m");
		printf_with_id_and_time(data, data->philo->id,
			"\033[35mis thinking\033[0m");
		sem_wait(data->dead_semaphore);
	}
}

void	*routine(t_data *data)
{
	data->last_meal = ft_get_time();
	if (pthread_create(&data->monitor_thread, NULL, monitor, (void *)data))
	{
		printf("Error creating monitor thread\n");
		return (NULL);
	}
	if (data->philo->id % 2 == 0)
		ft_usleep(5);
	sem_wait(data->dead_semaphore);
	run_philo_cycle(data);
	pthread_join(data->monitor_thread, NULL);
	exit(1);
}
