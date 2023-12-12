/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:15:15 by ismherna          #+#    #+#             */
/*   Updated: 2023/11/18 18:12:04 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int	ft_atoi(char *str);
int	ft_strlen(char *str);
int	*get_numbers(char *str);
int	check(int ac, char **av);
int	check_double(int tab[4][4], int pos, int num);
int	check_case(int tab[4][4], int pos, int entry[16]);

#endif
