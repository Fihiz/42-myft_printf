/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 16:52:34 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/26 03:31:58 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "../libft/libft.h"

# define TYPES "cspdiuxX%"

typedef struct	s_spec
{
	char		*conv;
	int			count;
	char		type;
	int			parser;
	int			is_star;
	int			is_minus;
	int			is_zero;
	int			is_prec;
	int			is_width;
	int			is_plus;
	int			is_space;
	int			is_majhexa;
	int			is_sharp;
	int			positive_dec;
	int			width;
	int			prec;
	int			len;
	int			diff;
	int			indic;
}				t_spec;

int				ft_printf(const char *format, ...)
						 __attribute__((format(printf,1,2)));
int				ft_parsing(va_list elem, const char *format);
int				read_spec(va_list elem, const char *format, int *i);
int				get_width(va_list elem, t_spec *spec);
int				get_nostar_width(t_spec *spec);
int				get_prec(va_list elem, t_spec *spec);
/*
**       FUNCTIONS FOR D AND I TYPES
*/
void			apply_convert_dec(char *str, t_spec *spec);
char			*apply_prec_for_dec(char *str, t_spec *spec);
char			*apply_longprec_for_dec(char *str, t_spec *spec);
char			*apply_width_for_dec(char *str, t_spec *spec);
void			check_width_for_dec(char *str, t_spec *spec);
/*
**       FUNCTIONS FOR P TYPE
*/
void			apply_convert_pointer(char *str, int *point, t_spec *spec);
char			*apply_prec_for_pointer(char *str, int *point, t_spec *spec);
char			*longprec_for_pointer(char *str, char *hexa, int *point,
t_spec *spec);
char			*apply_width_for_pointer(char *str, t_spec *spec);
void			apply_longwidth_for_pointer(t_spec *spec);
void			check_width_for_pointer(char *str, t_spec *spec);
void			apply_notflags_pointer(char *str, char *lol, int *point,
t_spec *spec);
/*
**       FUNCTIONS FOR xX TYPE
*/
void			apply_convert_hexa(char *str, char *sharp,
						int hexa, t_spec *spec);
char			*apply_prec_for_hexa(char *str, int hexa, t_spec *spec);
char			*apply_longprec_for_hexa(char *str, int hexa, char *temp,
						t_spec *spec);
char			*apply_width_for_hexa(char *str, int hexa, t_spec *spec);
char			*apply_longwidth_for_hexa(char *str, int hexa, t_spec *spec);
void			check_width_for_hexa(char *str, int hexa, t_spec *spec);
/*
**       FUNCTIONS FOR s TYPE
*/
void	apply_width_for_str(char *str, t_spec *spec);
/*
**       BASICS FOR CONVERSIONS
*/
void			ft_convert_char(va_list elem, t_spec *spec);
void			ft_convert_str(va_list elem, t_spec *spec);
void			ft_convert_dec(va_list elem, t_spec *spec);
void			ft_convert_unsigned(va_list elem, t_spec *spec);
void			ft_convert_percent(t_spec *spec);
void			ft_convert_hexa(va_list elem, t_spec *spec);
void			ft_convert_pointer(va_list elem, t_spec *spec);

#endif
