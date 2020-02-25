/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   zob_main.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/15 18:53:09 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/02/25 23:22:22 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "include/ft_printf.h" 

int     main()
{
    ft_printf("%15s salut\n", "01234567890");
    printf("%.d\n", 0);
    return (0);
}

/* int main()
{
    char d;

    d = 'i';
    ft_printf("My %c essai\n", d);
    printf("Real[%c] essai", d);
    return (0);
} */
