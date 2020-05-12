/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 16:52:34 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/12 05:39:39 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"

#define TYPES "cspdiuxX%"


typedef struct	s_spec
{
	char		*conv;
	int			count;
	char		type;
	int			is_star;
	int			is_minus;
	int			is_zero;
	int			is_prec;
	int			is_plus;
	int			is_space;
	int         is_majhexa;
	int			positive_dec;
	int 		width;
	int 		prec;
	int 		len;
	int			diff;
	void 		*arg; // ?
} 				t_spec;

int						ft_printf(const char *format, ...)
						 __attribute__((format(printf,1,2)));
int     ft_parsing(va_list elem, const char *format);
// int		lputstr_fd(char *s, int fd);
int		read_spec(va_list elem, const char *format, int *i);
char    *apply_prec_for_dec(char *str, t_spec *spec);
char    *apply_width_for_dec(char *str, t_spec *spec);
void    check_width_for_dec(char *str, t_spec *spec);
void ft_convert_char(va_list elem, t_spec *spec);
void ft_convert_str(va_list elem, t_spec *spec);
void ft_convert_dec(va_list elem, t_spec *spec);
void ft_convert_unsigned(va_list elem, t_spec *spec);
void ft_convert_percent(t_spec *spec);
void ft_convert_hexa(va_list elem, t_spec *spec);
void ft_convert_pointer(va_list elem, t_spec *spec);
void	*ft_stringnew(int size);


#endif
