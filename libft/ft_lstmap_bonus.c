/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:59:18 by sad-aude          #+#    #+#             */
/*   Updated: 2020/02/24 14:59:22 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new;
	t_list	*final;

	if (!lst || !f)
		return (NULL);
	if (!(final = ft_lstnew(f(lst->content))))
		return (NULL);
	temp = lst->next;
	while (temp)
	{
		if (!(new = ft_lstnew(f(temp->content))))
		{
			ft_lstclear(&final, del);
			return (NULL);
		}
		ft_lstadd_back(&final, new);
		temp = temp->next;
	}
	return (final);
}
