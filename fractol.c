/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <brendos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 14:41:18 by brendos-          #+#    #+#             */
/*   Updated: 2025/12/07 17:33:54 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractal.h"

int	main(int argc, char **argv)
{
	t_fractal	fractal;

	if ((2 == argc && (!ft_strcmp(argv[1], "mandelbrot"))) || (4 == argc
			&& (!ft_strcmp(argv[1], "julia"))))
	{
		fractal.name = argv[1];
		// Prompt correct, kick off the application
		fractal_init(&fractal);
		fractal_render(&fractal);
		mlx_loop(fractal.mlx_start);
	}
	else
	{
		ft_error_msg();
		exit(EXIT_FAILURE);
	}
	return (0);
}
