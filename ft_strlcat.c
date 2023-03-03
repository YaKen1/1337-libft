/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykenzaou <ykenzaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 03:24:35 by ykenzaou          #+#    #+#             */
/*   Updated: 2022/11/27 21:57:04 by ykenzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size;

	if (!dstsize)
		return (ft_strlen(src));
	size = ft_strlen(dst);
	i = 0;
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	while (src[i] && i < dstsize - size - 1)
	{
		if (size < dstsize)
		{
			dst[size + i] = src[i];
		}
		i++;
	}
	dst[size + i] = '\0';
	return (size + ft_strlen(src));
}
