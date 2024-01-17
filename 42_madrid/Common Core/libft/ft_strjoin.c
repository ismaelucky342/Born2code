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
#include <stdlib.h>


char *ft_strjoin(const char *s1, const char *s2) {
    if (s1 == NULL || s2 == NULL) {
        return NULL;  // No se puede concatenar cadenas nulas
    }

    // Calcular la longitud de la primera cadena
    int len_s1 = 0;
    while (s1[len_s1] != '\0') {
        ++len_s1;
    }

    // Calcular la longitud de la segunda cadena
    int len_s2 = 0;
    while (s2[len_s2] != '\0') {
        ++len_s2;
    }

    // Calcular la longitud total de la cadena resultante
    int total_len = len_s1 + len_s2;

    // Utilizar malloc para asignar memoria para la cadena resultante
    char *result = (char *)malloc(total_len + 1);  // +1 para el carácter nulo al final

    if (result != NULL) {
        // Copiar la primera cadena en la memoria asignada
        for (int i = 0; i < len_s1; ++i) {
            result[i] = s1[i];
        }

        // Concatenar la segunda cadena al final de la primera
        for (int i = 0; i < len_s2; ++i) {
            result[len_s1 + i] = s2[i];
        }

        // Agregar el carácter nulo al final de la cadena resultante
        result[total_len] = '\0';
    }

    return result;
}

int main() {
    const char *cadena1 = "Hola, ";
    const char *cadena2 = "mundo!";

    // Utilizar ft_strjoin para concatenar dos cadenas
    char *concatenada = ft_strjoin(cadena1, cadena2);

    if (concatenada == NULL) {
        // Manejar el error si la asignación de memoria falla
        return 1;
    }

    // Imprimir la cadena concatenada
    printf("Concatenada: %s\n", concatenada);

    // Liberar la memoria asignada con malloc
    free(concatenada);

    return 0;
}
 
