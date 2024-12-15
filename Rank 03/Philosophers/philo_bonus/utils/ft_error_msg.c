/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_msg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:49:23 by ismherna          #+#    #+#             */
/*   Updated: 2024/12/14 15:00:23 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo_bonus.h"

int	ft_error_arg(int argc)
{
	if (argc > 6)
		write(1, "Too many arguments\n", 19);
	else if (argc < 5)
		write(1, "Too few arguments\n", 18);
	return (1);
}
