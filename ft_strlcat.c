/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoporan <dsoporan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 17:34:15 by dsoporan          #+#    #+#             */
/*   Updated: 2017/01/12 17:34:19 by dsoporan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t s1;
	size_t s2;

	s1 = ft_strlen(src);
	i = ft_strlen(dst);
	s2 = i;
	j = 0;
	if (size < s2)
		return (s1 + size);
	if (size == s2)
		return (s1 + s2);
	else
	{
		while (src[j] && j < size - s2 - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (s2 + s1);
	}
}
