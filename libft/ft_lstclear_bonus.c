/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstclear_bonus.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/30 18:22:09 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/02 23:13:46 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
