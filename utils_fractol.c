/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_fractol.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <brendos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 14:42:06 by brendos-          #+#    #+#             */
/*   Updated: 2025/12/07 17:44:23 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractal.h"

void	fractal_init(t_fractal *fractal)
{
	fractal->mlx_start = mlx_init();
	if (NULL == fractal->mlx_start)
		malloc_error();
	fractal->mlx_window = mlx_new_window(fractal->mlx_start, WIDTH, HEIGHT,
			fractal->name);
	if (NULL == fractal->mlx_window)
	{
		mlx_destroy_display(fractal->mlx_start);
		free(fractal->mlx_start);
		ft_malloc_error();
	}
	fractal->img.img_ptr = mlx_new_image(fractal->mlx_start, WIDTH, HEIGHT);
	if (fractal->img.img_ptr == NULL)
	{
		mlx_destroy_window(fractal->mlx_start, fractal->mlx_window);
		mlx_destroy_display(fractal->mlx_start);
		free(fractal->mlx_start);
		ft_malloc_error();
	}
	fractal->img.pixels_ptr = mlx_get_data_addr(fractal->img.img_ptr,
			&fractal->img.bits_pixel, &fractal->img.line_len,
			&fractal->img.endian);
	ft_events_init(fractal);
	ft_data_init(fractal);
}
