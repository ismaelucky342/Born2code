/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:18:11 by ismherna          #+#    #+#             */
/*   Updated: 2024/12/14 14:58:44 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

static void	*ft_wait(void *philo_v)
{
	t_philo		*philo;
	long long	time_without_eating;

	philo = (t_philo *)philo_v;
	while (1)
	{
		sem_wait(philo->d->mutex);
		time_without_eating = ft_current_time() - philo->last_eat;
		if (time_without_eating > philo->d->time_to_die)
		{
			ft_output(philo->d, philo->pid, R "has died" RE);
			sem_post(philo->d->somebody_dead);
			return (NULL);
		}
		sem_post(philo->d->mutex);
		usleep(1000);
	}
}

static void	ft_take_forks(t_philo *philo)
{
	sem_wait(philo->d->fork);
	ft_output(philo->d, philo->pid, B "has taken a fork" RE);
	sem_wait(philo->d->fork);
	ft_output(philo->d, philo->pid, B "has taken a fork" RE);
}

static void	ft_eat(t_philo *philo)
{
	ft_output(philo->d, philo->pid, RE "is eating" RE);
	philo->last_eat = ft_current_time();
	ft_usleep(philo->d->time_to_eat);
	philo->count_eat++;
	if (philo->d->num_of_times_each_philo_must_eat != -1
		&& philo->count_eat == philo->d->num_of_times_each_philo_must_eat)
		sem_post(philo->stop_eat);
}

static void	ft_sleep(t_philo *philo)
{
	ft_output(philo->d, philo->pid, Y "is sleeping" RE);
	sem_post(philo->d->fork);
	sem_post(philo->d->fork);
	ft_usleep(philo->d->time_to_sleep);
	ft_output(philo->d, philo->pid, MG "is thinking" RE);
}

int	ft_routine(void *philo_v)
{
	t_philo	*philo;

	philo = (t_philo *)philo_v;
	if (pthread_create(&philo->wait, NULL, &ft_wait, philo) != 0)
		return (1);
	pthread_detach(philo->wait);
	while (1)
	{
		ft_take_forks(philo);
		ft_eat(philo);
		ft_sleep(philo);
	}
	return (0);
}
