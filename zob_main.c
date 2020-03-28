/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zob_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 18:53:09 by sad-aude          #+#    #+#             */
/*   Updated: 2020/03/28 02:55:30 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h" 

int     main()
{
    int fuck;

    fuck = 0;
    //printf("vrai num : %d\n", 123);
    //ft_printf("faux num : %d\n", 123);
    // printf("Precision de zero sur type d, i : %-10.30d\n", 123456789);
    // printf("Precision de zero sur type d, i : %.30s\n", "123456789");
    // printf("Precision de zero sur type d, i : %*.*d\n", 10, 15, 123456789);


    //ft_printf("%15.s salut\n", "01234567890");
    // ft_printf("Mon essai char : [%c]\n", 's');
    // ft_printf("Mon essai chaine : [%s]\n", "A priori...");
    
    dprintf(1, "vrai = %.*s\n", 6, "SALUT MEC");
    ft_printf("faux = %.*s\n", 6, "SALUT MEC");
    //  dprintf(1, "vrai = %*.*s\n", 15, 6, "SALUT MEC");
    // ft_printf("faux = %*.*s\n", 15, 6, "SALUT MEC");
    // dprintf(1, "vrai = %d coucou %*.*s\n", 15, 6, 3, "SALUT MEC");
    // ft_printf("faux = %d coucou %*.*s\n", 15, 6, 3, "SALUT MEC");
    // ft_printf("faux = %*.*s\n", 15, 6, "SALUT MEC");
    // dprintf(1, "\n");
    //dprintf(1, "\n");
    //dprintf(1, "\n");
    // dprintf(1, "vrai = %030.20d\n", -2143648);
    // ft_printf("faux = %030.20d\n", -2143648);
    // dprintf(1, "\n");
    // dprintf(1, "vrai = %015d\n", 2147);
    // ft_printf("faux = %015d\n", 2147);
    // dprintf(1, "\n");
    // dprintf(1, "\n");
    // dprintf(1, "\n");

    // dprintf(1, "TESTS TYPE S\n");
    // dprintf(1, "\n");
    // ft_printf("faux : [%.15s] salut\n", NULL);
    // dprintf(1, "vrai : [%.15s] salut\n", NULL);
    // dprintf(1, "\n");
    // ft_printf("[Faux] : hello %050.6s\n", "my name is Sam");
    // dprintf(1, "[Vrai] : hello %050.6s\n", "my name is Sam");
    // dprintf(1, "\n");
    // ft_printf("Faux : hello %20.s\n", "");
    // dprintf(1, "Vrai : hello %20.s\n", "");
    // dprintf(1, "\n");
    // ft_printf("Faux : hello %-10.3s\n", "my name is Sam");
    // dprintf(1, "Vrai : hello %-10.3s\n", "my name is Sam");
    // dprintf(1, "\n");
    // ft_printf( "faux : '%*s'\n", 3, "basique");
    // dprintf(1, "vrai : '%*s'\n", 3, "basique");
    // dprintf(1, "\n");
    // ft_printf( "faux : '%*s'\n", -10, "basique");
    // dprintf(1, "vrai : '%*s'\n", -10, "basique");
    // ft_printf("Faux sefault : %-10s ---- %10s\n", "lol", "mdr");
    // dprintf(1, "Vrai segfault : %-10s ---- %10s\n", "lol", "mdr");
    // dprintf(1, "\n");
    // ft_printf("Faux : %*s ---- %*s\n", -10, "lol", 10, "mdr");
    // dprintf(1, "Vrai : %*s ---- %*s\n", -10, "lol", 10, "mdr");
    // dprintf(1, "\n");
    // ft_printf("faux :[%015.5s]\n", "12345678925262515615625614");
    // dprintf(1, "vrai :[%015.5s]\n", "12345678925262515615625614");
   



    // dprintf(1, "vrai : %15c, %-c, %-c, %c\n", 'm', 'a', 'e', 'l');
    // ft_printf("faux : %15c, %-c, %-c, %c\n", 'm', 'a', 'e', 'l');
    // dprintf(1, "\n");
       // ft_printf("Ma fonction : hello %10c\n", 'i');
    // printf("Le printf : hello %10c\n", 'i');
    //printf("Bonjour %d*.15 \n", 10);
    
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


// dprintf(1,"ma chaine2 = %s\n", spec->conv);
			// dprintf(1,"ma chaine = %c\n", spec->conv[index + 1]);
			// dprintf(1,"ma chaine = %d\n", va_arg(elem, int));