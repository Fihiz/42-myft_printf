/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/03/03 19:35:55 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/03/08 21:34:28 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include "../include/ft_printf.h"

int		ft_parsing(va_list elem, const char *format)
{
	int	ret;
	int	i;

	i = 0;
	ret = 0;
	while (format[i])
	{
		if (format[i] == '%')
			ret += read_spec(elem, format, &i);
		else
		{
			write(1, &format[i], 1);
			ret++;
		}
		i++;
	}
	//printf("Valeur de ret : [%d]\n", ret);
	return (ret);
}

int		ft_printf(const char *format, ...)
{
	va_list	elem;
	int		counter;

	counter = 0;
	va_start(elem, format);
	if ((counter = ft_parsing(elem, format)) < 0)
		return (0);
	va_end(elem);
	return (counter);
}
