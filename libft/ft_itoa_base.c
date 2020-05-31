/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 15:56:40 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/29 01:24:02 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_pow(int nb, int pow)
{
	if (pow == 0)
		return (1);
	else
		return (nb * ft_pow(nb, pow - 1));
}

char			*ft_result(char *nbr, unsigned int value, int base, int i)
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

char			*ft_itoa_base(unsigned int value, int base)
{
	int		i;
	char	*nbr;

	i = 1;
	while (ft_pow(base, i) - 1 < value)
		i++;
	if (!(nbr = (char *)malloc(sizeof(nbr) * i)))
		return (NULL);
	nbr[i] = '\0';
	return (ft_result(nbr, value, base, i));
}
