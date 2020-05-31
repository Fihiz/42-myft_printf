/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_characters.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:36:09 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/31 07:27:53 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	apply_width_for_str(char *str, t_spec *spec)
{
	if (spec->width < 0)
	{
		spec->is_minus = 1;
		spec->width *= -1;
	}
	spec->len = ft_strlen(str);
	if (spec->width > spec->len)
	{
		if (spec->is_minus)
			spec->count += write(1, str, ft_strlen(str));
		if (spec->is_zero && !spec->is_minus)
			while (spec->diff++ < spec->width - spec->len)
				spec->count += write(1, "0", 1);
		else
			while (spec->diff++ < spec->width - spec->len)
				spec->count += write(1, " ", 1);
		if (!spec->is_minus)
			spec->count += write(1, str, ft_strlen(str));
	}
	else
		spec->count += write(1, str, ft_strlen(str));
}

int		ft_convert_str(va_list elem, t_spec *spec)
{
	char	*str;

	if (!(str = va_arg(elem, char*)))
		str = "(null)";
	if (spec->is_prec && !spec->prec)
		str = "";
	if (spec->is_prec && spec->prec > 0)
	{
		if (!(str = ft_substr(str, 0, spec->prec, 0)))
			return (0);
		spec->check = 1;
	}
	if (spec->width)
		apply_width_for_str(str, spec);
	else
		spec->count += write(1, str, ft_strlen(str));
	if (spec->check == 1)
		ft_strdel(&str);
	return (1);
}

void	apply_width_for_char(char c, t_spec *spec)
{
	if (spec->is_zero)
	{
		while (spec->diff++ < spec->width - 1)
			spec->count += write(1, "0", 1);
	}
	else
	{
		while (++spec->diff < spec->width)
			spec->count += write(1, " ", 1);
	}
	spec->count += write(1, &c, 1);
}

void	ft_convert_char(va_list elem, t_spec *spec)
{
	char c;

	c = va_arg(elem, int);
	if (spec->width)
	{
		if (spec->width < 0)
		{
			spec->is_minus = 1;
			spec->width *= -1;
		}
		if (spec->is_minus)
		{
			spec->count += write(1, &c, 1);
			while (++spec->diff < spec->width)
				spec->count += write(1, " ", 1);
		}
		if (!spec->is_minus)
			apply_width_for_char(c, spec);
	}
	else
		spec->count += write(1, &c, 1);
}
