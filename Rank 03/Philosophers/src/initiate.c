/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initiate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:18:08 by ismherna          #+#    #+#             */
/*   Updated: 2024/07/18 09:31:43 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_lib.h"

void	inicialize_forks(t_simulation *ptr, size_t i, size_t size)
{
	if (size == 1)
	{
		ptr->philosophers[i].right_fork = 0;
		ptr->philosophers[i].left_fork = -1;
	}
	if (size > 1)
	{
		ptr->philosophers[i].right_fork = i;
		if (i == 0)
			ptr->philosophers[i].left_fork = ptr->number_of_philosophers - 1;
		else
			ptr->philosophers[i].left_fork = i - 1;
	}
	pthread_mutex_init(&ptr->fork_mutexes[i], NULL);
}

static int	inicialize_philosophers(t_simulation *ptr)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = ptr->number_of_philosophers;
	ptr->simulation_start_time = get_current_time();
	while (i < size)
	{
		ptr->philosophers[i].thread_id = i + 1;
		inicialize_forks(ptr, i, size);
		pthread_mutex_init(&ptr->philosophers[i].pause, NULL);
		ptr->philosophers[i].pointer_program = ptr;
		if (pthread_create(&ptr->philosophers[i].processor_thread, NULL,
				philosopher_thread, &ptr->philosophers[i]) != 0)
			return (0);
		i++;
	}
	i = 0;
	while (i < ptr->number_of_philosophers)
	{
		pthread_join(ptr->philosophers[i].processor_thread, NULL);
		i++;
	}
	return (1);
}

void	initialize_simulation(t_simulation *ptr, int n_philos, int argc,
		char *argv[])
{
	ptr->simulation_end_flag = 0;
	pthread_mutex_init(&ptr->death_mutex, NULL);
	ptr->number_of_philosophers = n_philos;
	ptr->death_time_threshold = ft_atoi(argv[2]);
	ptr->eating_duration = ft_atoi(argv[3]);
	ptr->sleeping_duration = ft_atoi(argv[4]);
	if (argc == 6)
		ptr->required_meals = ft_atoi(argv[5]);
	else
		ptr->required_meals = -1;
	pthread_mutex_init(&ptr->meal_mutex, NULL);
	pthread_mutex_init(&ptr->output_mutex, NULL);
	ptr->simulation_start_time = get_current_time();
	inicialize_philosophers(ptr);
}
