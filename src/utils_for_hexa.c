/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_for_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:35:55 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/24 20:31:45 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*apply_longprec_for_hexa(char *str, int hexa, char *temp, t_spec *spec)
{
	int	i;

	i = 0;
	if (spec->is_sharp && hexa != 0)
		i = 2;
	while (spec->diff++ < (spec->prec - spec->len))
		temp[i++] = '0';
	str = ft_strjoin(temp, str, 2);
	if (spec->is_majhexa)
		ft_strcapitalize(str);
	return (str);
}

char	*apply_prec_for_hexa(char *str, int hexa, t_spec *spec)
{
	char	*temp;

	//dprintf(1, "well: %zu\n", ft_strlen(str));
	if (str[0] == '0' && spec->prec == 0)
		return (ft_stringnew(0));
	if (spec->is_sharp && hexa != 0)
	{
		temp = ft_stringnew(2 + spec->prec - spec->len);
		temp[0] = '0';
		temp[1] = 'x';
	}
	else
		temp = ft_stringnew(spec->prec - spec->len);
	spec->len = ft_strlen(str);
	if (spec->prec < spec->len)
	{
		if (spec->is_sharp)
			str = ft_strjoin(temp, str, 2);
		if (spec->is_majhexa)
			ft_strcapitalize(str);
		return (str);
	}
	else
		str = apply_longprec_for_hexa(str, hexa, temp, spec);
	return (str);
}

char	*apply_width_for_hexa(char *str, int hexa, t_spec *spec)
{
	if (spec->is_sharp && hexa != 0)
	{
		if (spec->is_majhexa)
			spec->count += write(1, "0X", 2);
		else
			spec->count += write(1, "0x", 2);
		while (spec->diff++ < spec->width - spec->len - 2)
			spec->count += write(1, "0", 1);
		return (str);
	}
	while (spec->diff++ < spec->width - spec->len)
		spec->count += write(1, "0", 1);
	return (str);
}

char	*apply_longwidth_for_hexa(char *str, int hexa, t_spec *spec)
{
	int indic;

	indic = 0;
	if (spec->is_sharp && hexa != 0 && !spec->is_minus && !spec->is_prec)
	{
		spec->width -= 2;
		while (indic++ < spec->width - spec->len)
			spec->count += write(1, " ", 1);
		if (spec->is_majhexa)
			spec->count += write(1, "0X", 2);
		else
			spec->count += write(1, "0x", 2);
	}
	else
		while (indic++ < spec->width - spec->len)
			spec->count += write(1, " ", 1);
	return (str);
}

void	check_width_for_hexa(char *str, int hexa, t_spec *spec)
{
	spec->len = ft_strlen(str);
	if (spec->is_minus)
	{
		if (spec->is_sharp && hexa != 0 && !spec->is_prec)
		{
			spec->width -= 2;
			if (spec->is_majhexa)
				spec->count += write(1, "0X", 2);
			else
				spec->count += write(1, "0x", 2);
		}
		spec->count += write(1, str, ft_strlen(str));
	}
	if (spec->is_zero && !spec->is_prec && !spec->is_minus)
		str = apply_width_for_hexa(str, hexa, spec);
	else
		str = apply_longwidth_for_hexa(str, hexa, spec);
	if (!spec->is_minus)
		spec->count += write(1, str, ft_strlen(str));
}
