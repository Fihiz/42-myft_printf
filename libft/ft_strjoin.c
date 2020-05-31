/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:02:22 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/29 01:29:04 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free(char *s1, char *s2, int id)
{
	if (id == 1)
		free(s1);
	else if (id == 2)
		free(s2);
	else if (id == 3)
	{
		free(s1);
		free(s2);
	}
	s1 = NULL;
	s2 = NULL;
}

char	*ft_strjoin(char *s1, char *s2, int id)
{
	size_t	i;
	size_t	ind;
	size_t	len;
	char	*concat;

	i = -1;
	ind = -1;
	len = ft_strlen(s1);
	if (s1 == 0 || !(concat = malloc(sizeof(char) * (len + ft_strlen(s2) + 1))))
		return (NULL);
	while (++i < len)
		concat[i] = s1[i];
	while (s2[++ind])
		concat[i + ind] = s2[ind];
	concat[i + ind] = '\0';
	ft_free(s1, s2, id);
	return (concat);
}
