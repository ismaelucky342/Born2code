/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:41:01 by ismherna          #+#    #+#             */
/*   Updated: 2024/01/09 17:41:06 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

int ft_atoi(const char *str)
{
    int num;
    int sign;
    int i;

    num = 0;
    sign = 1;
    i = 0;

    while (str[i] == ' ' || str[i] == '\t'
            || str[i] == '\n' || str[i] == '\v' 
                || str[i] == '\f' || str[i] == '\r')
        i++;

    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + (str[i] - '0');
        i++;
    }

    return (num * sign);
}
    


/*ATOI: ascii to integeer*/