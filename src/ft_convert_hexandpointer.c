/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hexandpointer.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:35:55 by sad-aude          #+#    #+#             */
/*   Updated: 2020/04/27 22:21:50 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void    ft_convert_hexa(va_list elem, t_spec *spec)
{
    int hexa;
    char *str;

    hexa = va_arg(elem, int);
    str = ft_itoa(hexa);
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
            ft_putstr_fd(str, 1);
    }
    else
       ft_putstr_fd(str, 1);
}
