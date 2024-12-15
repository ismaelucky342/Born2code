/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:53:13 by ismherna          #+#    #+#             */
/*   Updated: 2024/12/14 14:58:53 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	ft_output(t_data *d, int pid, char *msg)
{
	long long	time_work;

	time_work = ft_current_time() - d->time_start;
	sem_wait(d->print);
	printf(MG "(%lld) " RE, time_work);
	printf(G "philo[%d]" RE, pid);
	printf("%s\n", msg);
	sem_post(d->print);
}
