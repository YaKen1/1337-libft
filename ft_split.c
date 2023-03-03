/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykenzaou <ykenzaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:03:02 by ykenzaou          #+#    #+#             */
/*   Updated: 2022/12/07 22:03:04 by ykenzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *str, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		while (str[i] == c)
		i++;
		if (str[i])
		{
			while (str[i] && str[i] != c)
				i++;
			nb++;
		}
	}
	return (nb);
}

static int	word_length(char *str, char c, int i)
{
	int	a;

	a = 0;
	while (str[i] && str[i] != c)
	{
		i++;
		a++;
	}
	return (a);
}

static void	*ft_free(char **str, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static char	**ft_allocate(char **str, char *s, char c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (s[i])
	{
		k = 0;
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			str[j] = (char *)malloc \
			((word_length((char *)s, c, i) + 1) * sizeof(char));
			if (!str[j])
				return (ft_free(str, j));
			while (s[i] && s[i] != c)
				str[j][k++] = s[i++];
		str[j][k] = '\0';
		j++;
		}
	}
	str [j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		nb;

	if (!s)
		return (NULL);
	nb = count_words((char *)s, c);
	str = (char **)malloc ((nb + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str = ft_allocate(str, (char *)s, c);
	return (str);
}
