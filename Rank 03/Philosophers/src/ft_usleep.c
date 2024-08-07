/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usleep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:18:17 by ismherna          #+#    #+#             */
/*   Updated: 2024/07/18 09:31:27 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_lib.h"

void	ft_usleep(int milliseconds)
{
	long int	t;

	t = get_current_time();
	while (get_current_time() - t < milliseconds)
		usleep(milliseconds / 10);
}
