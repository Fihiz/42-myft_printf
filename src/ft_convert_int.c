/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 15:56:40 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/31 07:18:42 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	apply_convert_dec(char *str, t_spec *spec)
{
	if (spec->is_plus && spec->positive_dec)
		spec->count += write(1, "+", 1);
	if (spec->is_space && spec->positive_dec && !spec->is_plus)
		spec->count += write(1, " ", 1);
	spec->count += write(1, str, ft_strlen(str));
}

char	*check_for_apply_dec(char *str, t_spec *spec)
{
	if (spec->width < 0)
	{
		spec->is_minus = 1;
		spec->width *= -1;
	}
	spec->len = ft_strlen(str);
	if (spec->width > spec->len)
		str = check_width_for_dec(str, spec);
	else
	{
		if (spec->is_plus && spec->positive_dec)
			spec->count += write(1, "+", 1);
		spec->count += write(1, str, ft_strlen(str));
	}
	return (str);
}

int		ft_convert_dec(va_list elem, t_spec *spec)
{
	int		dec;
	char	*str;

	dec = va_arg(elem, int);
	if (dec >= 0)
		spec->positive_dec = 1;
	if (!(str = ft_itoa(dec)))
		return (0);
	if (spec->is_prec && spec->prec >= 0)
		str = apply_prec_for_dec(str, spec);
	if (spec->width)
		str = check_for_apply_dec(str, spec);
	else
		apply_convert_dec(str, spec);
	ft_strdel(&str);
	return (1);
}

int		ft_convert_unsigned(va_list elem, t_spec *spec)
{
	unsigned	dec;
	char		*str;

	dec = va_arg(elem, unsigned int);
	if (!(str = ft_ultoa(dec)))
		return (0);
	if (spec->is_prec)
		str = apply_prec_for_dec(str, spec);
	if (spec->width)
	{
		if (spec->width < 0)
		{
			spec->is_minus = 1;
			spec->width *= -1;
		}
		spec->len = ft_strlen(str);
		if (spec->width > spec->len)
			check_width_for_dec(str, spec);
		else
			spec->count += write(1, str, ft_strlen(str));
	}
	else
		spec->count += write(1, str, ft_strlen(str));
	ft_strdel(&str);
	return (1);
}
