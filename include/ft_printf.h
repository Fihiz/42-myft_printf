/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 16:52:34 by sad-aude          #+#    #+#             */
/*   Updated: 2020/03/12 17:07:45 by sad-aude         ###   ########lyon.fr   */
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
	int 		width;
	int 		prec;
	int 		len;
	void 		*arg;
} 				t_spec;

int						ft_printf(const char *format, ...)
						 __attribute__((format(printf,1,2)));
int     ft_parsing(va_list elem, const char *format);
int	read_spec(va_list elem, const char *format, int *i);
void ft_convert_char(va_list elem, t_spec *spec);
void ft_convert_str(va_list elem, t_spec *spec);

#endif
