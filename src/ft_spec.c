/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:50:00 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/22 17:35:56 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static	int		get_prec(va_list elem, t_spec *spec)
{
	int	index;

	index = 0;
	while (spec->conv[index] && spec->conv[index] != '.')
		index++;
	if (spec->conv[index] == '.' && spec->conv[index + 1] &&
			ft_isdigit(spec->conv[index + 1]))
		return (ft_atoi(spec->conv + index + 1));
	if (spec->conv[index] == '.' && spec->conv[index + 1] &&
			spec->conv[index + 1] == '*')
		return (va_arg(elem, int));
	return (0);
}

static	int		get_width(va_list elem, t_spec *spec)
{
	int index;

	index = 0;
	if (!spec->is_star || (spec->is_prec && spec->is_width) /*|| (spec->is_star && spec->is_zero)*/)
	{
		while (spec->conv[index] && !ft_isdigit(spec->conv[index]))
			index++;
		if (ft_isdigit(spec->conv[index]) && (index - 1 < 0 ||
					spec->conv[index - 1] != '.'))
		{
			if (spec->conv[index + 1] != '-' && !spec->is_zero /*&& spec->conv[index + 1] != ' '*/)
				return (ft_atoi(spec->conv + index));
			else if (spec->conv[index] == '0')
			{
				while (spec->conv[index] == '0' || spec->conv[index] == '-')
					index++;
				if (spec->conv[index + 1] != '-')
					return (ft_atoi(spec->conv + index));
			}
			else
				return (ft_atoi(spec->conv + index + 1));
		}
	}
	else
	{
		while (spec->conv[index] && spec->conv[index] != '*')
			index++;
		if (spec->conv[index] == '*' && spec->conv[index - 1] != '.')
			return (va_arg(elem, int));
	}
	return (0);
}

static	void	parsing_flags(t_spec *spec)
{
	int	index;

	index = 0;
	if (ft_strchr(spec->conv, '.'))
		spec->is_prec = 1;
	if (ft_strchr(spec->conv, '*'))
		spec->is_star = 1;
	if (ft_strchr(spec->conv, '-'))
		spec->is_minus = 1;
	if (ft_strchr(spec->conv, '+'))
		spec->is_plus = 1;
	if (ft_strchr(spec->conv, ' '))
		spec->is_space = 1;
	if (ft_strchr(spec->conv, '#'))
		spec->is_sharp = 1;
	while (spec->conv[index] && !ft_isdigit(spec->conv[index]))
		index++;
	if (spec->conv[index] && spec->conv[index] == '0'
		&& spec->conv[index - 1] != '.' && spec->conv[index + 1] != '#')
		{
			spec->is_zero = 1;
			index++;
		}
	if (spec->conv[index] && ft_isdigit(spec->conv[index]) && spec->conv[index] != '0'
		&& spec->conv[index - 1] != '.' && spec->conv[index + 1] != '#')
		spec->is_width = 1;
}

static	int		convert_spec(va_list elem, t_spec *spec)
{
	spec->type = spec->conv[ft_strlen(spec->conv) - 1];
	parsing_flags(spec);
	spec->width = get_width(elem, spec);
	spec->prec = get_prec(elem, spec);
	return (1);
}

int				read_spec(va_list elem, const char *format, int *i)
{
	t_spec	spec;
	int		start;

	ft_bzero(&spec, sizeof(spec));
	start = ++(*i);
	while (!ft_strchr(TYPES, format[*i]))
		(*i)++;
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
		if (format[*i] == 'u')
			ft_convert_unsigned(elem, &spec);
		if (format[*i] == '%')
			ft_convert_percent(&spec);
		if (format[*i] == 'x')
			ft_convert_hexa(elem, &spec);
		if (format[*i] == 'X')
		{
			spec.is_majhexa = 1;
			ft_convert_hexa(elem, &spec);
		}
		if (format[*i] == 'p')
			ft_convert_pointer(elem, &spec);
	}
	return (spec.count);
}
