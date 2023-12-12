/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:35:40 by ismherna          #+#    #+#             */
/*   Updated: 2023/11/15 10:11:48 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int main()
{
    char s1[] = hello;
    char s2[] = hello world;

    int result = ft_strcmp(s1, s2);

    if (result > )
    {
        printf('%s' is greater than '%s'\n, s1, s2);
    }
    else if (result < 0)
    {
        printf('%s' is less than '%s'\n, s1, s2);
    }
    else
    {
        printf('%s' is equal to '%s'\n, s1, s2);
    }

    return ;
}*/
