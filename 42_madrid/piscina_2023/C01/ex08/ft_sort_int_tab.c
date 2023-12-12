/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:11:55 by ismherna          #+#    #+#             */
/*   Updated: 2023/11/14 11:12:05 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int    i;
    int    swap;

    while (size >= 0)
    {
        i = 0;
        while (i < size - 1)
        {
            if (tab[i] > tab[i + 1])
            {
                swap = tab [i];
                tab[i] = tab [i + 1];
                tab [i + 1] = swap;
            }
            i++;
        }
        size--;
    }
}
