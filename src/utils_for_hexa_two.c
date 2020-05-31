/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_for_hexa_two.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:35:55 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/31 19:29:59 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*apply_second_hexa(char *str, char *sharp, int hexa, t_spec *spec)
{
	if (spec->is_sharp && !spec->is_prec && hexa != 0)
	{
		ft_strdel(&str);
		if (!(str = ft_strjoin(sharp, ft_itoa_base(hexa, 16), 2)))
			return (NULL);
	}
	if (spec->is_majhexa)
		str = ft_strcapitalize(str);
	spec->count += write(1, str, ft_strlen(str));
	return (str);
}

char	*apply_convert_hexa(char *str, char *sharp, int hexa, t_spec *spec)
{
	if (spec->width < 0)
	{
		spec->is_minus = 1;
		spec->width *= -1;
	}
	spec->len = ft_strlen(str);
	if (spec->width > spec->len)
		str = check_width_for_hexa(str, hexa, spec);
	else
	{
		if (spec->is_sharp && !spec->is_prec && hexa != 0)
			str = ft_strjoin(sharp, ft_itoa_base(hexa, 16), 2);
		if (spec->is_majhexa)
			str = ft_strcapitalize(str);
		spec->count += write(1, str, ft_strlen(str));
	}
	return (str);
}
