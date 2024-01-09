/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shzhu <shzhu@student.42madrid.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:29:45 by shzhu             #+#    #+#             */
/*   Updated: 2024/01/09 16:55:22 by shzhu            ###   ########.fr       */
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
