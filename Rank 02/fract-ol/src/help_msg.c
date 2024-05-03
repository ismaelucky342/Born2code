/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_msg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:01:37 by ismherna          #+#    #+#             */
/*   Updated: 2024/05/01 19:08:16 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	print_fractal_options(void); 
void	print_color_options(void);
void	print_controls(void);

void	help_msg(t_fractol *f)
{
	ft_printf("\n+====================================================+");
	ft_printf("|                   ISMHERNA FRACT'OL                  |");
	ft_printf("+====================================================+\n");
	print_fractal_options();
	print_color_options();
	clean_exit(EXIT_FAILURE, f);
}

void	print_fractal_options(void)
{
	ft_printf("\n+===============> FRACTALS: \n");
	ft_printf("\n\tM - Mandelbrot\n");
	ft_printf("\tJ - Julia\n");
	ft_printf("\tB - Burning Ship\n");
	ft_printf("\tX - Mandelbox\n");
}

void	print_color_options(void)
{
	ft_printf("\n+=============== COLOR  ====================+");
	ft_printf("Pick a display color by providing a hexadecimal code.");
}

void	print_controls(void)
{
	ft_printf("\n+===============  CONTROLS  =========================+");
	ft_printf("WASD or arrow keys\tmove view.");
	ft_printf("+/- or scroll wheel\tzoom in and out.");
	ft_printf("Spacebar\t\tchange color schemes.");
	ft_printf("Left click\t\tshift Julia set [Julia only].");
	ft_printf("1, 2, 3, 4, 5\t\tswitch fractals.");
	ft_printf("ESC or close window\tquit fract'ol.");
	ft_printf("+====================================================+\n");
}


