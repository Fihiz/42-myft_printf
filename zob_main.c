/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zob_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 18:53:09 by sad-aude          #+#    #+#             */
/*   Updated: 2020/03/04 16:50:19 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h" 

// int     main()
// {
//     //char *str = "hello world";
//     //ft_printf("%15.s salut\n", "01234567890");
//     //ft_printf("%15.d salut\n", 1);
//     ft_printf("Bonjour %c \n", 'l');
//     return (0);
// }

int main()
{
    char d;

    d = 'i';
    ft_printf("vdv %*.8d\n", 100, 10);
    //printf("Real[%c] essai", d);
    return (0);
}
