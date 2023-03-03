/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykenzaou <ykenzaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 22:57:06 by ykenzaou          #+#    #+#             */
/*   Updated: 2022/12/02 22:57:24 by ykenzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	first(char *s1, char *set)
{
	int	i;
	int	a;

	a = 0;
	i = 0;
	while (set[i])
	{
		while (set[i] == s1[a])
		{
				a++;
				i = 0;
		}
		i++;
	}
	return (a);
}

static int	last(char *s1, char *set)
{
	int	i;
	int	b;

	b = ft_strlen(s1);
	i = 0;
	while (set[i])
	{
		while (set[i] == s1[b - 1])
		{
				b--;
				i = 0;
			if (b == 0)
				return (0);
		}
		i++;
	}
	return (b);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		a;
	int		b;

	if (!s1 || !set)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	a = first ((char *)s1, (char *)set);
	b = last ((char *)s1, (char *)set);
	return (ft_substr(s1, a, (b - a)));
}
