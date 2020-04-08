/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_characters.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:36:09 by sad-aude          #+#    #+#             */
/*   Updated: 2020/04/08 19:43:26 by sad-aude         ###   ########lyon.fr   */
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
    char *str;

    if (!(str = va_arg(elem, char*)))
        str = "(null)";
    if (spec->is_prec)
        str = get_prec_str(str, spec);
    //dprintf(1, "la width avant = %d\n", spec->width);
    if (spec->width)
    {
        if (spec->width < 0)
        {
             spec->is_minus = 1;
             spec->width *= -1;
        }
        spec->len = ft_strlen(str);
        if (spec->width > spec->len)
        {
            if (spec->is_minus)
                ft_putstr_fd(str, 1);
            if (spec->is_zero && !spec->is_minus)
                 while (spec->diff++ < spec->width - spec->len)
                    write(1, "0", 1);
            if (!spec->is_zero || (spec->is_minus && spec->is_zero))
                while (spec->diff++ < spec->width - spec->len)
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