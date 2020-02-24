/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:00:29 by sad-aude          #+#    #+#             */
/*   Updated: 2020/02/24 15:00:33 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*str;
	char		*desti;

	if (!dest && !src)
		return (0);
	str = (const char*)src;
	desti = dest;
	i = 0;
	while (i < n)
	{
		desti[i] = str[i];
		i++;
	}
	return (desti);
}
