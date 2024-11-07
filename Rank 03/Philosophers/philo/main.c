/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:37:15 by ismherna          #+#    #+#             */
/*   Updated: 2024/11/02 21:31:33 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	clean_up(pthread_t *th, t_global_info *info, t_mutex mutex, int n)
{
	int	i;

	i = 0;
	while (i < n)
		pthread_mutex_destroy(&mutex.mutex_fork[i++]);
	i = 0;
	while (i < MUTEX_EXTRA)
		pthread_mutex_destroy(&mutex.mutex_extra[i++]);
	if (info)
	{
		if (info->dead)
			free(info->dead);
		if (info->number_eats)
			free(info->number_eats);
	}
	free(th);
	free(info);
	if (mutex.mutex_fork)
		free(mutex.mutex_fork);
	if (mutex.mutex_extra)
		free(mutex.mutex_extra);
	return (0);
}

int	check_args(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i] != NULL)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if (!ft_isdigit(av[i][j]) || ft_atol(av[i]) == 0)
			{
				if (i == 5 && ft_atol(av[i]) == 0)
					return (0);
				return (-1);
			}
			j++;
		}
		i++;
	}
	if (ft_atol(av[1]) > 200)
		return (-1);
	return (0);
}

int	main(int argc, char **argv)
{
	pthread_t		*thread;
	t_input			arguments;
	t_global_info	*info;
	t_mutex			mutex;

	if (argc < 5 || argc > 6)
		return (printf("Invalid argument number\n"), 1);
	if (check_args(argv) == -1)
		return (printf("Invalid arguments\n"), 1);
	init_params(argv, &arguments, argc);
	memset(&mutex, 0, sizeof(t_mutex));
	memset(&info, 0, sizeof(t_global_info *));
	if (ft_allocate(&thread, &info, &mutex, arguments) != 0)
		return (clean_up(thread, info, mutex, arguments.total_philos));
	if (init_mutex(&mutex, arguments.total_philos) != 0)
		return (clean_up(thread, info, mutex, arguments.total_philos));
	if (init_g_info(info, mutex, arguments) != 0)
		return (clean_up(thread, info, mutex, arguments.total_philos));
	ft_superman(thread, info);
	clean_up(thread, info, mutex, arguments.total_philos);
	return (0);
}
