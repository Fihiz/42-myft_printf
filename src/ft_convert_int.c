/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 15:56:40 by sad-aude          #+#    #+#             */
/*   Updated: 2020/03/20 16:50:58 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void    ft_convert_dec(va_list elem, t_spec *spec)
{
    int dec;
    int diff;

    dec = va_arg(elem, int);
    diff = 0;
    if (spec->width)
    {
        spec->len = ft_strlen(ft_itoa(dec));
        if (spec->width > spec->len)
        {
            if (spec->is_minus)
                ft_putnbr_fd(dec, 1);
            while (diff++ < spec->width - spec->len)
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