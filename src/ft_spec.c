/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:50:00 by sad-aude          #+#    #+#             */
/*   Updated: 2020/03/23 17:35:16 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static	int		get_prec(va_list elem, t_spec *spec)
{
	int index;

	index = 0;
	if (!spec->is_star)
	{
		while (spec->conv[index] && spec->conv[index] != '.')
			index++;
		if (spec->conv[index] == '.' && spec->conv[index + 1] &&
			ft_isdigit(spec->conv[index + 1]))
		return (ft_atoi(spec->conv + index + 1));
	}
	else
		return (va_arg(elem, int));
	return (0);
}

static	int		get_width(va_list elem, t_spec *spec)
{
	int index;

	index = 0;
	if (!spec->is_star)
	{
		while (spec->conv[index] && !ft_isdigit(spec->conv[index]))
			index++;
		if (ft_isdigit(spec->conv[index]) && (index - 1 < 0 ||
			spec->conv[index - 1] != '.'))
			return (ft_atoi(spec->conv + index));
	}
	else
		return (va_arg(elem, int));	
	return (0);
}

static	void	parsing_flags(t_spec *spec)
{
	int index;

	index = 0;
	if (ft_strchr(spec->conv, '.'))
		spec->is_prec = 1;
	if (ft_strchr(spec->conv, '*'))
		spec->is_star = 1;
	if (ft_strchr(spec->conv, '-'))
		spec->is_minus = 1;
	while (spec->conv[index] && !ft_isdigit(spec->conv[index]))
		index++;
	if (spec->conv[index] && spec->conv[index] == '0' && spec->conv[index - 1] != '.')
		spec->is_zero = 1;
}

static	int		convert_spec(va_list elem, t_spec *spec)
{
	spec->type = spec->conv[ft_strlen(spec->conv) - 1];
	parsing_flags(spec);
	spec->width = get_width(elem, spec);
	spec->prec = get_prec(elem, spec);
	//printf("WIDTH %d -- PREC %d\n", spec->width, spec->prec);
	return (1);
}

int		read_spec(va_list elem, const char *format, int *i)
{
	t_spec	spec;
	int		start;

	ft_bzero(&spec, sizeof(spec));
	start = ++(*i);
	while (!ft_strchr(TYPES, format[*i]))
		(*i)++;
	//printf("Valeur de i : [%p]\n", i);
	if (!(spec.conv = ft_substr(format, start, *i - start)) ||
			!convert_spec(elem, &spec))
		return (0);
	if (ft_strchr(TYPES, format[*i]))
	{
		if (format[*i] == 'c')
			ft_convert_char(elem, &spec);
		if (format[*i] == 's')
			ft_convert_str(elem, &spec);
		if (format[*i] == 'i' || format[*i] == 'd')
			ft_convert_dec(elem, &spec);
		/*else
		 	printf("FAILURE HAPPENS\n");*/
	}
	return (spec.count);
}
