/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 15:59:26 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/24 17:33:51 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_countwords(char const *s, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[0] != sep && i == 0)
			count++;
		if (s[i] != sep && s[i - 1] == sep)
			count++;
		i++;
	}
	return (count);
}

static	char	*ft_malloc(char const *s, char sep)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != sep)
		i++;
	if (!(word = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (s[i] && s[i] != sep)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static	char	**ft_free(char **dest)
{
	int	i;

	i = 0;
	while (dest[i++])
		free(dest[i]);
	free(dest);
	return (0);
}

char			**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;
	int		ind;

	i = 0;
	ind = 0;
	if (!s)
		return (NULL);
	if (!(dest = malloc(sizeof(char *) * (ft_countwords(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			if (!(dest[ind] = ft_malloc(s + i, c)))
				return (ft_free(dest));
			++ind;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	dest[ind] = 0;
	return (dest);
}
