/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   separaPalabras.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:51:32 by ismherna          #+#    #+#             */
/*   Updated: 2024/01/25 12:20:15 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

#define MAX_LENGTH 20
int rellenarCadena(char cadena[]);
void	imprimirPalabras(char	cadena[]); 

int main() {
    char cadena[MAX_LENGTH + 1];
    int longitud;
    printf("Introduce varias palabras separadas por comas:\n");
    while ((longitud = rellenarCadena(cadena)) == 0) {
        printf("La cadena es demasiado larga. Inténtalo de nuevo.\n");
    }
    printf("La longitud de la cadena es: %d\n", longitud);
    imprimirPalabras(cadena);
    return 0;
}

int rellenarCadena(char cadena[])
{
	int i = 0; 
	char c; 

	while((c = getchar()) != '\n' && i < MAX_LENGTH)
	{
		cadena[i++] = c; 
	}
	cadena[i] = '\0';

	if(c != '\n')
	{
		while(getchar() != '\n');
		return 0;
	}
	
	return i;
}


void	imprimirPalabras(char	cadena[])
{
	char	*palabra = cadena; 
	for (int	i = 0; cadena[i] != '\0'; i++)
	{
		if(cadena[i] == ',')
		{
		cadena[i] = '\0';
            printf("%s\n", palabra);
            palabra = &cadena[i + 1];
        }
    }
    printf("%s\n", palabra);
}


