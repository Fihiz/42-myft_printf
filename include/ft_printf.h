/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 16:52:34 by sad-aude          #+#    #+#             */
/*   Updated: 2020/02/24 16:52:38 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> 
# include "../libft/libft.h"


typedef struct spec_conversions
{
	int width;
	int prec;
	int align;
	int zero;
	char type;
	void *arg;
} t_spec;

int						ft_printf(const char *format, ...)
						 __attribute__((format(printf,1,2)));
void    ft_printf_char(va_list *my_list);
void    ft_printf_nbr(va_list *my_list);
void ft_printf_str(va_list *my_list);
int ft_index(char *tab, char element);

// printf("%", 2, "test");

#endif
