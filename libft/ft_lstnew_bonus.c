/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/26 20:39:32 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/30 18:09:31 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*data;

	if (!(data = malloc(sizeof(t_list))))
		return (NULL);
	if (content)
		data->content = content;
	else
		data->content = NULL;
	data->next = NULL;
	return (data);
}
