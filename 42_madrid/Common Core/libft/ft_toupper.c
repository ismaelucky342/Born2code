/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shzhu <shzhu@student.42madrid.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:58:24 by shzhu             #+#    #+#             */
/*   Updated: 2024/01/09 15:02:37 by shzhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char ft_toupper(char c)
{
   if (c >= 'a' && c <= 'z') {
       return c - 32;
   } else {
       return c;
   }
}

/*int main() {
   char ch = 'g';
   printf("%c",ft_toupper(ch));
   return 0;
}*/
