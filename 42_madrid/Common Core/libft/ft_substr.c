/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shzhu <shzhu@student.42madrid.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:37:31 by shzhu             #+#    #+#             */
/*   Updated: 2024/01/11 17:45:43 by shzhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(const char *s, unsigned int start, int len) {
    if (s == NULL) {
        return NULL;  // No se puede extraer una subcadena de una cadena nula
    }

    // Calcular la longitud original de la cadena
    int original_len = 0;
    while (s[original_len] != '\0') {
        ++original_len;
    }

    // Ajustar el valor de "len" si es mayor que la longitud restante desde "start"
    len = (len > original_len - start) ? original_len - start : len;

    // Utilizar malloc para asignar memoria para la subcadena
    char *substring = (char *)malloc(len + 1);  // +1 para el carácter nulo al final

    if (substring != NULL) {
        // Copiar la subcadena en la memoria asignada
        for (int i = 0; i < len; ++i) {
            substring[i] = s[start + i];
        }

        // Agregar el carácter nulo al final de la subcadena
        substring[len] = '\0';
    }

    return substring;
}

int main() {
    const char *cadena = "Hola, mundo!";

    // Utilizar ft_substr para extraer una subcadena
    char *subcadena = ft_substr(cadena, 0, 5);  // Desde el índice 0, con longitud 5

    if (subcadena == NULL) {
        // Manejar el error si la asignación de memoria falla
        return 1;
    }

    // Imprimir la subcadena
    printf("Subcadena: %s\n", subcadena);

    // Liberar la memoria asignada con malloc
    free(subcadena);

    return 0;
}

