/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 15:56:40 by sad-aude          #+#    #+#             */
/*   Updated: 2020/03/23 17:35:17 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

//char    *get_prec_dec(char *str, t_spec *spec)
//{
//    while ()
//}

void    ft_convert_dec(va_list elem, t_spec *spec)
{
    int dec;
    char *str;

    dec = va_arg(elem, int);
    str = ft_itoa(dec);
    //if (spec->is_prec && (size_t)spec->is_prec > ft_strlen(str))
       //str = get_prec_dec(str, spec);
    if (spec->width)
    {
        spec->len = ft_strlen(ft_itoa(dec));
        if (spec->width > spec->len)
        {
            if (spec->is_minus)
                ft_putnbr_fd(dec, 1);
            if (spec->is_zero && !spec->is_prec)
                while (spec->diff++ < spec->width - spec->len)
                    write(1, "0", 1);
            else
                 while (spec->diff++ < spec->width - spec->len)
                    write(1, " ", 1);
            if (!spec->is_minus)
                ft_putnbr_fd(dec, 1);
        }
        else
            ft_putnbr_fd(dec, 1);
    }
    else
        ft_putnbr_fd(dec, 1);
}