/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_characters.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:36:09 by sad-aude          #+#    #+#             */
/*   Updated: 2020/03/28 02:54:28 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char   *get_prec_str(char *str, t_spec *spec)
{
    dprintf(1,"isprec = %d\n", spec->prec);
    if (str)
    {
        str = ft_substr(str, 0, spec->prec);
        return (str);
    }
    return (NULL);
    // if ((size_t)spec->is_prec < ft_strlen(str))
    // if ((size_t)spec->width > ft_strlen(str))
    // {
    //     //while (spec->diff++ < spec->width - spec->len)
    //     write(1, "0", 1);
    // }
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

   // dprintf(1, "vhfgvhjuyjhvguyjvjbhsuis la\n");
    if (!(str = va_arg(elem, char*)))
        str = "(null)";
    dprintf(1,"str = %s\n", str);
    if (spec->is_prec)
        str = get_prec_str(str, spec);
    //dprintf(1, "hehehehehehhehehesuis la\n");
    //dprintf(1, "%d, width\n", spec->width);
    if (spec->width)
    {
         //dprintf(1, "suis la\n");
        spec->len = ft_strlen(str);
        if (spec->width > spec->len)
        {
            //dprintf(1, "rentre\n");
            if (spec->is_minus)
            {
                ft_putstr_fd(str, 1);
                 //dprintf(1, "ok\n");
            }
            if (spec->is_zero)
                 while (spec->diff++ < spec->width - spec->len)
                    write(1, "0", 1);
            if (!spec->is_zero)
                while (spec->diff++ < spec->width - spec->len)
                    write(1, " ", 1);
            if (!spec->is_minus)
            {
                ft_putstr_fd(str, 1);
                // dprintf(1, "ok\n");
            }
        }
        else
            ft_putstr_fd(str, 1);
        // dprintf(1, "ici\n");
    }
    else
        ft_putstr_fd(str, 1);
}