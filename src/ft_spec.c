/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_spec.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/03/03 19:50:00 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/03/03 22:00:31 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static	int		get_prec(char *conv)
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

static	int		get_width(char *conv)
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

static	void	parsing_flags(t_spec *spec)
{
	int index;

	index = 0;
	if (ft_strchr(spec->conv, '*'))
		spec->is_star = 1;
	if (ft_strchr(spec->conv, '-'))
		spec->is_minus = 1;
	while (spec->conv[index] && !ft_isdigit(spec->conv[index]))
		index++;
	if (spec->conv[index] == '0' && spec->conv[index - 1] != '.')
		spec->is_zero = 1;
}

static	int		convert_spec(t_spec *spec)
{
	spec->type = spec->conv[ft_strlen(spec->conv) - 1];
	parsing_flags(spec);
	spec->width = get_width(spec->conv);
	spec->prec = get_prec(spec->conv);
	printf("WIDTH %d -- PREC %d\n", spec->width, spec->prec);
	return (1);
}

int		read_spec(const char *format, int *i)
{
	t_spec	spec;
	int		start;

	ft_bzero(&spec, sizeof(spec));
	start = (*i)++;
	while (!ft_strchr(TYPES, format[*i]))
		(*i)++;
	if (!(spec.conv = ft_substr(format, start + 1, *i - start)) ||
			!convert_spec(&spec))
		return (0);
	return (spec.count);
}
