/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:36:09 by sad-aude          #+#    #+#             */
/*   Updated: 2020/03/03 19:36:12 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void    ft_convert_char(va_list *elem)
{
    char c;

    c = va_arg(*elem, int);
    ft_putchar_fd(c, 1);
}
