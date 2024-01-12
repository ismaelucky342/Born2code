/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shzhu <shzhu@student.42madrid.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:09:09 by shzhu             #+#    #+#             */
/*   Updated: 2024/01/09 15:29:19 by shzhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char *custom_strchr(const char *str, int c) {
    while (*str != '\0') {
        if (*str == c) {
            return (char *)str; 
        }
        str++;
    }

    return NULL; 
}

/*int main() {
    const char *str = "Hello, World!";
    char target = 'H';

    char *result = custom_strchr(str, target);

    if (result != NULL) {
        printf("posición %ld de la cadena.\n", result - str);
    }
    return 0;
}*/
