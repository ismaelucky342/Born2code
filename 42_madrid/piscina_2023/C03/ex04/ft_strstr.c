/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:26:36 by ismherna          #+#    #+#             */
/*   Updated: 2023/11/21 13:03:10 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

/*
comprueba si esta vacio
recorre str
compara eñ caracter en i de str con el caracter en j de to find 
si son iguales incrementa 
si el caracter en j de tofind es nulo se devuelve un puntero a la cadena str+i
si no son iguales los caracteres reinicia j
si i alcanza el final de str 
*/
