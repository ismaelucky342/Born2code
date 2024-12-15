/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 15:02:09 by ismherna          #+#    #+#             */
/*   Updated: 2024/12/14 15:03:22 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

static void	ft_close_semaphores(t_data *d)
{
	int		i;
	char	name[255];

	sem_close(d->fork);
	sem_unlink("fork");
	sem_close(d->print);
	sem_unlink("print");
	sem_close(d->mutex);
	sem_unlink("mutex");
	sem_close(d->somebody_dead);
	sem_unlink("somebody_dead");
	if (d->philo)
	{
		i = 0;
		while (i < d->num_of_philo)
		{
			ft_sem_name("stop_eat", (char *)name, i);
			sem_close(d->philo[i].stop_eat);
			sem_unlink(name);
			i++;
		}
	}
}

int	ft_free(t_data *d)
{
	int	i;

	i = 0;
	while (i < d->num_of_philo)
		kill(d->philo[i++].id, SIGKILL);
	ft_close_semaphores(d);
	if (d->philo)
		free(d->philo);
	return (1);
}
