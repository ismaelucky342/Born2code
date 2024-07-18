/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_message.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:18:38 by ismherna          #+#    #+#             */
/*   Updated: 2024/07/18 09:29:31 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_lib.h"

void	display_message(t_simulation *sim, t_philosopher *philo,
		int message_type)
{
	pthread_mutex_lock(&sim->output_mutex);
	printf("%lld\t", (get_current_time() - sim->simulation_start_time));
	if (message_type == PHILOSOPHER_TOOK_FORK)
		printf("Philosopher %d has taken a fork\n", philo->thread_id);
	else if (message_type == PHILOSOPHER_EAT)
		printf("Philosopher %d is eating\n", philo->thread_id);
	else if (message_type == PHILOSOPHER_SLEEP)
		printf("Philosopher %d is sleeping\n", philo->thread_id);
	else if (message_type == PHILOSOPHER_THINK)
		printf("Philosopher %d is thinking\n", philo->thread_id);
	else if (message_type == PHILOSOPHER_DIE)
	{
		printf("Philosopher %d has died\n", philo->thread_id);
		ft_exit(sim, sim->number_of_philosophers);
	}
	pthread_mutex_unlock(&sim->output_mutex);
}
