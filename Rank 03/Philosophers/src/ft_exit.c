/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:18:28 by ismherna          #+#    #+#             */
/*   Updated: 2024/07/18 09:39:06 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_lib.h"

void	ft_exit(t_simulation *p, int c)
{
	size_t	i;

	if (c)
		exit(1);
	while (i < p->number_of_philosophers)
	{
		pthread_mutex_lock(&p->philosophers[i].pause);
		pthread_mutex_lock(&p->fork_mutexes[i]);
		p->philosophers[i].pointer_program = NULL;
		i++;
	}
	pthread_mutex_lock(&p->output_mutex);
	return (exit(1));
}
