/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 15:57:00 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/04 21:58:57 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

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