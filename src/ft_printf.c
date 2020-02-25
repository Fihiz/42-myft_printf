/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/24 16:48:36 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/26 00:38:33 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int     ft_parsing(const char *format)
{
    int ret; //compteur des char
    int i; //index
    
    i = 0; 
    ret = 0; 
    while (format[i])
    {
        if (format[i] == '%')
            ret += read_spec(format, &i);
        else
        {
            write(1, &format[i], 1);
            ret++;
        }
        i++;
    }
    return (ret);
}

int     ft_printf(const char *format, ...)
{
    va_list elem;
    int     counter;

    counter = 0;
    va_start(elem, format);
    if ((counter = ft_parsing(format)) < 0) //securise
        return (0);
    va_end (elem);
    return (counter);
}