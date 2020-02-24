/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:59:33 by sad-aude          #+#    #+#             */
/*   Updated: 2020/02/24 14:59:35 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
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
