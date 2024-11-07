/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:46:47 by ismherna          #+#    #+#             */
/*   Updated: 2024/11/02 19:40:07 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

int	main(int argc, char *argv[])
{
	t_data	data;

	if (check_valid_args(argc, argv) == 0)
		return (1);
	start_philo(&data, argv);
	create_processes(&data);
	hitman(&data);
	return (0);
}

int	check_content_args(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] < '0' || argv[i] > '9')
		{
			printf("Error: Invalid argument\n");
			return (0);
		}
		i++;
	}
	return (1);
}

int	check_num_args(int argc)
{
	if (argc < 5 || argc > 6)
	{
		printf(R "Error: " NC "Invalid number of arguments\n\n"
			"\tUsage: ./philo_bonus [number_of_philosophers] "
			"[time_to_die] [time_to_eat] [time_to_sleep] "
			"[number_of_times_each_philosopher_must_eat]\n");
		return (0);
	}
	return (1);
}

int	check_max_min(char *argv)
{
	if (ft_atol(argv) > 2147483647)
	{
		printf(R "Error: " NC "Argument is too large\n");
		return (0);
	}
	else if (ft_atol(argv) < 0)
	{
		printf(R "Error: " NC "Argument is too small\n");
		return (0);
	}
	return (1);
}

int	check_valid_args(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (check_num_args(argc) == 0)
		return (0);
	while (i < argc)
	{
		if ((check_max_min(argv[i]) == 0) || (check_content_args(argv[i]) == 0))
		{
			printf(R "Error: " NC "Argument %d is invalid\n", i);
			return (0);
		}
		i++;
	}
	return (1);
}
