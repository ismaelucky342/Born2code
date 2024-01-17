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

char *ft_strchr(const char *str, int c) {
    while (*str != '\0') {
        if (*str == c) {
            return (char *)str; 
        }
        str++;
    }

    return NULL; 
}

int main() {
    const char *str = "Hello, World!";
    char target = 'H';

    char *result = custom_strchr(str, target);

    if (result != NULL) {
        printf("posición %ld de la cadena.\n", result - str);
    }
    return 0;
}
