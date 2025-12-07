/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <brendos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 14:29:14 by brendos-          #+#    #+#             */
/*   Updated: 2025/08/02 14:35:34 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	uc;

	i = 0;
	uc = c;
	while (s[i] != '\0')
		i++;
	if (uc == '\0')
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if ((unsigned char)s[i] == uc)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
