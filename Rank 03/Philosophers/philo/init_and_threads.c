/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_and_threads.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:37:15 by ismherna          #+#    #+#             */
/*   Updated: 2024/11/02 21:31:33 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	init_params(char **argv, t_input *arg, int argc)
{
	arg->total_philos = ft_atol(argv[1]);
	arg->time_to_die = (ft_atol(argv[2]));
	arg->time_to_eat = (ft_atol(argv[3]));
	arg->time_to_sleep = (ft_atol(argv[4]));
	if (argc == 6)
		arg->count_meals_required = (ft_atol(argv[5]));
	else
		arg->count_meals_required = 0;
}

int	init_mutex(t_mutex *mutex, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		pthread_mutex_init(&mutex->mutex_fork[i], NULL);
		i++;
	}
	i = 0;
	while (i < MUTEX_EXTRA)
	{
		pthread_mutex_init(&mutex->mutex_extra[i], NULL);
		i++;
	}
	return (0);
}

int	ft_superman(pthread_t *th, t_global_info *data)
{
	int		i;

	i = 0;
	if (data->params.total_philos == 1)
	{
		printf("0  \033[32mphilo[1]: \033[1;34mhas taken a fork\033[0m\n");
		ft_usleep(data->params.time_to_die, data);
		printf("%d  \033[32mphilo[1]:\033[0m \033[31mhas died\033[0m\n", data->params.time_to_die);
		return (1);
	}
	while (i < data->params.total_philos)
	{
		data[i].start_time = ft_get_time();
		pthread_create(&th[i], NULL, &philo_routine, &data[i]);
		i++;
		if (i == data->params.total_philos)
			pthread_create(&th[i], NULL, &routine_monitor, data);
	}
	i = 0;
	while (i <= data->params.total_philos)
		pthread_join(th[i++], NULL);
	return (0);
}

static int	init_dead_and_eat(int **dead, int **eat, t_input arg)
{
	*dead = (int *) malloc(sizeof(int));
	if (!*dead)
		return (printf("memory allocation error\n"), 1);
	**dead = 0;
	*eat = (int *) malloc(sizeof(int) * arg.total_philos);
	if (!*eat)
		return (printf("memory allocation error\n"), 1);
	memset(*eat, 0, sizeof(int) * arg.total_philos);
	return (0);
}

int	init_g_info(t_global_info *data, t_mutex mutex, t_input arg)
{
	int	*dead;	
	int	*eat;
	int	i;

	if (init_dead_and_eat(&dead, &eat, arg) != 0)
		return (1);
	i = 0;
	while (i < arg.total_philos)
	{
		data[i].philo = i + 1;
		data[i].params = arg;
		data[i].fork = mutex.mutex_fork;
		data[i].dead = dead;
		data[i].last_ate = 0;
		data[i].number_eats = eat;
		data[i].mutex_to_print = &mutex.mutex_extra[0];
		data[i].mutex_to_dead = &mutex.mutex_extra[1];
		data[i].mutex_to_eats = &mutex.mutex_extra[2];
		data[i].mutex_l_ate = &mutex.mutex_extra[3];
		i++;
	}
	return (0);
}
