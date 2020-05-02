/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 15:56:40 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/01 21:44:44 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	*ft_stringnew(int size)
{
	char	*tab;
	int		index;

	if (!(tab = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	index = 0;
	while (index <= size)
		tab[index++] = '\0';
	return (tab);
}

char    *apply_prec_for_dec(char *str, t_spec *spec)
{
    char *temp;
    int i;
    
    i = 1;
    spec->len = ft_strlen(str);
    if (str[0] == '0' && spec->prec == 0)
        return (ft_substr(str, 0, 0));
    if (spec->prec <= spec->len)
        return (str);
    else
    {
        temp = ft_stringnew(spec->prec - spec->len);
        if (str[0] == '-')
        {
            str = ft_substr(str, 1, ft_strlen(str));
            temp[0] = '-';
            spec->count++;
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
// return (str);
}

char    *apply_width_for_dec(char *str, t_spec *spec)
{
    if (str[0] != '-')
    {
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

void    check_width_for_dec(char *str, t_spec *spec)
{
    int zob;
    
    zob = 0;
    spec->len = ft_strlen(str);
    if (spec->is_minus)
        spec->count += write(1, str, ft_strlen(str));
    if (spec->is_zero && !spec->is_prec && !spec->is_minus)
        str = apply_width_for_dec(str, spec);
    else
        {
            while (zob++ < spec->width - spec->len)
                spec->count += write(1, " ", 1);
        }
        if (!spec->is_minus)
            spec->count += write(1, str, ft_strlen(str));
}

void    ft_convert_dec(va_list elem, t_spec *spec)
{
    int dec;
    char *str;

    dec = va_arg(elem, int);
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
       spec->count += write(1, str, ft_strlen(str));
}

void    ft_convert_unsigned(va_list elem, t_spec *spec)
{
    unsigned dec;
    char *str;
    
    dec = va_arg(elem, unsigned int);
    str = ft_ultoa(dec);
    if (spec->is_prec)
       str = apply_prec_for_dec(str, spec);
    if (spec->width)
    {
        spec->len = ft_strlen(str);
        if (spec->width > spec->len)
            check_width_for_dec(str, spec);
        else
            spec->count += write(1, str, ft_strlen(str));
    }
    else
       spec->count += write(1, str, ft_strlen(str));
}