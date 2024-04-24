/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:35:46 by ismherna          #+#    #+#             */
/*   Updated: 2024/02/27 10:48:25 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	size;

	size = 0;
	if (str == 0)
	{
		return (ft_print_str("(null)"));
	}
	while (str[size])
	{
		size += ft_print_char(str[size]);
	}
	return (size);
}
