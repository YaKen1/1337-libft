/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykenzaou <ykenzaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 03:45:54 by ykenzaou          #+#    #+#             */
/*   Updated: 2022/11/27 21:58:35 by ykenzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		size;

	str = (char *)s;
	size = ft_strlen(str);
	while (size >= 0)
	{
		if (str[size] == (char) c)
			return (str + size);
		size--;
	}
	return (NULL);
}
