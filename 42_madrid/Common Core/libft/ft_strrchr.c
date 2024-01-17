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


#include<libft.h>

char *ft_strrchr(const char *str, int c)
{
    int idx = ft_strlen((char *)str) + 1;
    while (idx--)
    {
        if (*(str + idx) == c)
            return (char *)(str + idx);
    }
    return NULL;
}
