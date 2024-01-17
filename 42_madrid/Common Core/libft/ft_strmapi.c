/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:42:46 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/16 19:25:56 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include "libft.h"//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char map_function(unsigned int index, char c)
{
    return (index % 2 == 0) ? toupper(c) : tolower(c);
}

char    *ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
    int i;
    char    *str;
    int len;

    i = 0;
    if (!s)
    return (NULL);
    len = ft_strlen(s);
    str = malloc(sizeof(char)* (len + 1));
    if (!str)
    return (NULL);
    while (i < len)
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[len] = '\0';
    return (str);
}

int main()
{
    const char *input;
    char *result;

    input = "HelloWorld";
    result = ft_strmapi((char *)input, map_function);

    printf("%s\n", input);
    printf("%s\n", result);
    return 0;
}

//COMENTARIOS//
/*
 - EXPLICACION DE LA FUNCIÓN: Básicamente la función ft_strmapi permite aplicar una función de mapeo personalizada a cada caracter individual dentro de una cadena. Y la función de mapeo en este caso ha sido determinada por las funciones toupper y tlower que transforman los caracteres a minusculas y a maysuculas.
 - PASO A PASO:
    - Primero se declaran las varialbes que serían i que es el indie que recorre la cadena de entrada, str que es el puntero a caracteres para almacenar la nueva cadena resultante y len que sera la longitud de la cadena de entrada.
    - Se manejan los casos nulos si la cadena de entrada s es nula la funcion devolvera NULL.
    - Se obtendrán la longitud de la cadena de entrada utilizando la función strlen
    - Se asigna memoria con malloc para la nueva cadena considerando la longitud y el caracter nulo. 
    - Se aplica la funcion a cada caracter donde se utiliza un bucle para recorrer cada caracter en s y para cada caracter se llama a la funcion con f con el indice y el caracter actual y el resultado se almacena en la nueva cadena que es str
    -  Por ultimo se asigna el caracter nulo al final de la nueva cadena y se devuelve el resultado que sera la nueva cadena alterada con la funcion ft_strmapi. */
