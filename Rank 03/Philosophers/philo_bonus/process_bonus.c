/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:46:47 by ismherna          #+#    #+#             */
/*   Updated: 2024/11/02 22:21:08 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	hitman(t_data *data)
{
	int	status;
	int	i;
	int	j;

	i = 0;
	j = 0;
	status = 0;
	while (i < data->num_of_philo)
	{
		waitpid(-1, &status, 0);
		if (status != 0)
		{
			while (j++ < data->num_of_philo)
				kill(data->philo[j].pid, SIGINT);
			break ;
		}
		i++;
	}
	sem_close(data->forks);
	sem_close(data->print_semaphore);
	sem_close(data->dead_semaphore);
	sem_close(data->eat_semaphore);
	(sem_unlink("/forks"), sem_unlink("/eat_sem"));
	(sem_unlink("/print_sem"), sem_unlink("/dead_sem"));
	free(data->philo);
}

void	philo_life(t_data *data)
{
	char	*str;

	str = ft_strjoin("/", ft_itoa(data->philo->id));
	if (str == NULL)
	{
		printf("Error: fail creating sem\n");
		hitman(data);
	}
	sem_unlink(str);
	data->eat_semaphore = sem_open(str, O_CREAT, 0644, 1);
	if (data->eat_semaphore == SEM_FAILED)
	{
		write(2, "Semaphore error\n", 16);
		hitman(data);
	}
}

void	create_processes(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->num_of_philo)
	{
		data->philo->pid = fork();
		if (data->philo->pid == 0)
		{
			data->philo->id = i + 1;
			philo_life(data);
			routine(data);
		}
		else if (data->philo->pid == -1)
			hitman(data);
		i++;
	}
}
