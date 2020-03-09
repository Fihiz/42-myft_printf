/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_convert.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/03/03 19:36:09 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/03/09 01:23:54 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include "../include/ft_printf.h"

void    ft_convert_char(va_list elem/* ,t_spec spec*/)
{
    char c;

    c = va_arg(elem, int);
    ft_putchar_fd(c, 1);
}

void    ft_convert_str(va_list elem, t_spec spec)
{
    int len;
    int diff;
    char *str;

    len = 0;
    diff = 0;
    str = va_arg(elem, char*);
    if (!str)
        str = "(null)";
    if (spec.width > 0)
    {
        len = ft_strlen(str);
        if (spec.width > len)
        {
            if (spec.is_minus)
                ft_putstr_fd(str, 1);
            while (diff++ < spec.width - len)
                write(1, " ", 1);
            if (!spec.is_minus)
                ft_putstr_fd(str, 1);
        }
        else
            ft_putstr_fd(str, 1);
    }
    else
        ft_putstr_fd(str, 1);
}