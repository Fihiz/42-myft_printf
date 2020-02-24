/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:00:38 by sad-aude          #+#    #+#             */
/*   Updated: 2020/02/24 15:00:40 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*str;
	unsigned char		*desti;

	if (!dest && !src)
		return (0);
	str = src;
	desti = dest;
	if (str > desti)
		return (ft_memcpy(desti, str, n));
	else
	{
		while (n--)
			*(desti + n) = *(str + n);
	}
	return (desti);
}
