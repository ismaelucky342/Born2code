/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 00:20:40 by ismherna          #+#    #+#             */
/*   Updated: 2024/02/06 00:40:45 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void	printchari(unsigned int i, char *c)
{
	printf("%u: %c\n", i, *c);
}

/*int main()
{
	char str[] = "Hello, World";

	ft_striteri(str, printchari);
	return (0);
}*/

/*COMENTARIOS
 *
	- Esta función básicamente lo que hace es implementar 
	una función a cada caracter de un string.
 *
	- Para que funciones primero en laa delcaracion de la funcion *s i
	es el puntero string y *f es la funcion

	*   que a su vez epsera a dos parameros 
	*   un unsigned int (entero sin singo) y un char
	* que es un puntero a
 *   caracter que aunta al caracter actual.
 * - Seguido de esto se verifica si los punteros tanto s
 *   como f son nulos.
 *
	- si no lo son se inicializa un indice i en cero que servirá para seguir la i
	posicion del caracter en la cadena.
 *
	- Posteriormente se utiliza un bucle while que 
	itera a traves de la cadena s 
	hasta que se lelga al carcter nulo.
 *
	- en cada iteraciób la funcion f sse llama con i
	dos argumentos: el indice actual i i
	y la dirección del caracter actual &s[i].
 * - El resultado será que la función f se aplica a 
 *   cada carácter de la cadena,
	permitiendo realizar opraciones específicas en cada carácter,

	*   según la lógica definida por la función f 
	*   que en este caso pone un número delate de 
	*   una caracter del string que indicamos en el main.*/
