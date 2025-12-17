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

	if ((ac == 2 && !ft_strcmp(av[1], "mandelbrot")) || (ac == 4
		&& !ft_strcmp(av[1], "julia")))
	{
		fractal.name = argv[1];
		if (!ft_strncmp(fractal.name, "julia", 5))
		{
			if ((ft_valid(av[2])) || (ft_valid(av[3])))
				ft_erro_bundle();
			fractal.julia_x = ft_atodbl(av[2]);
			fractal.julia_y = ft_atodbl(av[3]);
		}
		ft_fractal_init(&fractal);
		ft_fractal_render(&fractal);
		mlx_loop(fractal.mlx_start);
	}
	else
	{
		ft_error_msg();
		exit(EXIT_FAILURE);
	}
	return (0);
}
