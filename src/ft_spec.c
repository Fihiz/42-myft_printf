/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_spec.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/25 22:29:58 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/25 23:24:49 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"


// fonction qui renvoie la precision
// si y a pas de prec je renvoie -2
// si j'ai un point mais pas de precision -1

static int  conv_spec(t_spec *spec)
{
    spec->type = spec->conv[ft_strlen(spec->conv) - 1];
    spec->width = ft_atoi(spec->conv);
    spec->prec = get_prec(spec->conv);
    return (1);
}

int         read_spec(const char *format, int *i)
{
    t_spec  spec;
    int     start;

    start = (*i)++;
    while (!ft_strchr(TYPES, format[*i]))
        (*i)++;
    if (!(spec.conv = ft_substr(format, start + 1, *i - start)) ||
        !conv_spec(&spec))
        return (0);
    ft_putendl_fd(spec.conv, 1);
    return (spec.count);
}