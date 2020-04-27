/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_symbols.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:35:55 by sad-aude          #+#    #+#             */
/*   Updated: 2020/04/27 21:14:37 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void    ft_convert_percent(t_spec *spec)
{
     if (spec->width)
    {
         if (spec->width < 0)
        {
             spec->is_minus = 1;
             spec->width *= -1;
        }
        if (spec->is_minus)
            write(1, "%", 1);
        if (spec->is_zero && !spec->is_minus)
            while (spec->diff++ < spec->width - 1)
                write(1, "0", 1);
        else
            while (++spec->diff < spec->width)
                write(1, " ", 1);
        if (!spec->is_minus)
        {
            while (++spec->diff < spec->width)
                write(1, " ", 1);
            write(1, "%", 1);
        }
    }
    else
        write(1, "%", 1);
}