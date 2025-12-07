/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <brendos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:44:27 by brendos-          #+#    #+#             */
/*   Updated: 2025/08/02 16:00:01 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	uc;
	unsigned char	*us;

	i = 0;
	uc = (unsigned char)c;
	us = (unsigned char *)s;
	while (i < n)
	{
		if (us[i] == uc)
		{
			return (&us[i]);
		}
		i++;
	}
	return (NULL);
}
