/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:36:09 by sad-aude          #+#    #+#             */
/*   Updated: 2020/03/18 20:25:28 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char   *get_prec_str(char *str, t_spec *spec)
{
        return (ft_substr(str, 0, spec->prec));

}

void            ft_convert_char(va_list elem, t_spec *spec)
{
    char c;

    c = va_arg(elem, int);
    if (spec->width)
    {
        if (spec->is_minus)
        {
            ft_putchar_fd(c, 1);
            while (++spec->len < spec->width)
                write(1, " ", 1);
        }
        if (!spec->is_minus)
        {
            while (++spec->len < spec->width)
                write(1, " ", 1);
            ft_putchar_fd(c, 1);
        }
    }
    else
        ft_putchar_fd(c, 1);
}

void            ft_convert_str(va_list elem, t_spec *spec)
{
    int diff;
    char *str;

    diff = 0;
    if (!(str = va_arg(elem, char*)))
        str = "(null)";
    if (spec->is_prec && (size_t)spec->is_prec < ft_strlen(str))
        str = get_prec_str(str, spec);
    if (spec->width)
    {
        spec->len = ft_strlen(str);
        if (spec->width > spec->len)
        {
            if (spec->is_minus)
                ft_putstr_fd(str, 1);
            while (diff++ < spec->width - spec->len)
                write(1, " ", 1);
            if (!spec->is_minus)
                ft_putstr_fd(str, 1);
        }
        else
            ft_putstr_fd(str, 1);
    }
    else
        ft_putstr_fd(str, 1);
}