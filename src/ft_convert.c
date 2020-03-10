/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:36:09 by sad-aude          #+#    #+#             */
/*   Updated: 2020/03/10 05:15:29 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void            ft_convert_char(va_list elem/* ,t_spec spec*/)
{
    char c;

    c = va_arg(elem, int);
    ft_putchar_fd(c, 1);
}

// static void     check_prec_str(t_spec *spec, char **astr)
// {
//     char *str;

//     str = *astr;
//     //printf("IS_PREC[%d] PREC[%d]\n", spec->is_prec, spec->prec);
//     if (spec->is_prec)
//     {
//         if (spec->prec == -1)
//             spec->prec = 0;
//         if (spec->prec != 0)
//             str = ft_substr(str, 0, spec->prec);
//         else
//             str = ft_strdup("");
//     }
// }

static void prec_str(t_spec *spec)
{
    char *precstr;

    precstr = NULL;
    if (spec->is_prec)
    {
        if (spec->prec < ft_strlen(str))
            precstr = ft_substr(str, 0, spec->prec);
        if (spec->width > spec->prec)
        {
            //je print space a g ou d
        }
        else
        {
            ft_putstr_fd(precstr, 1);
        }

    }
}

void            ft_convert_str(va_list elem, t_spec *spec)
{
    int len;
    int diff;
    char *str;

    len = 0;
    diff = 0;
    if (!(str = va_arg(elem, char*)))
        str = "(null)";
    //precision d'abord pour avoir la chaine sur laquelle VRAIMENT agir
    //prec_str;
    if (spec->width > 0)
    {
        len = ft_strlen(str);
        if (spec->width > len)
        {
            if (spec->is_minus)
                ft_putstr_fd(str, 1);
            while (diff++ < spec->width - len)
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