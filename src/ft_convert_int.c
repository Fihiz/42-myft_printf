/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 15:56:40 by sad-aude          #+#    #+#             */
/*   Updated: 2020/04/08 19:30:15 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char    *get_prec_dec(char *str, t_spec *spec)
{ 
    char *new;
    int i;
    int ind;
    
    i = 0;
    ind = 0;
    spec->len = ft_strlen(str);
    //dprintf(1, "ICI= %d\n", spec->len);
    if (spec->prec < spec->len)
        return (str);
    if (spec->prec > spec->len)
    {
        if (!(new = malloc(sizeof(spec->prec - spec->len + spec->len + 1))))
        return (NULL);
        if (str[0] == '-')
            new[i++] = '-';
        while (spec->diff++ <= (spec->prec - spec->len - 1))
             new[i++] = '0';
        //dprintf(1, "ZOB = [%s]\n", new);
        while (str[ind])
        {
            if (str[ind] == '-')
                str[ind] = '0';
            new[i + ind] = str[ind];
            ind++;
        }
        new[i + ind] = '\0';
        //dprintf(1, "MA CHAINE str = [%s]\n", str);
        return (new);
        //str = new;
        //dprintf(1, "ZOB= %s\n", str);
    }
    return (str);
}

void    ft_convert_dec(va_list elem, t_spec *spec)
{
    int dec;
    char *str;

    dec = va_arg(elem, int);
    str = ft_itoa(dec);
    if (spec->is_prec)
       str = get_prec_dec(str, spec);
    if (spec->width)
    {
        spec->len = ft_strlen(str);
        if (spec->width > spec->len)
        {
            if (spec->is_minus)
            {
                ft_putstr_fd(str, 1);
            }
                
            if (spec->is_zero && !spec->is_prec && !spec->is_minus)
            {
                while (spec->diff++ < spec->width - spec->len)
                    write(1, "0", 1);
            }
            else
            {
                 while (spec->diff++ < spec->width - spec->len) 
                    write(1, " ", 1);
                //printf ("la len de str vaut %zu\n", ft_strlen(str));
            }
            if (!spec->is_minus)
                ft_putstr_fd(str, 1);
        }
        else
            ft_putstr_fd(str, 1);
    }
    else
        ft_putstr_fd(str, 1);
}