/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <brendos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:08:04 by brendos-          #+#    #+#             */
/*   Updated: 2025/08/09 15:16:33 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*aloc;

	size = ft_strlen(s) + 1;
	aloc = (char *)malloc(size);
	if (aloc == NULL)
		return (NULL);
	else
		ft_strlcpy(aloc, s, size);
	return (aloc);
}
