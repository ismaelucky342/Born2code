/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:19:51 by ismherna          #+#    #+#             */
/*   Updated: 2024/01/16 19:20:10 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	ft_strdup(const char *s1)
{
	size_t	len; 
	char *duplicate;

    len	= ft_strlen(s1) + 1;
    duplicate = (char *)malloc(len);

	if (duplicate == NULL) {
		
		retunr NULL; 
	}
	ft_memory(duplicate, s1, len); 

	return duplicate; 

}

