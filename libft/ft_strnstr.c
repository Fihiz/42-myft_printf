/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 14:26:30 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/30 18:03:10 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
