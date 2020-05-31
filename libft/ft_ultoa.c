/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:57:59 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/27 21:53:38 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_number(unsigned long int n)
{
	int res;

	res = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		res++;
	}
	return (res);
}

static	void	ft_charchar(char **dest, char c, int count)
{
	(*dest)[count - 1] = c;
}

static	char	*ft_putnbr(char *dest, unsigned long int n, int count)
{
	if (n >= 10)
	{
		ft_charchar(&dest, n % 10 + '0', count);
		ft_putnbr(dest, n / 10, count - 1);
	}
	else
	{
		ft_charchar(&dest, n % 10 + '0', count);
	}
	return (dest);
}

char			*ft_ultoa(unsigned long int n)
{
	char *dest;

	if (!(dest = malloc(ft_number(n) + 1)))
		return (NULL);
	dest[ft_number(n)] = '\0';
	dest = ft_putnbr(dest, n, ft_number(n));
	return (dest);
}
