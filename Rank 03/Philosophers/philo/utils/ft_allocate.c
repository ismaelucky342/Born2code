/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allocate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:39:05 by ismherna          #+#    #+#             */
/*   Updated: 2024/10/23 16:23:46 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

int	ft_allocate(pthread_t **th, t_global_info **info, t_mutex *mtx,
		t_input prms)
{
	*th = (pthread_t *)malloc(sizeof(pthread_t) * (prms.total_philos + 1));
	if (!*th)
		return (printf("memory allocation error\n"), 1);
	*info = (t_global_info *)malloc(sizeof(t_global_info) * prms.total_philos);
	if (!*info)
		return (printf("memory allocation error\n"), 1);
	mtx->mutex_fork = (pthread_mutex_t *)malloc(sizeof(pthread_mutex_t)
			* (prms.total_philos));
	if (!mtx->mutex_fork)
		return (printf("memory allocation error\n"), 1);
	mtx->mutex_extra = (pthread_mutex_t *)malloc(sizeof(pthread_mutex_t)
			* MUTEX_EXTRA);
	if (!mtx->mutex_extra)
		return (printf("memory allocation error\n"), 1);
	return (0);
}
