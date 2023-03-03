/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykenzaou <ykenzaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:39:05 by ykenzaou          #+#    #+#             */
/*   Updated: 2022/11/25 23:40:56 by ykenzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s1;
	char	*s2;
	size_t	i;

	i = 0;
	s1 = (char *)dst;
	s2 = (char *)src;
	if (dst > src)
	{
		while (len)
		{
			s1[len - 1] = s2[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (s1);
}
