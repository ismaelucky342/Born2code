/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:44:43 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/25 18:57:52 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = count * size;
	if (size == 0 || count > (size_t)-1 / size)
	{
		return (NULL);
	}
	ptr = malloc(total_size);
	if (ptr != NULL)
	{
		ft_bzero(ptr, total_size);
	}
	return (ptr);
}
