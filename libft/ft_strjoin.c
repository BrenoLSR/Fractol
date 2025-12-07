/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <brendos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 17:33:33 by brendos-          #+#    #+#             */
/*   Updated: 2025/08/09 17:55:59 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*aloc;

	if (!s1 && !s2)
		return (NULL);
	aloc = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!aloc)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		aloc[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		aloc[i++] = s2[j++];
	}
	aloc[i] = '\0';
	return (aloc);
}
