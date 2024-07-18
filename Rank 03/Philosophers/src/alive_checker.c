/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alive_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:34:37 by ismherna          #+#    #+#             */
/*   Updated: 2024/07/18 09:35:45 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_lib.h"

void	*alive_checker(void *p)
{
	t_philosopher	*ph;

	ph = p;
	while (1)
	{
		pthread_mutex_lock(&ph->pause);
		if (ph->time_remaining < get_current_time())
		{
			display_message(ph->pointer_program, ph, PHILOSOPHER_DIE);
			pthread_mutex_lock(&ph->pointer_program->output_mutex);
			pthread_mutex_unlock(&ph->pointer_program->death_mutex);
			return (NULL);
		}
		pthread_mutex_unlock(&ph->pause);
		usleep(1000);
	}
}
