/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:59:53 by sad-aude          #+#    #+#             */
/*   Updated: 2020/02/24 14:59:55 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		*desti;
	size_t				i;

	i = 0;
	str = (unsigned char *)src;
	desti = dest;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			desti[i] = str[i];
			return (&desti[i + 1]);
		}
		else
			desti[i] = str[i];
		i++;
	}
	return (NULL);
}
