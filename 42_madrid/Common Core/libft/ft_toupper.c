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
