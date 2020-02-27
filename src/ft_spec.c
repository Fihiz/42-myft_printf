/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_spec.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/25 22:29:58 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/27 22:34:13 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"


/*
    A CODER : fonction get_prec
    precision = .nombre
    parsing comme %
    valeur numerique pour l'instant sur ma chaine : la recup pour la passer en param
    traduction en ft_atoi
    si rien apres = comportement printf precision de 0
    ft_bzero ? avec ft_substr pour soutraire par rapport au nombre de char presents 
    et remplir du bon nombre de zero ?

 */

// fonction qui renvoie la precision
// si y a pas de prec je renvoie -2
// si j'ai un point mais pas de precision -1

// int    get_prec()
// {
     
// }

static int  convert_spec(t_spec *spec)
{
    spec->type = spec->conv[ft_strlen(spec->conv)];
    spec->width = ft_atoi(spec->conv);
    //spec->prec = get_prec(spec->conv); //j'envoie ma spec a ma chaine de conv
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
        !convert_spec(&spec))
        return (0);
    //ft_putendl_fd(spec.conv, 1);
    return (spec.count);
}