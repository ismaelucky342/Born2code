#include "philo_lib.h"

void	inicialize_forks(t_simulation *ptr, size_t i, size_t size)
{
	if (size == 1)
	{
		ptr->philos[i].r_fork = 0;
		ptr->philos[i].l_fork = -1;
	}
	if (size > 1)
	{
		ptr->philos[i].r_fork = i;
		if (i == 0)
			ptr->philos[i].l_fork = ptr->philo_size - 1;
		else
			ptr->philos[i].l_fork = i - 1;
	}
	pthread_mutex_init(&ptr->forks[i], NULL);
}

static int	inicialize_philosophers(t_simulation *ptr)
{
	size_t	i;
	size_t	size;

	i = -1;
	size = ptr->philo_size;
	ptr->start_time = get_time();
	while (++i < size)
	{
		ptr->philos[i].id = i + 1;
		inicialize_forks(ptr, i, size);
		pthread_mutex_init(&pr->philos[i].pause, NULL);
		ptr->philos[i].ptr = ptr;
		if (pthread_create(&ptr->philos[i].thread, NULL,
				philosopher_thread, &ptr->philos[i]) != 0)
			return (0);
	}
	i = 0;
	while (i < ptr->philo_size)
		pthread_join(ptr->philos[i++].thread, NULL);
	return (1);
}

void		initialize_simulation(t_simulation *ptr, int n_philos, int argc, char *argv[]);
{
	int	i;

	i = 0;
	ptr->dead_flag = 0;
	ptr->time_to_die = ft_atoi(av[2]);
	ptr->time_to_eat = ft_atoi(av[3]);
	ptr->time_to_sleep = ft_atoi(av[4]);
	if (ac == 6)
		ptr->num_meals = ft_atoi(av[5]);
	else
		ptr->num_meals = -1;
	ptr->philo_size = n_philos;
	pthread_mutex_init(&ptr->dead_lock, NULL);
	pthread_mutex_init(&ptr->meal_lock, NULL);
	pthread_mutex_init(&ptr->write_lock, NULL);
	inicialize_philosophers(ptr);
}