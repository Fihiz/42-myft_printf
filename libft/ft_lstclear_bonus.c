/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:58:33 by sad-aude          #+#    #+#             */
/*   Updated: 2020/02/24 14:58:36 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *copy;
	t_list *next;

	if (!*lst || !del)
		return ;
	copy = *lst;
	while (copy)
	{
		next = copy->next;
		del(copy->content);
		free(copy);
		copy = copy->next;
	}
	*lst = NULL;
}
