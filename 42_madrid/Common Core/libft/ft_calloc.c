/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:34:37 by ismherna          #+#    #+#             */
/*   Updated: 2024/01/11 12:56:21 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

void	ft_calloc(size_t count, size_t size);
{
	size_t	total_size; 

	total_size = count * size; 

	if (count != 0 && total_size / count != size) {
        return NULL;    
   	}
	
	void *ptr = malloc(total_size);

	if (ptr != NULL){
		
		ft_bzero(ptr, total_size); 
		
	}
	
	return	ptr; 
}
