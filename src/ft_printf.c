/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:35:55 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/31 03:41:00 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		ft_parsing(va_list elem, const char *format)
{
	int	ret;
	int	i;

	ret = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
			ret += read_spec(elem, format, &i);
		else
		{
			if (format[i] == '%' && format[i + 1] == '\0')
				return (ret);
			write(1, &format[i], 1);
			ret++;
		}
		i++;
	}
	return (ret);
}

int		ft_printf(const char *format, ...)
{
	va_list	elem;
	int		compt;

	compt = 0;
	va_start(elem, format);
	if ((compt = ft_parsing(elem, format)) < 0)
		return (0);
	va_end(elem);
	return (compt);
}
