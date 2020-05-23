/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_for_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:35:55 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/23 00:23:33 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*apply_longprec_for_dec(char *str, t_spec *spec)
{
	int		i;
	char	*temp;

	i = 1;
	temp = ft_stringnew(spec->prec - spec->len);
	if (str[0] == '-')
	{
		str = ft_substr(str, 1, ft_strlen(str));
		temp[0] = '-';
		while (spec->diff++ <= (spec->prec - spec->len))
			temp[i++] = '0';
		return (ft_strjoin(temp, str, 2));
	}
	else
	{
		i = 0;
		while (spec->diff++ < (spec->prec - spec->len))
			temp[i++] = '0';
		return (ft_strjoin(temp, str, 2));
	}
}

char	*apply_prec_for_dec(char *str, t_spec *spec)
{
	spec->len = ft_strlen(str);
	if (str[0] == '0' && spec->prec == 0)
		return (ft_substr(str, 0, 0));
	if (spec->prec < spec->len)
		return (str);
	else
		str = apply_longprec_for_dec(str, spec);
	return (str);
}

char	*apply_width_for_dec(char *str, t_spec *spec)
{
	if (str[0] != '-')
	{
		if (spec->is_space && !spec->is_plus)
		{
			spec->count += write(1, " ", 1);
			while (spec->diff++ < spec->width - spec->len - 1)
				spec->count += write(1, "0", 1);
			return (str);
		}
		if (spec->is_plus && spec->positive_dec)
			spec->count += write(1, "+", 1);
		while (spec->diff++ < spec->width - spec->len)
			spec->count += write(1, "0", 1);
		return (str);
	}
	else
	{
		spec->count += write(1, "-", 1);
		while (spec->diff++ < spec->width - spec->len)
			spec->count += write(1, "0", 1);
		return (ft_substr(str, 1, ft_strlen(str)));
	}
}

void	check_width_for_dec(char *str, t_spec *spec)
{
	spec->len = ft_strlen(str);
	if ((spec->is_plus && spec->positive_dec) || (spec->is_space
		&& !spec->positive_dec && !spec->is_zero && !spec->is_minus))
		spec->width -= 1;
	if (spec->is_minus)
	{
		if (spec->is_space && spec->positive_dec)
			spec->count += write(1, " ", 1);
		spec->count += write(1, str, ft_strlen(str));
	}
	if (spec->is_zero && !spec->is_prec && !spec->is_minus)
		str = apply_width_for_dec(str, spec);
	else
	{
		while (spec->indic++ < spec->width - spec->len)
			spec->count += write(1, " ", 1);
	}
	if (!spec->is_minus)
	{
		if (spec->is_plus && spec->positive_dec && !spec->is_zero)
			spec->count += write(1, "+", 1);
		spec->count += write(1, str, ft_strlen(str));
	}
}
