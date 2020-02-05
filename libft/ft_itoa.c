/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 15:59:52 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/24 18:49:35 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_number(int n)
{
	int res;

	res = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		res++;
	}
	return (res);
}

static	void	ft_charchar(char *dest, char c)
{
	int	i;

	i = ft_strlen(dest);
	dest[i] = c;
	dest[i + 1] = 0;
}

static	void	ft_putnbr(char *dest, long int n)
{
	if (n < 0)
	{
		ft_charchar(dest, '-');
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr(dest, n / 10);
	ft_charchar(dest, n % 10 + '0');
}

char			*ft_itoa(int n)
{
	char *dest;

	if (n >= 0)
	{
		if (!(dest = malloc(ft_number(n) + 1)))
			return (NULL);
	}
	else
	{
		if (!(dest = malloc(ft_number(n) + 2)))
			return (NULL);
	}
	*dest = 0;
	n = (long int)n;
	ft_putnbr(dest, n);
	return (dest);
}
