/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykenzaou <ykenzaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 23:31:07 by ykenzaou          #+#    #+#             */
/*   Updated: 2022/11/29 23:31:13 by ykenzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*a;
	int		b;
	int		j;

	if (!haystack && !len)
		return (NULL);
	if (!ft_strlen(needle) || haystack == needle)
		return ((char *)haystack);
	i = 0;
	a = (char *)haystack;
	while (a[i])
	{
		b = i;
		j = 0;
		while (a[i] == needle[j] && i < len)
		{
			j++;
			if (needle[j] == '\0')
				return (a + b);
			i++;
		}
		i = (b + 1);
	}
	return (NULL);
}
