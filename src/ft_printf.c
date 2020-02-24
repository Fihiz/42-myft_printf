/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 16:48:36 by sad-aude          #+#    #+#             */
/*   Updated: 2020/02/24 16:48:41 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/* int     ft_parsing(const char *format, t_spec comp)
{
    //une fonction generale parsing a decouper en diff parties 
    //pour gerer chaque cas de ma structure
    int ret;
    int i;

    i = 0;
    while (format[i])
    {
        if (i > 0 && format[i] == '%')
        {
            if (format[i + 1] == 'c')
                ret = ft_printf_char(&zob);
        }
        i++;
    }
    return (ret);
}
*/

int     ft_printf(const char *format, ...)
{
    va_list       zob;
    va_start(zob, format);
    int i;

    i = 0;
    while (format[i])
    {
        if (i > 0 && format[i - 1] == '%')
            {
                if (format[i] == 'c')
                {
                    ft_printf_char(&zob);
                }
            }
        else
            write(1, &format[i], 1);
        i++;
    }
    va_end (zob);
    return (0);
}

void    ft_printf_char(va_list *zob)
{
    char c;

    c = va_arg(*zob, int);
    ft_putchar_fd(c, 1);
}

int main()
{
    char d;

    d = 'i';
    ft_printf("My %c essai\n", d);
    printf("Real[%c] essai", d);
    return (0);
}
