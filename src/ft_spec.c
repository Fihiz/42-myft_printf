/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_spec.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/25 22:29:58 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/28 16:26:33 by sad-aude    ###    #+. /#+    ###.fr     */
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

static int  get_prec(char *conv)
{
    int index;

    index = 0;
    while (conv[index] && conv[index] != '.')
        index++;
    if (conv[index] == '.' && conv[index + 1] &&
        ft_isdigit(conv[index + 1]))
        return (ft_atoi(conv + index + 1));
    else if (conv[index] == '.' && !ft_isdigit(conv[index + 1]))
        return (-1);
    return (0);
}

static int  get_width(char *conv)
{
    int index;

    index = 0;
    while (conv[index] && !ft_isdigit(conv[index]))
        index++;
    if (ft_isdigit(conv[index]) &&
        conv[index - 1] != '.')
        return (ft_atoi(conv + index));
    return (0);
}

static void parse_flags(t_spec *spec)
{
    int index;

    index = 0;
    if (ft_strchr(spec->conv, '*'))
        spec->is_star = 1;
    if (ft_strchr(spec->conv, '-'))
        spec->is_minus = 1;
    while (conv[index] && !ft_isdigit(conv[index]))
        index++;
    if (conv[index] == '0' && conv[index - 1] != '.')
        spec->is_zero = 1;
}

static int  convert_spec(t_spec *spec)
{
    spec->type = spec->conv[ft_strlen(spec->conv) - 1];
    parse_flags(spec);
    spec->width = get_width(spec->conv);
    spec->prec = get_prec(spec->conv); //j'envoie ma spec a ma chaine de conv
    printf("WIDTH %d -- PREC %d\n", spec->width, spec->prec);
    return (1);
}

int         read_spec(const char *format, int *i)
{
    t_spec  spec;
    int     start;

    ft_bzero(&spec, sizeof(spec));
    start = (*i)++;
    while (!ft_strchr(TYPES, format[*i]))
        (*i)++;
    if (!(spec.conv = ft_substr(format, start + 1, *i - start)) ||
        !convert_spec(&spec))
        return (0);
    return (spec.count);
}