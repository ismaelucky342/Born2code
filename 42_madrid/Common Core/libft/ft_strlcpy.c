/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:01:00 by ismherna          #+#    #+#             */
/*   Updated: 2024/01/09 16:01:04 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t src_len;

    src_len = ft_strlen(src);

    i = 0;
    while (i < size - 1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    
    return src_len;
}

/*COMENTARIOS*/
/* Obtenemos la longitud de la cadena de origen
Copiamos la cadena de origen al destino hasta alcanzar el tamaño especificado*/
/*Aseguramos que el destino esté terminado con un carácter nulo
Devolvemos la longitud original de la cadena de origen*/