/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/04 21:40:02 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/05 05:08:25 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"


int						ft_printf(const char *format, ...)
						 __attribute__((format(printf,1,2)));
void    ft_printf_char(va_list *my_list);
void    ft_printf_nbr(va_list *my_list);
void ft_printf_str(va_list *my_list);
int ft_index(char *tab, char element);


#endif