/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:37:15 by ismherna          #+#    #+#             */
/*   Updated: 2024/12/11 17:43:48 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static void	print_eat(t_global_info *data)
{
	pthread_mutex_lock(data->mutex_l_ate);
	data->last_ate = ft_get_time() - data->start_time;
	pthread_mutex_unlock(data->mutex_l_ate);
	printf(COLOR_G "%lld \033[32mphilo[%d]: \033[0m is eating\n" COLOR_RESET,
		data->last_ate, data->philo);
	pthread_mutex_lock(data->mutex_to_eats);
	data->number_eats[data->philo - 1] += 1;
	pthread_mutex_unlock(data->mutex_to_eats);
}

void	ft_print_death(t_global_info *data)
{
	pthread_mutex_lock(data->mutex_to_print);
	printf(COLOR_R "%lld \033[32mphilo[%d]:\033[0m \033[31mhas died\033[0m\n"
		COLOR_RESET,
		ft_get_time() - data->start_time, data->philo);
	pthread_mutex_unlock(data->mutex_to_print);
}

void	ft_print(t_global_info *data, int action)
{
	long long	time;

	pthread_mutex_lock(data->mutex_to_print);
	if (checker_dead(data) == 0)
	{
		time = ft_get_time() - data->start_time;
		if (action == FORK)
			printf(COLOR_Y "%lld \033[32mphilo[%d]:\033[0m "
				"\033[1;34mhas taken a fork\033[0m\n" COLOR_RESET,
				time,
				data->philo);
		else if (action == EAT)
			print_eat(data);
		else if (action == SLEEP)
			printf(COLOR_BLUE "%lld \033[32mphilo[%d]:\033[0m "
				"\033[38;5;214mis sleeping\033[0m\n" COLOR_RESET,
				time,
				data->philo);
		else if (action == THINK)
			printf(COLOR_CYAN "%lld \033[32mphilo[%d]:\033[0m "
				"\033[35mis thinking\033[0m\n" COLOR_RESET,
				time,
				data->philo);
	}
	pthread_mutex_unlock(data->mutex_to_print);
}
