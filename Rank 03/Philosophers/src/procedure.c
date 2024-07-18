/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   procedure.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:16:32 by ismherna          #+#    #+#             */
/*   Updated: 2024/07/18 09:33:27 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_lib.h"

static int	take_forks(t_simulation *sim, t_philosopher *ph);
static void	p_eat(t_simulation *sim, t_philosopher *ph);
static void	p_sleep(t_simulation *sim, t_philosopher *ph);
static void	p_think(t_simulation *sim, t_philosopher *ph);

void	perform_actions(t_simulation *sim, t_philosopher *ph)
{
	if (take_forks(sim, ph) == 2)
	{
		p_eat(sim, ph);
		p_sleep(sim, ph);
		p_think(sim, ph);
	}
}

static void	p_eat(t_simulation *sim, t_philosopher *ph)
{
	ph->last_meal = get_current_time();
	pthread_mutex_lock(&ph->pause);
	ph->time_remaining = ph->last_meal + sim->death_time_threshold;
	pthread_mutex_unlock(&ph->pause);
	display_message(sim, ph, PHILOSOPHER_EAT);
	ft_usleep(sim->eating_duration);
	pthread_mutex_lock(&ph->pause);
	ph->number_meals_eaten++;
	pthread_mutex_unlock(&ph->pause);
	pthread_mutex_unlock(&sim->fork_mutexes[ph->left_fork]);
	pthread_mutex_unlock(&sim->fork_mutexes[ph->right_fork]);
}

static void	p_sleep(t_simulation *sim, t_philosopher *ph)
{
	display_message(sim, ph, PHILOSOPHER_SLEEP);
	ft_usleep(sim->sleeping_duration);
}

static void	p_think(t_simulation *sim, t_philosopher *ph)
{
	display_message(sim, ph, PHILOSOPHER_THINK);
}

static int	take_forks(t_simulation *sim, t_philosopher *ph)
{
	int	forks_taken;

	forks_taken = 0;
	if (ph->left_fork != -1)
	{
		pthread_mutex_lock(&sim->fork_mutexes[ph->left_fork]);
		display_message(sim, ph, PHILOSOPHER_TOOK_FORK);
		forks_taken++;
	}
	pthread_mutex_lock(&sim->fork_mutexes[ph->right_fork]);
	display_message(sim, ph, PHILOSOPHER_TOOK_FORK);
	forks_taken++;
	return (forks_taken);
}
