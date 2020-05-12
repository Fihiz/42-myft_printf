/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 15:56:40 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/12 05:17:41 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		ft_pow(int nb, int pow)
{
	if (pow == 0)
		return (1);
	else
		return (nb * ft_pow(nb, pow - 1));
}

//char		*ft_itoa_base(unsigned int value, int base)
//{
//	int		i;
//	char	*nbr;
//	int		neg;

//	i = 1;
//	neg = 0;
//	if (value < 0)
//	{
//		dprintf(1, "%d", value);
//		if (base == 10)
//			neg = 1;
//		value *= -1;
//		dprintf(1, "%d", value);
//	}
//	while (ft_pow(base, i) - 1 < value)
//		i++;
//	if (!(nbr = (char *)malloc(sizeof(nbr) * i + neg)))
//		return (NULL);
//	nbr[i + neg] = '\0';
//	while (i-- > 0)
//	{
//		nbr[i + neg] = (value % base) + (value % base > 9 ? 'a' - 10 : '0');
//		value = value / base;
//	}
//	if (neg)
//		nbr[0] = '-';
//	return (nbr);
//}

char		*ft_result(char *nbr, unsigned int value, int base, int i)
{
	int neg;

	neg = 0;
	while (i-- > 0)
	{
		int convert;

		convert = 0;
		if ( value % base > 9)
		{
			convert = 'a' - 10;
		}
		else
			convert = '0';
		nbr[i + neg] = (value % base) + convert;
		value = value / base;
	}
	if (neg)
		nbr[0] = '-';
	return (nbr);
}

char		*ft_itoa_base(unsigned int value, int base)
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
	while (ft_pow(base, i) - 1 < value)
		i++;
	if (!(nbr = (char *)malloc(sizeof(nbr) * i + neg)))
		return (NULL);
	nbr[i + neg] = '\0';

	return (ft_result(nbr, value, base, i));
}

//int		main()
//{
//	int value = -10;
//	int base = 16;
//	dprintf(1, "le mien : %s\n", ft_itoa_base(value, base));
//	dprintf(1, "le vrai : %x\n", value);
//}