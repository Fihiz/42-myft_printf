/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/15 14:28:25 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/03 15:17:11 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		*desti;
	size_t				i;

	i = 0;
	str = (unsigned char *)src;
	desti = dest;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			desti[i] = str[i];
			return (&desti[i + 1]);
		}
		else
			desti[i] = str[i];
		i++;
	}
	return (NULL);
}
