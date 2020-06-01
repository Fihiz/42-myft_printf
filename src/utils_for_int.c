/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_for_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:35:55 by sad-aude          #+#    #+#             */
/*   Updated: 2020/06/01 01:37:56 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*apply_longprec_for_dec(char *str, t_spec *spec)
{
	char	*temp;

	if (str[0] == '-')
	{
		if (!(temp = ft_stringnew(spec->prec - spec->len + 2)))
			return (NULL);
		if (!(str = ft_substr(str, 1, ft_strlen(str), 1)))
			return (NULL);
		temp[spec->diff] = '-';
		while (++spec->diff < (spec->prec - spec->len + 2))
			temp[spec->diff] = '0';
		if (!(str = ft_strjoin(temp, str, 3)))
			return (NULL);
		return (str);
	}
	if (!(temp = ft_stringnew(spec->prec - spec->len)))
		return (NULL);
	spec->diff = -1;
	while (++spec->diff < (spec->prec - spec->len))
		temp[spec->diff] = '0';
	if (!(str = ft_strjoin(temp, str, 3)))
		return (NULL);
	return (str);
}

char	*apply_prec_for_dec(char *str, t_spec *spec)
{
	spec->len = ft_strlen(str);
	if (str[0] == '0' && spec->prec == 0)
	{
		if (!(str = ft_substr(str, 0, 0, 1)))
			return (NULL);
		return (str);
	}
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
	spec->count += write(1, "-", 1);
	while (spec->diff++ < spec->width - spec->len)
		spec->count += write(1, "0", 1);
	if (!(str = ft_substr(str, 1, ft_strlen(str), 1)))
		return (NULL);
	return (str);
}

void	apply_longwidth_for_dec(t_spec *spec)
{
	if (spec->is_zero && spec->is_star && spec->prec < 0)
		while (spec->indic++ < spec->width - spec->len)
			spec->count += write(1, "0", 1);
	else
		while (spec->indic++ < spec->width - spec->len)
			spec->count += write(1, " ", 1);
}

char	*check_width_for_dec(char *str, t_spec *spec)
{
	spec->len = ft_strlen(str);
	if ((spec->is_plus && spec->positive_dec) || (spec->is_space
		&& !spec->positive_dec && !spec->is_zero && !spec->is_minus))
		spec->width -= 1;
	if (spec->is_minus)
	{
		if (spec->is_plus && spec->positive_dec)
			spec->count += write(1, "+", 1);
		if (spec->is_space && spec->positive_dec && !spec->is_plus)
			spec->count += write(1, " ", 1);
		spec->count += write(1, str, ft_strlen(str));
	}
	if (spec->is_zero && !spec->is_prec && !spec->is_minus)
		str = apply_width_for_dec(str, spec);
	else
		apply_longwidth_for_dec(spec);
	if (!spec->is_minus)
	{
		if (spec->is_plus && spec->positive_dec &&
			(!spec->is_zero || spec->is_prec))
			spec->count += write(1, "+", 1);
		spec->count += write(1, str, ft_strlen(str));
	}
	return (str);
}
