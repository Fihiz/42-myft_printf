/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_convert_char.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/25 19:57:54 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/25 20:08:23 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void    ft_convert_char(va_list *elem)
{
    char c;

    c = va_arg(*elem, int);
    ft_putchar_fd(c, 1);
}