#include"philo_lib.h"

void	ft_usleep(int milliseconds)
{
	long int	t;

	t = get_time();
	while (get_time() - t < milliseconds)
		usleep(milliseconds / 10);
}