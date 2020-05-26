/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 15:56:40 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/26 03:31:51 by sad-aude         ###   ########lyon.fr   */
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

void	ft_convert_dec(va_list elem, t_spec *spec)
{
	int		dec;
	char	*str;

	dec = va_arg(elem, int);
	if (dec >= 0)
		spec->positive_dec = 1;
	str = ft_itoa(dec);
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
		apply_convert_dec(str, spec);
	free(str);
}

void	ft_convert_unsigned(va_list elem, t_spec *spec)
{
	unsigned	dec;
	char		*str;

	dec = va_arg(elem, unsigned int);
	str = ft_ultoa(dec);
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
	free(str);
}