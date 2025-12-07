/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractal.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <brendos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 15:01:06 by brendos-          #+#    #+#             */
/*   Updated: 2025/12/07 17:42:26 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTAL_H
# define FRACTAL_H

# include "libft/libft.h"
# include "minilibx-linux/mlx.h"
# include <X11/X.h>
# include <X11/keysym.h>
# include <errno.h> // errno
# include <math.h>
# include <stdio.h>  // perror
# include <stdlib.h> // malloc, free
# include <unistd.h> // read, write, close

# define WIDTH 800
# define HEIGHT 800

// Color ----------------------------------------------------------------------
# define BLACK 0x000000
# define WHITE 0xFFFFFF
# define PINK_PASTEL 0xE8A6C7
# define PURPLE 0x7937A6

# define NAVY_BLUE 0x0A1128
# define BLUE_DEEP 0x001F54
# define BLUE_OCEAN 0x034078
# define AQUA_DEEP 0x1282A2
# define BLUE_PASTEL 0x94C4E3

# define BROWN 0x2F1E1E
# define RED_DARK 0x73030D
# define ORANGE 0xFF6E12
# define AQUA_LIGHT 0x06ADB3

typedef struct s_complex
{
	double x; // real
	double y; // imaginary
}			t_complex;

typedef struct s_img
{
	void *img_ptr;    // pointer to image sturct
	char *pixels_ptr; // points to the actual pixels
	int bits_pixel;   // bits per pixel (ex: 32 or 64)
	int		endian;
	int		line_len;
}			t_img;

typedef struct s_fractal
{
	char	*name;
	void	*mlx_start;
	void	*mlx_window;
	t_img	img;
	double	escp_value;
	int		iter_def;
	double	shift_x;
	double	shift_y;
	double	zoom;
	double	julia_x;
	double	julia_y;
}			t_fractal;

void		ft_error_msg(void);
void	ft_malloc_error(void);
void		fractal_init(t_fractal *fractal);

#endif