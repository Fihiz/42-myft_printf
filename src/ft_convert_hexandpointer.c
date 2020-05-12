/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hexandpointer.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:35:55 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/12 05:53:09 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}

void	ft_convert_hexa(va_list elem, t_spec *spec)
{
	int		hexa;
	char	*str;

	hexa = va_arg(elem, int);
	str = ft_itoa_base(hexa, 16);
	if (spec->is_majhexa)
		str = ft_strcapitalize(str);
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
}

void	ft_convert_pointer(va_list elem, t_spec *spec)
{
	int		pointer;
	char	*str;
	char 	*lol;

	pointer = va_arg(elem, int);
	lol = ft_stringnew(2);
	lol[0] = '0';
	lol[1] = 'x';
	str = ft_strjoin(lol, ft_ultoa_base(pointer, 16), 2);
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
}
