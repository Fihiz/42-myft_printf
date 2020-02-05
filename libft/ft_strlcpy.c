/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/17 15:10:55 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/19 15:48:49 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = -1;
	if (src == 0)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	while (src[++i] && (i + 1) < size)
		dst[i] = src[i];
	dst[i] = '\0';
	return (ft_strlen(src));
}
