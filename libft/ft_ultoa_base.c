/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 15:56:40 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/12 05:21:31 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long long		ft_pow_long(int nb, int pow)
{
	if (pow == 0)
		return (1);
	else
		return (nb * ft_pow_long(nb, pow - 1));
}

char					*ft_result_long(char *nbr, unsigned long long value,
							int base, int i)
{
	int neg;
	int	convert;

	neg = 0;
	convert = 0;
	while (i-- > 0)
	{
		if (value % base > 9)
			convert = 'a' - 10;
		else
			convert = '0';
		nbr[i + neg] = (value % base) + convert;
		value = value / base;
	}
	if (neg)
		nbr[0] = '-';
	return (nbr);
}

char					*ft_ultoa_base(unsigned long long value, int base)
{
	int		i;
	char	*nbr;
	int		neg;

	i = 1;
	neg = 0;
	if (value < 0)
	{
		if (base == 10)
			neg = 1;
		value *= -1;
	}
	while (ft_pow_long(base, i) - 1 < value)
		i++;
	if (!(nbr = (char *)malloc(sizeof(nbr) * i + neg)))
		return (NULL);
	nbr[i + neg] = '\0';
	return (ft_result_long(nbr, value, base, i));
}
