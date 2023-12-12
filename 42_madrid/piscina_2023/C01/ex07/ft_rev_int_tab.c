/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 01:29:42 by ismherna          #+#    #+#             */
/*   Updated: 2023/11/11 01:32:20 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	cambio;

	i = 0;
	while (i < size / 2)
	{
		cambio = tab[i];
		tab[i] = tab[size - i -1];
		tab[size - i -1] = cambio;
		i ++;
	}
}
