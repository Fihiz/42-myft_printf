/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:02:30 by sad-aude          #+#    #+#             */
/*   Updated: 2020/02/24 15:02:32 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ind;
	size_t	len;

	i = 0;
	ind = 0;
	len = (ft_strlen(dst) + ft_strlen(src));
	while (dst[i])
		i++;
	if (size == 0)
		return (ft_strlen(src));
	if (ft_strlen(dst) >= size)
		return (ft_strlen(src) + size);
	while (src[ind] && (i + ind + 1) < size)
	{
		dst[i + ind] = src[ind];
		ind++;
	}
	dst[i + ind] = '\0';
	return (len);
}
