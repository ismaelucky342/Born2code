/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thread_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:16:15 by ismherna          #+#    #+#             */
/*   Updated: 2024/07/18 09:34:35 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_lib.h"

void	*philosopher_thread(void *arg)
{
	pthread_t		thread;
	t_philosopher	*ph;
	long long		i;

	ph = arg;
	i = -1;
	if (ph->thread_id % 2 == 0)
		ft_usleep(ph->pointer_program->eating_duration / 10);
	ph->last_meal = get_current_time();
	ph->time_remaining = ph->last_meal
		+ ph->pointer_program->death_time_threshold;
	if (pthread_create(&thread, NULL, alive_checker, ph) != 0)
		return ((void *)1);
	while (ph->pointer_program->required_meals == -1
		|| ++i < ph->pointer_program->required_meals)
	{
		perform_actions(ph->pointer_program, ph);
	}
	return (NULL);
}
