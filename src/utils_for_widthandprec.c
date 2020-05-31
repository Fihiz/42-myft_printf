/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_for_widthandprec.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:50:00 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/31 07:51:20 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		get_prec(va_list elem, t_spec *spec)
{
	int	index;

	index = 0;
	while (spec->conv[index] && spec->conv[index] != '.')
		index++;
	if (spec->conv[index] == '.' && spec->conv[index + 1] &&
			ft_isdigit(spec->conv[index + 1]))
		return (ft_atoi(spec->conv + index + 1));
	if (spec->conv[index] == '.' && spec->conv[index + 1] &&
			spec->conv[index + 1] == '*')
		return (va_arg(elem, int));
	return (0);
}

int		get_nostar_width(t_spec *spec)
{
	int index;

	index = 0;
	while (spec->conv[index] && !ft_isdigit(spec->conv[index]))
		index++;
	if (ft_isdigit(spec->conv[index]) && (index - 1 < 0 ||
				spec->conv[index - 1] != '.'))
	{
		if (spec->conv[index + 1] != '-' && !spec->is_zero)
		{
			if (spec->conv[index + 1] == '#')
				return (ft_atoi(spec->conv + index + 2));
			return (ft_atoi(spec->conv + index));
		}
		else if (spec->conv[index] == '0')
		{
			while (spec->conv[index] == '0' || spec->conv[index] == '-')
				index++;
			if (spec->conv[index] && spec->conv[index + 1] != '-')
				return (ft_atoi(spec->conv + index));
		}
		else
			return (ft_atoi(spec->conv + index + 1));
	}
	return (0);
}

int		get_width(va_list elem, t_spec *spec)
{
	int index;

	index = 0;
	if (!spec->is_star || (spec->is_prec && spec->is_width))
		return (get_nostar_width(spec));
	else
	{
		while (spec->conv[index] && spec->conv[index] != '*')
			index++;
		if (spec->conv[index] == '*' && (index - 1 < 0
		|| spec->conv[index - 1] != '.'))
		{
			if (spec->conv[index + 1] && ft_isdigit(spec->conv[index + 1]))
			{
				spec->width = va_arg(elem, int);
				return (ft_atoi(spec->conv + index + 1));
			}
			else
				return (va_arg(elem, int));
		}
	}
	return (0);
}
