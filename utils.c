/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <brendos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 14:42:51 by brendos-          #+#    #+#             */
/*   Updated: 2025/12/07 17:21:33 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractal.h"

void	ft_malloc_error(void)
{
	perror("Problems with malloc");
	exit(EXIT_FAILURE);
}

void	ft_error_msg(void)
{
	ft_putstr_fd("┌────────────────────────────────────────┐\n", STDOUT_FILENO);
	ft_putstr_fd("| ERROR FRACTAL 42                    |\n", STDOUT_FILENO);
	ft_putstr_fd("|                                        |\n", STDOUT_FILENO);
	ft_putstr_fd("| HELP --------------------------------- |\n", STDOUT_FILENO);
	ft_putstr_fd("| To execute fractals, use the commands  |\n", STDOUT_FILENO);
	ft_putstr_fd("| -------------------------------------- |\n", STDOUT_FILENO);
	ft_putstr_fd("| ./bin/fractol mandelbrot               |\n", STDOUT_FILENO);
	ft_putstr_fd("| ./bin/fractol julia <real> <imag>      |\n", STDOUT_FILENO);
	ft_putstr_fd("|                                        |\n", STDOUT_FILENO);
	ft_putstr_fd("| EXEMPLE------------------------(julia) |\n", STDOUT_FILENO);
	ft_putstr_fd("| ./bin/fractol julia 0 0.8              |\n", STDOUT_FILENO);
	ft_putstr_fd("| ./bin/fractol julia -0.835 -0.2321     |\n", STDOUT_FILENO);
	ft_putstr_fd("| ./bin/fractol julia  0.285  0          |\n", STDOUT_FILENO);
	ft_putstr_fd("└────────────────────────────────────────┘\n", STDOUT_FILENO);
}

