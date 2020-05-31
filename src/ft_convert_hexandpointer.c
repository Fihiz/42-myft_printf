/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hexandpointer.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:35:55 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/31 19:46:15 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*apply_convert_pointer(char *str, int *point, t_spec *spec)
{
	if (spec->width < 0)
	{
		spec->is_minus = 1;
		spec->width *= -1;
	}
	spec->len = ft_strlen(str);
	if (spec->width > spec->len)
		check_width_for_pointer(str, spec);
	else
	{
		if (spec->is_space)
			spec->count += write(1, " ", 1);
		if (((spec->is_minus && !spec->is_prec) ||
		(spec->is_star && !spec->is_prec)) && point != 0)
			spec->count += write(1, "0x", 2);
		spec->count += write(1, str, ft_strlen(str));
	}
	return (str);
}

int		ft_convert_hexa(va_list elem, t_spec *spec)
{
	int		hexa;
	char	*str;
	char	*sharp;

	hexa = va_arg(elem, int);
	str = ft_itoa_base(hexa, 16);
	sharp = ft_stringnew(2);
	sharp[0] = '0';
	sharp[1] = 'x';
	if (spec->is_majhexa)
		str = ft_strcapitalize(str);
	if (spec->is_prec && spec->prec >= 0)
		str = apply_prec_for_hexa(str, hexa, spec);
	if (spec->width)
		str = apply_convert_hexa(str, sharp, hexa, spec);
	else
		str = apply_second_hexa(str, sharp, hexa, spec);
	ft_strdel(&sharp);
	ft_strdel(&str);
	return (1);
}

char	*apply_flags_pointer(char *str, char *lol, int *point, t_spec *spec)
{
	str = check_for_pointer(str, lol, point, spec);
	if (spec->is_prec && spec->prec >= 0)
	{
		str = apply_prec_for_pointer(str, point, spec);
	}
	if (spec->width)
		str = apply_convert_pointer(str, point, spec);
	else
	{
		if ((spec->is_star && !spec->width && !spec->is_prec) 
			|| (spec->is_zero && !spec->width))
		{
			ft_strdel(&str);
			if (!(str = ft_strjoin(lol,
			ft_ultoa_base((unsigned long long)point, 16), 2)))
				return (NULL);
		}
		spec->count += write(1, str, ft_strlen(str));
	}
	return (str);
}

char	*check_for_pointer(char *str, char *lol, int *point, t_spec *spec)
{
	if (point == 0 /*&& !spec->width*/)
	{
		spec->check = 1;
		if (spec->is_prec && spec->prec == 0)
			return (str);
		else
		{
			ft_strdel(&str);
			if (!(str = ft_strjoin(lol,
				ft_ultoa_base((unsigned long long)point, 16), 2)))
				return (NULL);
			return (str);
		}
	}
	if ((!spec->is_minus && !spec->is_prec && !spec->is_star && !spec->is_zero)
			|| (spec->is_minus && !spec->width && !spec->is_prec && point != 0))
	{
		ft_strdel(&str);
		if (!(str = ft_strjoin(lol,
		ft_ultoa_base((unsigned long long)point, 16), 2)))
			return (NULL);
	}
	return (str);
}

int		ft_convert_pointer(va_list elem, t_spec *spec)
{
	int		*point;
	char	*str;
	char	*lol;

	point = va_arg(elem, void*);
	if (!(lol = ft_stringnew(2)))
		return (0);
	lol[0] = '0';
	lol[1] = 'x';
	if (point == 0)
	{
		if (!(str = ft_stringnew(2)))
			return (0);
		str[0] = lol[0];
		str[1] = lol[1];
	}
	else
		if (!(str = ft_ultoa_base((unsigned long long)point, 16)))
			return (0);
	str = apply_flags_pointer(str, lol, point, spec);
	ft_strdel(&lol);
	ft_strdel(&str);
	return (1);
}
