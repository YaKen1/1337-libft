/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykenzaou <ykenzaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 00:53:11 by ykenzaou          #+#    #+#             */
/*   Updated: 2022/12/08 00:53:13 by ykenzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_length(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		length;
	char	*str;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	length = nb_length(n);
	str = (char *) malloc((length + 1) * sizeof(char));
	if (!str)
		return (0);
	if (n < 0)
	{
			n *= -1;
			str[0] = '-';
	}
	str[length] = '\0';
	while (n > 0)
	{
		str[length - 1] = n % 10 + 48;
		n /= 10;
		length--;
	}
	return (str);
}
