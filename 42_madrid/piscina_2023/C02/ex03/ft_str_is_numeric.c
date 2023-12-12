/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:42:56 by ismherna          #+#    #+#             */
/*   Updated: 2023/11/14 12:59:55 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

//int ft_str_is_numeric(char *str);

/*int	main(void)
{
	printf(%d, ft_str_is_numeric());
	printf(\n%d, ft_str_is_numeric(a2341234));
	printf(\n%d, ft_str_is_numeric());
	printf(\n%d, ft_str_is_numeric(sfbrsgnsrgfbsdf));
	printf(\n%d, ft_str_is_numeric(bsgbsfgbsgsfgADSDS));
	printf(\n%d, ft_str_is_numeric(-_134556efghij67));
    printf(\n%d, ft_str_is_numeric());
	return ();
}
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		i++;
		else
			return (0);
	}
	return (1);
}
