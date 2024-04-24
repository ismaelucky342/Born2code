/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:35:46 by ismherna          #+#    #+#             */
/*   Updated: 2024/02/27 10:48:25 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_print_char(int character);
int	ft_printf(const char *str, ...);
int	ft_print_str(char *str);
int	ft_print_number(int n);
int	ft_print_unsigned(unsigned int n);
int	ft_print_hex(unsigned int num, const char word);
int	ft_print_pointer(unsigned long long ptr);

#endif
