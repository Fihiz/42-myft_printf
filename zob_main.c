/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zob_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 18:53:09 by sad-aude          #+#    #+#             */
/*   Updated: 2020/03/12 17:08:18 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h" 

int     main()
{
    //printf("lol : %c\n", '\0');
    // printf("Precision de zero sur type d, i : %-10.30d\n", 123456789);
    // printf("Precision de zero sur type d, i : %.30s\n", "123456789");
    // printf("Precision de zero sur type d, i : %*.*d\n", 10, 15, 123456789);
    //char *str = "hello world";
    //ft_printf("%15.s salut\n", "01234567890");
    // ft_printf("Mon essai char : [%c]\n", 's');
    // ft_printf("Mon essai chaine : [%s]\n", "A priori...");
    
    // printf("vrai = %10.0s\n", "SALUT MEC");
    // ft_printf("faux = %10.s\n", "SALUT MEC");

    //printf("Le vrai :[%10.5s]\n", "12345678925262515615625614");
    // printf("Le vrai :[%8.0s]\n", "hello world");
    // ft_printf("Le faux :[%15.5s]\n", "hello world");
    //ft_printf("Le faux :[%15.5s]\n", "12345678925262515615625614");
    // ft_printf("Mon essai chaine avec width : [%s] salut\n", "lol");
    // ft_printf("Mon essai chaine avec width : [%-24s] salut\n", "lol");
    // ft_printf("Mon essai chaine avec width : [%24s] salut\n", "lol");
    // ft_printf("Mon essai chaine avec width : [%.2s] salut\n", "lol");
    // ft_printf("Mon essai chaine avec width : [%.15s] salut\n", "lol");
    // ft_printf("Mon essai chaine avec width : [%.15s] salut\n", NULL);
    // printf("---------------------\n");
    // printf("Son essai chaine avec width : [%s] salut\n", "lol");
    // printf("Son essai chaine avec width : [%-24s] salut\n", "lol");
    // printf("Son essai chaine avec width : [%24s] salut\n", "lol");
    // printf("Son essai chaine avec width : [%.2s] salut\n", "lol");
    // printf("Son essai avec precision : [%*s] salut\n", 10, "lol");
    // printf("Son essai chaine avec width : [%.15s] salut\n", NULL);
    // ft_printf("Ma fonction : hello %10c\n", 'i');
    // printf("Le printf : hello %10c\n", 'i');
    //ft_printf("Ma fonction : hello %-20.3s\n", "my name is Sam");
    //printf("Le printf : hello %20.3s\n", "my name is Sam");
    printf("vrai : %15c, %-c, %-c, %c\n", 'm', 'a', 'e', 'l');
    ft_printf("faux : %15c, %-c, %-c, %c\n", 'm', 'a', 'e', 'l');
    //printf("'%*.*s'", 3, 3, "basique");
    //printf("Bonjour %d*.15 \n", 10);
    //printf(" %*s\n %*s\n", -10, "lol", 10, "mdr");
    return (0);
}

// int main()
// {
//     char d;

//     d = 'i';
//     ft_printf("vdv %*.8d\n", 100, 10);
//     //printf("Real[%c] essai", d);
//     return (0);
// }
