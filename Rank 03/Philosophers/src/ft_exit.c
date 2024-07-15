#include "philo_lib.h"

void	exit_clean(t_simulation *p, int c)
{
	size_t	i;

	i = 0;
	if (c)
		return (exit(1));
	while (i < p->number_of_philosophers)
	{
		pthread_mutex_lock(&p->philos[i].pause);
		pthread_mutex_lock(&p->forks[i]);
		p->philos[i].pr = NULL;
		++i;
	}
	pthread_mutex_lock(&p->write_lock);
	return (exit(1));
}

