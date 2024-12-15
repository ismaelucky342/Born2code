/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-l <dgomez-l@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:04:35 by ismherna          #+#    #+#             */
/*   Updated: 2024/12/07 21:08:37 by dgomez-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnlen(char *str, int n)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	if (n != -1)
		while (str && str[i] && i < n)
			i++;
	else
		while (str && str[i])
			i++;
	return (i);
}
