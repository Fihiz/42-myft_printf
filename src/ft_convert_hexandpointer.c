/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hexandpointer.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:35:55 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/25 01:50:23 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	apply_convert_pointer(char *str, int *point, t_spec *spec)
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
}

void	apply_convert_hexa(char *str, char *sharp, int hexa, t_spec *spec)
{
	if (spec->width < 0)
	{
		spec->is_minus = 1;
		spec->width *= -1;
	}
	spec->len = ft_strlen(str);
	if (spec->width > spec->len)
		check_width_for_hexa(str, hexa, spec);
	else
	{
		if (spec->is_sharp && !spec->is_prec && hexa != 0)
			str = ft_strjoin(sharp, ft_itoa_base(hexa, 16), 2);
		if (spec->is_majhexa)
			str = ft_strcapitalize(str);
		spec->count += write(1, str, ft_strlen(str));
	}
}

void	ft_convert_hexa(va_list elem, t_spec *spec)
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
	if (spec->is_prec)
		str = apply_prec_for_hexa(str, hexa, spec);
	if (spec->width)
	{
		apply_convert_hexa(str, sharp, hexa, spec);
	}
	else
	{
		if (spec->is_sharp && !spec->is_prec && hexa != 0)
			str = ft_strjoin(sharp, ft_itoa_base(hexa, 16), 2);
		if (spec->is_majhexa)
			str = ft_strcapitalize(str);
		spec->count += write(1, str, ft_strlen(str));
	}
	free(sharp);
	free(str);
}

void	apply_notflags_pointer(char *str, char *lol, int *point, t_spec *spec)
{
	if (spec->is_star && !spec->width && !spec->is_prec)
		str = ft_strjoin(lol,
		ft_ultoa_base((unsigned long long)point, 16), 2);
	spec->count += write(1, str, ft_strlen(str));
}

void	ft_convert_pointer(va_list elem, t_spec *spec)
{
	int		*point;
	char	*str;
	char	*lol;

	point = va_arg(elem, void*);
	lol = ft_stringnew(2);
	lol[0] = '0';
	lol[1] = 'x';
	if (point == 0)
	{
		str = ft_stringnew(2);
		str[0] = lol[0];
		str[1] = lol[1];
	}
	else
		str = ft_ultoa_base((unsigned long long)point, 16);
	if ((!spec->is_minus && !spec->is_prec && !spec->is_star)
			|| (spec->is_minus && !spec->width && !spec->is_prec))
		str = ft_strjoin(lol, ft_ultoa_base((unsigned long long)point, 16), 2);
	if (spec->is_prec)
		str = apply_prec_for_pointer(str, point, spec);
	if (spec->width)
		apply_convert_pointer(str, point, spec);
	else
		apply_notflags_pointer(str, lol, point, spec);
	free (lol);
	free (str);
}
