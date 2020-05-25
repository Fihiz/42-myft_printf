/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:57:59 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/25 18:05:52 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_number(unsigned long int n)
{
	int res;

	res = 0;
	if (n == 0)
		return (1);
	//dprintf(1, "n = %u\n", n);
	while (n > 0)
	{
		n /= 10;
		res++;
		//dprintf(1, "res = %d\n", res);
	}
	return (res);
}

static	void	ft_charchar(char **dest, char c, int count)
{
	//int	i;

	//i = ft_strlen(dest);
	(*dest)[count - 1] = c;
}

static	char	*ft_putnbr(char *dest, unsigned long int n, int count)
{
	//if (n < 0)
	//{
	//	ft_charchar(dest, '-');
	//	n *= -1;
	//}
	//dprintf(1, "n = %ld\n", n);
	//dprintf(1, "count = %d\n", count);
	//dprintf(1, "result = %s", dest);
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
	//dest = 0;
	//n = (long int)n;
	dest[ft_number(n)] = '\0';
	dest = ft_putnbr(dest, n, ft_number(n));
	//dprintf(1, "result = %s", dest);
	return (dest);
}
