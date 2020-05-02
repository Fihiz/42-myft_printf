/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:35:55 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/01 21:13:35 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

// int		lputstr_fd(char *s, int fd)
// {
// 	int l;

// 	l = 0;
// 	if (s)
// 	{
// 		l = ft_strlen(s);
// 		write(fd, s, l);
// 		return (l);
// 	}
// 	return (0);
// }

int		ft_parsing(va_list elem, const char *format)
{
	int	ret;
	int	i;

	ret = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
			ret += read_spec(elem, format, &i); //ret + spe.count patate !!!!
		else
		{
			write(1, &format[i], 1);
			ret++;
		}
		i++;
	}
	//dprintf(1, "i = %d\n", i);
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
