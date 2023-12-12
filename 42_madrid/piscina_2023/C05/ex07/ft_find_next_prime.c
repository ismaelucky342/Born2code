/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:29:40 by ismherna          #+#    #+#             */
/*   Updated: 2023/11/23 17:30:51 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
	{
		return (2);
	}
	while (1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb ++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%i\n", ft_find_next_prime(5));
	printf("%i\n", ft_find_next_prime(2147483647));
	printf("%i\n", ft_find_next_prime(200000000));
	printf("%i\n", ft_find_next_prime(50000));
}*/
