/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:11:38 by ismherna          #+#    #+#             */
/*   Updated: 2024/12/14 15:01:45 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

static int	ft_check_digits(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (1);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}

int	ft_parsing(int argc, char **argv, t_data *d)
{
	if (ft_check_digits(argc, argv) == 1)
		return (1);
	if (argc < 5)
		return (1);
	d->num_of_philo = ft_atol(argv[1]);
	d->time_to_die = ft_atol(argv[2]);
	d->time_to_eat = ft_atol(argv[3]);
	d->time_to_sleep = ft_atol(argv[4]);
	if (argc == 6)
		d->num_of_times_each_philo_must_eat = ft_atol(argv[5]);
	else
		d->num_of_times_each_philo_must_eat = -1;
	if (d->num_of_philo <= 0 || d->time_to_die <= 0 || d->time_to_eat <= 0
		|| d->time_to_sleep <= 0 || (argv[5]
			&& d->num_of_times_each_philo_must_eat <= 0))
		return (1);
	return (0);
}
