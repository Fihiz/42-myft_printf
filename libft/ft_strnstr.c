/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:03:11 by sad-aude          #+#    #+#             */
/*   Updated: 2020/02/24 15:03:32 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t ind;

	i = 0;
	if (!*needle)
		return ((char*)haystack);
	if (len == 0)
		return (NULL);
	while (haystack[i] && i < len)
	{
		ind = 0;
		while (needle[ind] && haystack[i + ind] == needle[ind] && i + ind < len)
			ind++;
		if (needle[ind] == '\0')
			return ((char*)haystack + (i));
		i++;
	}
	return (NULL);
}
