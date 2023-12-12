/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:33:09 by ismherna          #+#    #+#             */
/*   Updated: 2023/11/21 15:26:47 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);

/*int	main()
{
	char str[] = salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un;
	char str1[] = dfasdfa,dasfasd-asdfadsfa.erewrw;
	printf(%s, ft_strcapitalize(str));
	printf(\n%s, ft_strcapitalize(str1));
}
*/
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (cap == 1)
				str[i] = str[i] - 32;
			cap = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			cap = 0;
		}
		else
		{
			cap = 1;
		}
		i++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
