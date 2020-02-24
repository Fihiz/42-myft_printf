/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:00:12 by sad-aude          #+#    #+#             */
/*   Updated: 2020/02/24 15:00:14 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t i)
{
	size_t ind;

	ind = 0;
	while (i--)
	{
		if (((unsigned char*)s1)[ind] != ((unsigned char*)s2)[ind])
			return (((unsigned char*)s1)[ind] - (((unsigned char*)s2)[ind]));
		ind++;
	}
	return (0);
}
