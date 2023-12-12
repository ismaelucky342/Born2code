/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:41:51 by ismherna          #+#    #+#             */
/*   Updated: 2023/11/14 13:02:02 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ascii_dec_to_hex(int dec, char *hex)
{
	int		modulo;
	int		digit;
	char	letter;

	letter = 'a';
	digit = 10;
	modulo = dec % 16;
	*hex = (dec / 16) + '0';
	hex++;
	if (modulo > 9)
	{
		while (digit < 16)
		{
			if (modulo == digit)
			{
				*hex = letter;
				break ;
			}
			digit++;
			letter++;
		}
	}
	else
		*hex = modulo + '0';
}

void	ft_putstr_non_printable(char *str)
{
	char	hex[2];

	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
		{
			ascii_dec_to_hex((int)(*str), &hex[0]);
			write(1, "\\", 1);
			write(1, &hex[0], 2);
		}
		str++;
	}
}
/*int	main()
{
	char	text[] = Coucou\ntu vas bien ?;
	ft_putstr_non_printable(text);
	printf(\n);
	char	text1[] = Coucou\rtu v\nas bien ?;
	ft_putstr_non_printable(text1);
	printf(\n);
	return ;
}*/
