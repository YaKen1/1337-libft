/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykenzaou <ykenzaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 22:50:07 by ykenzaou          #+#    #+#             */
/*   Updated: 2022/12/02 22:50:10 by ykenzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat;
	size_t	size;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	cat = (char *) malloc ((size + 1) * sizeof(char));
	if (!cat)
		return (NULL);
	while (*s1 != '\0')
	{
		*cat = *s1;
		s1++;
		cat++;
	}
	while (*s2 != '\0')
	{
		*cat = *s2;
		s2++;
		cat++;
	}
	*cat = '\0';
	cat -= size;
	return (cat);
}
