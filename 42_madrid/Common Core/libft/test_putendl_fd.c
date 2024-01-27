/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putendl_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-migu <rde-migu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:05:07 by rde-migu          #+#    #+#             */
/*   Updated: 2024/01/23 20:25:17 by rde-migu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	const char *str1 = "Hello WorldHello";
	const char *str2 = "Hello";

	char *result = ft_strtrim(str1, str2);

	 printf("%s", result);
	return (0);
	
}

