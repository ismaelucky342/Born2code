/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shzhu <shzhu@student.42madrid.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:54:31 by shzhu             #+#    #+#             */
/*   Updated: 2024/01/09 15:05:46 by shzhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char ft_tolower(char c)
{
   if (c >= 'A' && c <= 'Z') {
       return c + 32;
   } else {
       return c;
   }
}

/*int main() {
   char ch = 'g';
   printf("%c",ft_tolower(ch));
   return 0;
}*/
