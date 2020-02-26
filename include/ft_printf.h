/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/24 16:52:34 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/26 14:07:33 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> 
# include "../libft/libft.h"

#define TYPES "cspdiuxX%"

typedef struct	s_convs
{
	char		*conv;
	int			count;
	char		type;
	
	
	int 		width;
	int 		prec;
	int 		align;
	int 		zero;
	void 		*arg;
} 				t_spec;

int						ft_printf(const char *format, ...)
						 __attribute__((format(printf,1,2)));
int	read_spec(const char *format, int *i);


// printf("%", 2, "test");

#endif
