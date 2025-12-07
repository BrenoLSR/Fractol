/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <brendos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 13:48:35 by brendos-          #+#    #+#             */
/*   Updated: 2025/07/27 15:06:15 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr_s;
	unsigned char	*ptr_d;

	if (!dst && !src)
		return (dst);
	ptr_d = (unsigned char *)dst;
	ptr_s = (unsigned char *)src;
	if (ptr_d < ptr_s)
	{
		return (ft_memcpy(dst, src, len));
	}
	while (len--)
		ptr_d[len] = ptr_s[len];
	return (dst);
}
