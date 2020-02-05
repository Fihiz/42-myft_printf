/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/11 17:17:54 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/19 15:17:57 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
