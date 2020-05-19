/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_for_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 15:56:40 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/19 19:25:34 by sad-aude         ###   ########lyon.fr   */
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

char	*apply_prec_for_pointer(char *str, t_spec *spec)
{
	char	*hexa;
	int		i;

	i = 2;
	hexa = ft_stringnew(2 + spec->prec - spec->len);
	hexa[0] = '0';
	hexa[1] = 'x';
	spec->len = ft_strlen(str);
	if (spec->prec < spec->len)
	{
		//dprintf(1, "\nma chaine : %s\n", str);
		return (ft_strjoin(hexa, str, 3));
	}
	else
	{
		while (spec->diff++ < (spec->prec - spec->len))
			hexa[i++] = '0';
		return (ft_strjoin(hexa, str, 2));
	}
	return (NULL);
}

char	*apply_width_for_pointer(char *str, t_spec *spec)
{
	if (spec->is_space)
		spec->count += write(1, " ", 1);
	spec->count += write(1, "0x", 2);
	while (spec->diff++ < spec->width - spec->len - 2)
		spec->count += write(1, "0", 1);
	return (str);
}

void	check_width_for_pointer(char *str, t_spec *spec)
{
	int indic;

	indic = 0;
	spec->len = ft_strlen(str);
	//dprintf(1, "\nma chaine : %s\n", str);
	if (spec->is_minus)
	{
		//dprintf(1, "\nma chaine : %s\n", str);
			if (!spec->is_prec)
			{
				spec->width -= 2;
				spec->count += write(1, "0x", 2);
			}
		//dprintf(1, "\nma chaine : %s\n", str);
		spec->count += write(1, str, ft_strlen(str));
	}
	if (spec->is_zero && !spec->is_prec && !spec->is_minus)
		str = apply_width_for_pointer(str, spec);
	else
	{
		//dprintf(1, "\n2 ma chaine avant fonction check : %s\n", str);
		//if (spec->is_minus || spec->is_star)
		//{
			//dprintf(1, "\n la : %d\n", spec->len);
			//dprintf(1, "\nma chaine : %s\n", str);
			if (spec->is_star || spec->is_minus)
			{
				while (indic++ < spec->width - spec->len)
					spec->count += write(1, " ", 1);
			}
			else
			{
				while (indic++ < spec->width - spec->len)
					spec->count += write(1, " ", 1);
			}
			if (spec->is_star && !spec->is_minus)
				spec->count += write(1, "0x", 2);
			//dprintf(1, "\nma chaine : %s\n", str);
			//dprintf(1, "\nma chaine : %s\n", str);
		//}
		//else
		//{
		//	//dprintf(1, "\n3 ma chaine avant fonction check : %s\n", str);
		//	//dprintf(1, "\nstr ici : %s\n", str);
		//	while (indic++ < spec->width - spec->len - 2)
		//		spec->count += write(1, " ", 1);
		//}
	}
	if (!spec->is_minus)
	{
		//dprintf(1, "\nstr : %s\n", str);
		//if (spec->is_star)
		//	spec->count += write(1, "0x", 2);
		spec->count += write(1, str, spec->len);
	}
}
