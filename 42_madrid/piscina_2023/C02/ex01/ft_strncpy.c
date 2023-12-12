/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:37:44 by ismherna          #+#    #+#             */
/*   Updated: 2023/11/13 12:50:37 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*buffer;
	unsigned int	start;

	start = 0;
	buffer = dest;
	while (start < n)
	{
		if (*src == '\0')
			*buffer = '\0';
		else
		{
			*buffer = *src;
			src++;
		}
		buffer++;
		start++;
	}
	return (dest);
}
