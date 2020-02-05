/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/04 22:07:10 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/05 05:37:33 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"    

int     ft_printf(const char *src, ...)
{
    va_list my_list;
    char tabindex[4] = {'s', 'c', 'd', 0};
    void (*tabfunction[3]) (va_list *) = {ft_printf_str, ft_printf_char, ft_printf_nbr};
    int i;
    int tmp;

    i = 0;
    tmp = 0; 
    va_start(my_list, src);
    while (src[i])
    {
        if (i != 0 && src[i - 1] == '%')
            tmp = ft_index(tabindex, src[i]);
            if (tmp != -1)
                (*tabfunction[tmp])(&my_list);
        else if (src[i] != '%')
            write(1, &src[i], 1);
        i++;
    }
    va_end(my_list);
    return (0);
}

int ft_index(char *tab, char element)
{
    int ind;

    ind = 0;
    while (tab[ind])
    {
        if (tab[ind] == element)
            return (ind);
        ind++;
    }
    return (-1);
}
void    ft_printf_char(va_list *my_list)
{
    char c;

    c = va_arg(*my_list, int);
    ft_putchar_fd(c, 1);
}

void    ft_printf_nbr(va_list *my_list)
{
    int nbr;

    nbr  = va_arg(*my_list, int);
    ft_putnbr_fd(nbr, 1);
}

void ft_printf_str(va_list *my_list)
{
    char *src;

    src = va_arg(*my_list, char *);
    ft_putstr_fd(src, 1);
}