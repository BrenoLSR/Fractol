/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 15:00:30 by brendos-          #+#    #+#             */
/*   Updated: 2025/07/26 15:03:17 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*i;
	unsigned char	j;

	i = (unsigned char *)s;
	j = c;
	while (n--)
	{
		*i = j;
		i++;
	}
	return (s);
}
