/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:17:57 by ismherna          #+#    #+#             */
/*   Updated: 2024/07/18 09:40:10 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_lib.h"

int	check_input(int ac, char *av[])
{
	int	i;
	int	val;

	i = 1;
	if (ac == 5 || ac == 6)
	{
		while (i < ac)
		{
			if (!ft_is_number(av[i]))
				return (0);
			val = ft_atoi(av[i]);
			if (val <= 0 || val > INT_MAX || (i == 1
					&& val > MAX_NUM_PHILOSOPHERS) || ((i == 2 || i == 3
						|| i == 4) && val < 60))
				return (0);
			++i;
		}
	}
	else
		return (0);
	return (1);
}

void	input_error(void)
{
	printf("Fatal error on input.\n");
}
