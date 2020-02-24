/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:56:16 by sad-aude          #+#    #+#             */
/*   Updated: 2020/02/24 14:56:19 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;
	size_t	stock;

	stock = count * size;
	if (!(tab = malloc(stock)))
		return (NULL);
	ft_bzero(tab, stock);
	return (tab);
}
