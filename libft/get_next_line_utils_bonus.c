/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line_utils_bonus.c                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/29 22:16:48 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/04 22:04:14 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
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

int		ft_strichr(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;

	i = -1;
	if (!(dest = malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char *s1, char *s2, int id)
{
	size_t	ind;
	size_t	len;
	size_t	i;
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
	if (id == 1)
		free(s1);
	else if (id == 2)
		free(s2);
	else if (id == 3)
	{
		free(s1);
		free(s2);
	}
	return (concat);
}

void	*ft_strnew(int size)
{
	char	*tab;
	int		index;

	if (!(tab = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	index = 0;
	while (index <= size)
		tab[index++] = '\0';
	return (tab);
}
