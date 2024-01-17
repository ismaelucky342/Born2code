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

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;

	split = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			j = 0;
			while (s[j] && s[j] != c)
				j++;
			split[i] = ft_substr(s, 0, j);
			if (!split[i++])
			{
				while (i--)
					free(split[i]);
				free(split);
				return (NULL);
			}
			s += j;
		}
		else
			s++;
	}
	split[i] = NULL;
	return (split);
}
