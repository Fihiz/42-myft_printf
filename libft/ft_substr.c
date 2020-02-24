/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:03:59 by sad-aude          #+#    #+#             */
/*   Updated: 2020/02/24 15:04:01 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (s == 0 || !(sub = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	while (s[start] && len--)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
