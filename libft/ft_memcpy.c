/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <brendos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 18:10:28 by brendos-          #+#    #+#             */
/*   Updated: 2025/07/27 15:48:31 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			k;
	unsigned char	*ptr_s;
	unsigned char	*ptr_d;

	if (!dst && !src)
		return (dst);
	ptr_d = (unsigned char *)dst;
	ptr_s = (unsigned char *)src;
	k = 0;
	while (k < n)
	{
		ptr_d[k] = ptr_s[k];
		k++;
	}
	return (dst);
}
