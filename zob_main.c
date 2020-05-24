/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zob_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sad-aude <sad-aude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 18:53:09 by sad-aude          #+#    #+#             */
/*   Updated: 2020/05/24 00:51:58 by sad-aude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"
#include <limits.h>

int     main()
{
    int fuck;

    fuck = 0;
	char	*str = "astek";
	char	stre[] = {'a', 's', 10, 'E', 'k', 0, 3, 123, -15, 15};
	
	// dprintf(1, "TESTS TYPE D\n");
    // dprintf(1, "\n");
    // ft_printf("faux : %*.10d\n", 10, 42);
    // dprintf(1, "vrai : %*.10d\n", 10, 42);
    // dprintf(1, "\n");
    // ft_printf("faux : %*.*d\n", 10, 10, 42);
    // dprintf(1, "vrai : %*.*d\n", 10, 10, 42);
    // ft_printf("%x\n", 192);
    // printf("%x\n", 192);
	// ft_printf("[faux] = %0 i\n", 42);
    // dprintf(1, "[vrai] = %0 i\n", 42);
	// dprintf(1, "\n");
	// ft_printf("[faux] = %+i\n", 42);
    // dprintf(1, "[vrai] = %+i\n", 42);
	// dprintf(1, "\n");
	// ft_printf("%*s\n", 10, "Hello");
    // dprintf(1, "%*s\n", 10, "Hello");
	// dprintf(1, "\n");
	// ft_printf("[faux] = %*+d\n", 10, 42);
    // dprintf(1, "[vrai] = %*+d\n", 10, 42);
	// dprintf(1, "\n");
	// ft_printf("[faux] = %#i\n", 42);
    // dprintf(1, "[vrai] = %#i\n", 42);
	// dprintf(1, "\n");
	// ft_printf("[faux] = % d\n", 42);
    // dprintf(1, "[vrai] = % d\n", 42);
	// dprintf(1, "\n");
    // ft_printf("[faux] = %0 10i\n", 42);
    // dprintf(1, "[vrai] = %0 10i\n", 42);
	// dprintf(1, "\n");
	// ft_printf("[faux] = %0 10i\n", -42);
    // dprintf(1, "[vrai] = %0 10i\n", -42);
	// dprintf(1, "\n");
    // ft_printf("%0*d\n", -10, 42);
    // dprintf(1, "%0*d\n", -10, 42);
    // ft_printf("faux: %d\n", 123);
    // dprintf(1, "vrai: %d\n", 123);
    // dprintf(1, "\n");
    // ft_printf("faux: %.3i\n", -42);
    // dprintf(1, "vrai: %.3i\n", -42);
    // dprintf(1, "\n");
    // ft_printf("faux: %d\n", 2147483647);
    // dprintf(1, "vrai: %d\n", 2147483647);
    // dprintf(1, "\n");
    // ft_printf("faux: % - d\n", 4294967295);
    // dprintf(1, "vrai: % - d\n", 4294967295);
    // dprintf(1, "\n");
    // ft_printf("faux: %020.10d\n", -123456789);
    // dprintf(1, "vrai: %020.10d\n", -123456789);
    // dprintf(1, "\n");
    // ft_printf("faux : %-10.30d\n", 0123);
    // dprintf(1, "vrai : %-10.30d\n", 0123);
    // dprintf(1, "\n");
    // ft_printf("faux mix = %d coucou %*.*s\n", 15, 6, 3, "SALUT MEC");
    // dprintf(1, "vrai mix = %d coucou %*.*s\n", 15, 6, 3, "SALUT MEC");
    // dprintf(1, "\n");
    // dprintf(1, "vrai = %-20d\n", -2143648);
    // ft_printf("faux = %-20d\n", -2143648);
    // dprintf(1, "\n");
    // dprintf(1, "vrai = %010.2d\n", -2147);
    // ft_printf("faux = %010.2d\n", -2147);
    // dprintf(1, "\n");
	// ft_printf("faux : %d\n", 0);
    // dprintf(1, "vrai : %d\n", 0);
    // dprintf(1, "\n");
	// ft_printf("faux : %d\n", 2147483647);
    // dprintf(1, "vrai : %d\n", 2147483647);
    // dprintf(1, "\n");
	// ft_printf("faux : %.2d\n", -0);
    // dprintf(1, "vrai : %.2d\n", -0);
    // dprintf(1, "\n");
	// ft_printf("faux : %0*d\n", -10, 42);
    // dprintf(1, "vrai : %0*d\n", -10, 42);
    // dprintf(1, "\n");
	// ft_printf("faux : %-*d\n", -9, -87);
    // dprintf(1, "vrai : %-*d\n", -9, -87);
    // dprintf(1, "\n");
    // ft_printf("faux : %02i\n", -1);
    // dprintf(1, "vrai : %02i\n", -1);
    // dprintf(1, "\n");
	// ft_printf("faux : '%.0i\n", 2147483647);
    // dprintf(1, "vrai : '%.0i\n", 2147483647);
    // dprintf(1, "\n");
	// ft_printf("faux : ' %10.4i'\n", -01);
    // dprintf(1, "vrai : ' %10.4i'\n", -01);
    // dprintf(1, "\n");
    // ft_printf("faux : '%10.4i'\n", 111);
    // dprintf(1, "vrai : '%10.4i'\n", 111);
    // dprintf(1, "\n");
	// ft_printf("faux : '%-2i\n", 0);
    // dprintf(1, "vrai : '%-2i\n", 0);
    // dprintf(1, "\n");
	// ft_printf("faux : '%i\n", -1);
    // dprintf(1, "vrai : '%i\n", -1);
    // dprintf(1, "\n");
	// ft_printf("faux : '%-----10i\n", 0);
    // dprintf(1, "vrai : '%-----10i\n ", 0);
    // dprintf(1, "\n");
	// ft_printf("faux : '%010.*i\n", 15, -1);
    // dprintf(1, "vrai : '%010.*i\n", 15, -1);
    // dprintf(1, "\n");
	// ft_printf("faux : '%-15.10i\n", -1);
    // dprintf(1, "vrai : '%-15.10i\n", -1);
    // dprintf(1, "\n");
	// ft_printf("faux : '%010i\n", -1);
    // dprintf(1, "vrai : '%010i\n", -1);
    // dprintf(1, "\n");
	// ft_printf("faux : '%15.0i\n", 0);
    // dprintf(1, "vrai : '%15.0i\n", 0);
    // dprintf(1, "\n");
	// ft_printf("faux : '%01.1i\n", 0);
    // dprintf(1, "vrai : '%01.1i\n", 0);
    // dprintf(1, "\n");
	// ft_printf("faux : '%03.1i\n", 0);
    // dprintf(1, "vrai : '%03.1i\n", 0);
    // dprintf(1, "\n");
    // ft_printf("faux : '%.Oi\n", 0);
    // dprintf(1, "vrai : '%.0i\n", 0);
    // dprintf(1, "\n");
	// ft_printf("faux : '%.*i\n", -1, 0);
    // dprintf(1, "vrai : '%.*i\n", -1, 0);
    // dprintf(1, "\n");
	// ft_printf("faux : %03.0i\n", -1);
    // dprintf(1, "vrai : %03.0i\n", -1);
    // dprintf(1, "\n");
    // dprintf(1, "vrai : |%d|\n", 0);
	// ft_printf("faux : |%d|\n", 0);
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%08i|\n", -71);
	// ft_printf("faux : |%08i|\n", -71);
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%-7d|\n", 7789);
	// ft_printf("faux : |%-7d|\n", 7789);
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%12.5d|\n", 140);
	// ft_printf("faux : |%12.5d|\n", 140);
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%0010.4d|\n", 0);
	// ft_printf("faux : |%0010.4d|\n", 0);
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%20.d et %.4i !|\n", 0x11ffaa147, (signed char)-8);
	// ft_printf("faux : |%20.d et %.4i !|\n", 0x11ffaa147, (signed char)-8);
    // dprintf(1, "\n");
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%d|\n", 534);
	// ft_printf("faux : |%d|\n", 534);
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%.2i|\n", -10);
	// ft_printf("faux : |%.2i|\n", -10);
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%0.23d|\n", -4440);
	// ft_printf("faux : |%0.23d|\n", -4440);
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%i|\n", -4440);
	// ft_printf("faux : |%i|\n", -4440);
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%d|\n", 25000);
	// ft_printf("faux : |%d|\n", 25000);
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%-2i|\n", -7);
	// ft_printf("faux : |%-2i|\n", -7);
    // dprintf(1, "\n");
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%03i|\n", 0);
	// ft_printf("faux : |%03i|\n", 0);
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%5d|\n", -741);
	// ft_printf("faux : |%5d|\n", -741);
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%.d|\n", 0);
	// ft_printf("faux : |%.d|\n", 0);
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%d|\n", 0);
	// ft_printf("faux : |%d|\n", 0);
    // dprintf(1, "\n");
    // dprintf(1, "vrai : |%04d|\n", 0);
	// ft_printf("faux : |%04d|\n", 0);
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%-12i et |%--2.4s| |%24s| !|\n", 0, NULL, "coco");
	// ft_printf("faux : |%-12i et |%--2.4s| |%24s| !|\n", 0, NULL, "coco");
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%-12d|\n", 0);
	// ft_printf("faux : |%-12d|\n", 0);
    // dprintf(1, "\n");
	// ft_printf("LE FAUX = %d\n", ft_printf("%5 d\n", 42));
    // dprintf(1, "LE VRAI = %d\n", printf("%5 d\n", 42));
	// ft_printf("faux : %-10 i\n", -2);
    // dprintf(1, "vrai : %-10 i\n", -2);
    // dprintf(1, "\n");
	// ft_printf("faux : %0 10i\n", 42);
    // dprintf(1,"vrai : %0 10i\n", 42);
    // dprintf(1, "\n");
	// ft_printf("faux :%5 i\n", 42);
    // dprintf(1,"vrai :%5 i\n", 42);
    // dprintf(1, "\n");
	// ft_printf("LE VRAI = %d\n", ft_printf("%.3i\n", 42));
    // dprintf(1, "LE FAUX = %d\n", printf("%.3i\n", 42));
    // dprintf(1, "\n");
    // ft_printf("LE VRAI = %d\n", ft_printf("%.20i\n", INT_MAX + 1));
    // dprintf(1, "LE FAUX = %d\n", printf("%.20i\n", INT_MAX + 1));
    // dprintf(1, "\n");
    // ft_printf("LE VRAI = %d\n", ft_printf("%0-10d\n", 42));
    // dprintf(1, "LE FAUX = %d\n", printf("%0-10d\n", 42));
    // dprintf(1, "\n");

    // dprintf(1, "TESTS TYPE U\n");
    // dprintf(1, "\n");
    // dprintf(1, "vrai : |%150u|\n", -100111);
	// ft_printf("faux : |%150u|\n", -100111);
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%-3u|\n", 194);
    // ft_printf("faux : |%-3u|\n", 194);
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%-12u|\n", 17894);
    // ft_printf("faux : |%-12u|\n", 17894);
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%u|\n", -12345612220);
	// ft_printf("faux : |%u|\n", -12345612220);
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%u|\n", -127);
	// ft_printf("faux : |%u|\n", -127);
    // dprintf(1, "\n");
    // dprintf(1, "vrai : |toto et %02u coco %-5u mimi|\n", 19, -20);
	// ft_printf("faux : |toto et %02u coco %-5u mimi|\n", 19, -20);
    // dprintf(1, "\n");
    // dprintf(1, "vrai : |%--.4u|\n", -12);
    // ft_printf("faux : |%--.4u|\n", -12);
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%u|\n", 0);
	// ft_printf("faux : |%u|\n", 0);
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%150u|\n", 1);
	// ft_printf("faux : |%150u|\n", 1);
    // dprintf(1, "\n");
	// ft_printf("faux : |%01.u| |%02.u| |%03.u| |%1.u| |%2.u| |%.1u| |%.2u|\n", 5, 5, 5, 5, 5, 5, 5);
	// dprintf(1, "vrai : |%01.u| |%02.u| |%03.u| |%1.u| |%2.u| |%.1u| |%.2u|\n", 5, 5, 5, 5, 5, 5, 5);
	// dprintf(1, "\n");
	// ft_printf("faux : |%01.u| |%02.u| |%03.u| |%1.u| |%2.u| |%.1u| |%.2u|\n", -40, -20, -4, -120, -578, -9, -8);
	// dprintf(1, "vrai : |%01.u| |%02.u| |%03.u| |%1.u| |%2.u| |%.1u| |%.2u|\n", -40, -20, -4, -120, -578, -9, -8);
	// dprintf(1, "\n");
	// ft_printf("faux : |%1.5u| |%1.u| |%-5.u| |%-5.3u| |%+3.u| |%-.5u| |%8.3u|\n", -4, -2, -4, -1, -5, -9, -8);
	// dprintf(1, "vrai : |%1.5u| |%1.u| |%-5.u| |%-5.3u| |%+3.u| |%-.5u| |%8.3u|\n", -4, -2, -4, -1, -5, -9, -8);
	// dprintf(1, "\n");
	// ft_printf("faux : |%01.u| |%02.u| |%03.u| |%1.u| |%2.u| |%.1u| |%.u|\n", 0, 0, 0, 0, 0, 0, 0);
	// dprintf(1, "vrai : |%01.u| |%02.u| |%03.u| |%1.u| |%2.u| |%.1u| |%.u|\n", 0, 0, 0, 0, 0, 0, 0);
	// dprintf(1, "\n");
	// ft_printf("faux : |%10.u| |%-10.u| |%10.u| |%10.u| |%-10.u| |%5.u| |%-5.u|\n", 0, 0, 0, 0, 0, 0, 0);
	// dprintf(1, "vrai : |%10.u| |%-10.u| |%10.u| |%10.u| |%-10.u| |%5.u| |%-5.u|\n", 0, 0, 0, 0, 0, 0, 0);
	// dprintf(1, "\n");
	// ft_printf("faux : |%1.u| |%2.u| |%3.u| |%1.u| |%2.u| |%.1u| |%.u|\n", 5, 5, 5, 5, 5, 5, 5);
	// dprintf(1, "vrai : |%1.u| |%2.u| |%3.u| |%1.u| |%2.u| |%.1u| |%.u|\n", 5, 5, 5, 5, 5, 5, 5);
	// printf("\n");
	// ft_printf("faux : |%-1.5u| |%+2.4u| |%-3.u| |%-1.u| |%-2.u| |%-3.1u| |%5.2u|\n", 5, 5, 5, 5, 5, 5, 5);
	// dprintf(1, "vrai : |%-1.5u| |%+2.4u| |%-3.u| |%-1.u| |%-2.u| |%-3.1u| |%5.2u|\n", 5, 5, 5, 5, 5, 5, 5);
	// dprintf(1, "\n");
	// ft_printf("faux : |%1.0u| |%2.1u| |%3.0u| |%1.1u| |%2.0u| |%1.1u| |%1.2u|\n", 5, 5, 5, 5, 5, 5, 5);
	// dprintf(1, "vrai : |%1.0u| |%2.1u| |%3.0u| |%1.1u| |%2.0u| |%1.1u| |%1.2u|\n", 5, 5, 5, 5, 5, 5, 5);
	// dprintf(1, "\n");
	// ft_printf("faux : |%1.1u| |%2.0u| |%3.1u| |%1.0u| |%2.1u| |%1.0u| |%0.2u|\n", 15, 300, 140, 9, 7, 15488, 203);
	// dprintf(1, "vrai : |%1.1u| |%2.0u| |%3.1u| |%1.0u| |%2.1u| |%1.0u| |%0.2u|\n", 15, 300, 140, 9, 7, 15488, 203);
	// dprintf(1, "\n");
	// ft_printf("faux : |%1u| |%.10u| |%10u| |%-10u| |%+10u| |%+10.u| |%-10.u|\n", -4, -2, -4, -1, -5, -9, -8);
	// dprintf(1, "vrai : |%1u| |%.10u| |%10u| |%-10u| |%+10u| |%+10.u| |%-10.u|\n", -4, -2, -4, -1, -5, -9, -8);
	// dprintf(1, "\n");
	// ft_printf("faux : |% .10lu| |%-.10u| |%+.10u| |% .10u| |%- .5u| |%+ .5u| |%+ .10u|\n", 4, 2, 4, 1, 5, 9, 8);
	// dprintf(1, "vrai : |% .10lu| |%-.10u| |%+.10u| |% .10u| |%- .5u| |%+ .5u| |%+ .10u|\n", 4, 2, 4, 1, 5, 9, 8);
	// dprintf(1, "\n");
	// ft_printf("faux : |%.10lu| |%-.10u| |%+.10u| |%.10u| |%-.5u| |%+.5u| |%+.10u|\n", 0, 0, 0, 0, 0, 0, 0);
	// dprintf(1, "vrai : |%.10lu| |%-.10u| |%+.10u| |%.10u| |%-.5u| |%+.5u| |%+.10u|\n", 0, 0, 0, 0, 0, 0, 0);
	// dprintf(1, "\n");
	// ft_printf("faux : |%10.lu| |%-10.u| |%10.u| |%10.u| |%-10.u| |%5.u| |%-5.u|\n", 4, 2, 4, 1, 5, 9, 8);
	// dprintf(1, "vrai : |%10.lu| |%-10.u| |%10.u| |%10.u| |%-10.u| |%5.u| |%-5.u|\n", 4, 2, 4, 1, 5, 9, 8);
	// dprintf(1, "vrai : |%*.0u|\n", -45, 0);
	// ft_printf("faux : |%*.0u|\n", -45, 0);
	// printf("##### Tests [-150.*u] : 15 12345 #####\n");
	// printf("|vrai : %150.*u|\n", 15, 12345);
	// ft_printf("|faux : %150.*u|\n", 15, 12345);
	// printf("|vrai : %150.*d|\n", 15, 12345);
	// ft_printf("|faux : %150.*d|\n", 15, 12345);
	// ft_printf("|faux : %150.*u|\n", 15, 12345);
	// printf("|vrai : %150.*d|\n", 15, 12345);
	// printf("|vrai : %15.*s|\n", 15, "lol");
	// ft_printf("|faux : %15.*s|\n", 15, "lol");
	// printf("vrai : |%*.*u|\n", -45, -45, 0);
	// ft_printf("faux : |%*.*u|\n", -45, -45, 0);

	// dprintf(1, "vrai : |%#10X\n", 42);
	// ft_printf("faux : |%#10X\n", 42);
	// ft_printf("faux : %#10x\n", 0);
    // dprintf(1, "vrai : %#10x\n", 0);
    // dprintf(1, "\n");
	// dprintf(1, "vrai : |%#-10x\n", 42);
	// ft_printf("faux : |%#-10x\n", 42);
	// dprintf(1, "vrai : |%#10.4x\n", 42);
	// ft_printf("faux : |%#10.4x\n", 42);



    //  dprintf(1, "TESTS TYPE S\n");
    //  dprintf(1, "\n");
    //  ft_printf("faux : [%.15s] salut\n", NULL);
    //  dprintf(1, "vrai : [%.15s] salut\n", NULL);
    //  dprintf(1, "\n");
	// ft_printf("[faux] = %+s\n", "hello");
    // dprintf(1, "[vrai] = %+s\n", "hello");
	//  dprintf(1, "\n");
    //  ft_printf("[Faux] : hello %50.6 s\n", "my name is Sam");
    //  dprintf(1, "[Vrai] : hello %50.6 s\n", "my name is Sam");
    //  dprintf(1, "\n");
    //  ft_printf("Faux : hello %20.s\n", "");
    //  dprintf(1, "Vrai : hello %20.s\n", "");
    //  dprintf(1, "\n");
    //  ft_printf("Faux : hello %-10.3s\n", "my name is Sam");
    //  dprintf(1, "Vrai : hello %-10.3s\n", "my name is Sam");
    //  dprintf(1, "\n");
    //  ft_printf( "faux : '%*s'\n", 3, "basique");
    //  dprintf(1, "vrai : '%*s'\n", 3, "basique");
    //  dprintf(1, "\n");
    //  ft_printf( "faux : '%*s'\n", -10, "basique");
    //  dprintf(1, "vrai : '%*s'\n", -10, "basique");
    //  ft_printf("Faux segfault : %-10s ---- %10s\n", "lol", "mdr");
    //  dprintf(1, "Vrai segfault : %-10s ---- %10s\n", "lol", "mdr");
    //  dprintf(1, "\n");
    //  ft_printf("Faux : %*s ---- %*s\n", -15, "lol", -15, "mdr");
    //  dprintf(1, "Vrai : %*s ---- %*s\n", -15, "lol", -15, "mdr");
    //  dprintf(1, "\n");
    //  ft_printf("[Faux : %-010.5s] ---- %-10s\n", "lol", "mdr");
    //  dprintf(1, "[Vrai : %-010.5s] ---- %-10s\n", "lol", "mdr");
    //  dprintf(1, "\n");
    //  ft_printf("faux :[%015.5s]\n", "12345678925262515615625614");
    //  dprintf(1, "vrai :[%015.5s]\n", "12345678925262515615625614");
    //  dprintf(1, "\n");
    //  ft_printf("faux = %.*s\n", 6, "SALUT MEC");
    //  dprintf(1, "vrai = %.*s\n", 6, "SALUT MEC");
    //  dprintf(1, "\n");
    //  ft_printf("faux = %*.*s\n", 15, 6, "SALUT MEC");
    //  dprintf(1, "vrai = %*.*s\n", 15, 6, "SALUT MEC");
    //  dprintf(1, "\n");
	//  ft_printf("faux : '%10s'\n", NULL);
    //  dprintf(1, "vrai : '%10s'\n", NULL);
	//  ft_printf("faux : '%2s'\n", NULL);
    //  dprintf(1, "vrai : '%2s'\n", NULL);
	//  ft_printf("faux : '%-2s'\n", NULL);
    //  dprintf(1, "vrai : '%-2s'\n", NULL);
	//  ft_printf("faux : '%10.2s'\n", NULL);
    //  dprintf(1, "vrai : '%10.2s'\n", NULL);
	//  ft_printf("faux : '%-10s'\n", NULL);
    //  dprintf(1, "vrai : '%-10s'\n", NULL);
	//  ft_printf("faux : '%-10.5s'\n", NULL);
    //  dprintf(1, "vrai : '%-10.5s'\n", NULL);
	//  ft_printf("faux : '%-15s'\n", "basique");
    //  dprintf(1, "vrai : '%-15s'\n", "basique");
    //  dprintf(1, "\n");
    //  dprintf(1, "\n");

    

     dprintf(1, "TESTS TYPE C\n");
     dprintf(1, "\n");
	 printf("	#2	    ret    '%d' \n", printf("'%10c %4c'", 56, 111));
	 printf("	#3		ret    '%d' \n", printf("'%*c'", -4, 111));
	 printf("	#4	    ret    '%d' \n", printf("'%-10c'", 0));
	 printf("	#5	    ret    '%d' \n", printf("'%*c'", -10, 0));
	 dprintf(1, "\n");
	 ft_printf("	#2	    ret    '%d' \n", ft_printf("'%10c %4c'", 56, 111));
	 ft_printf("	#3		ret    '%d' \n", ft_printf("'%*c'", -4, 111));
	 ft_printf("	#4	    ret    '%d' \n", ft_printf("'%-10c'", 0));
	 ft_printf("	#5	    ret    '%d' \n", ft_printf("'%*c'", -10, 0));
	 dprintf(1, "\n");
     dprintf(1, "LE VRAI = %d\n", printf("oueche : %-19c%c%c%c\n", 'm', 'a', 'e', 'l'));
     dprintf(1, "LE FAUX = %d\n", ft_printf("oueche : %-19c%c%c%c\n", 'm', 'a', 'e', 'l'));
     dprintf(1, "\n");
     dprintf(1, "LE VRAI = %d\n", printf("%-10.3s\n", "mael"));
     dprintf(1, "LE FAUX = %d\n", ft_printf("%-10.3s\n", "mael"));
     dprintf(1, "\n");
     dprintf(1, "LE VRAI = %d\n", printf("%10d-%10d\n", 1234, 20));
     dprintf(1, "LE FAUX = %d\n", ft_printf("%10d-%10d\n", 1234, 20));
     dprintf(1, "\n");
     dprintf(1, "LE VRAI = %d\n", printf("%.*s", -3, "Hello\n"));
     dprintf(1, "LE FAUX = %d\n", ft_printf("%.*s", -3, "Hello\n"));
     dprintf(1, "\n");
     dprintf(1, "LE VRAI = %d\n", printf("%s\n", "mael"));
     dprintf(1, "LE FAUX = %d\n", ft_printf("%s\n", "mael"));
     dprintf(1, "\n");
     ft_printf("LE VRAI = %d\n", printf("%s\n", ""));
     dprintf(1, "LE FAUX = %d\n", printf("%s\n", ""));
     dprintf(1, "\n");
     ft_printf("LE VRAI = %d\n", ft_printf("%.3i\n", -42));
     dprintf(1, "LE FAUX = %d\n", dprintf(1, "%.3i\n", -42));
     dprintf(1, "\n");
    // ft_printf("LE VRAI = %d\n", ft_printf("%.s\n", 42));
    // dprintf(1, "LE FAUX = %d\n", dprintf(1, "%.s\n", 42));
    // dprintf(1, "\n");


	dprintf(1, "TESTS TYPE P\n");
	
	ft_printf("LE VRAI = %d\n", ft_printf("%6p\n", (void*)42));
    dprintf(1, "LE FAUX = %d\n", printf("%6p\n", (void*)42));
	dprintf(1, "\n");
	ft_printf("LE VRAI = %d\n", ft_printf("%#.36x\n", 42));
    dprintf(1, "LE FAUX = %d\n", printf("%#6.3x\n", 42));
    dprintf(1, "\n");
	ft_printf("LE VRAI = %d\n", ft_printf("%#010x\n", 42));
    dprintf(1, "LE FAUX = %d\n", printf("%#010x\n", 42));
	dprintf(1, "\n");
	ft_printf("LE FAUX = %d\n", ft_printf("%050p\n", (void*)10000));
    dprintf(1, "LE VRAI = %d\n", printf("%050p\n", (void*)10000));
	dprintf(1, "\n");
	ft_printf("LE FAUX = %d\n", ft_printf("%-50p\n", (void*)10000));
    dprintf(1, "LE VRAI = %d\n", printf("%-50p\n", (void*)10000));
	dprintf(1, "\n");
	ft_printf("LE FAUX = %d\n", ft_printf("%050+p\n", (void*)10000));
    dprintf(1, "LE VRAI = %d\n", printf("%050+p\n", (void*)10000));
	dprintf(1, "\n");
	ft_printf("LE FAUX = %d\n", ft_printf("%-50x\n", 10000));
    dprintf(1, "LE VRAI = %d\n", printf("%-50x\n", 10000));
	dprintf(1, "\n");
	ft_printf("LE FAUX = %d\n", ft_printf("%-10p\n", (void*)99999999));
    dprintf(1, "LE VRAI = %d\n", printf("%-10p\n", (void*)99999999));
	dprintf(1, "\n");
	ft_printf("LE FAUX = %d\n", ft_printf("%050p\n", (void*)10000));
    dprintf(1, "LE VRAI = %d\n", printf("%050p\n", (void*)10000));
	dprintf(1, "\n");
	ft_printf("LE FAUX = %d\n", ft_printf("%0-50p\n", (void*)10000));
    printf("LE VRAI = %d\n", printf("%0-50p\n", (void*)10000));
	dprintf(1, "\n");
	
	ft_printf("LE FAUX = %d\n", ft_printf("%-10p\n", (void *)99999999));
    printf("LE VRAI = %d\n", printf("%-10p\n", (void *)99999999));
	dprintf(1, "\n");
	ft_printf("LE FAUX = %d\n", ft_printf("%*p\n", -10, (void *)99999999));
    printf("LE VRAI = %d\n", printf("%*p\n", -10, (void *)99999999));
	dprintf(1, "\n");
	ft_printf("LE FAUX = %d\n", ft_printf("%*d\n", -10, 99999999));
    printf("LE VRAI = %d\n", printf("%*d\n", -10, 99999999));
	dprintf(1, "\n");
	ft_printf("LE FAUX = %d\n", ft_printf("%100.1p\n", (void*)-42));
    printf("LE VRAI = %d\n", printf("%100.1p\n", (void*)-42));
	dprintf(1, "\n");
	ft_printf("LE FAUX = %d\n", ft_printf("% p\n", (void*)1));
    printf("LE VRAI = %d\n", printf("% p\n", (void*)1));
	dprintf(1, "\n");
	dprintf(1, "	#77	printf ret    '%d' \n", dprintf(1, "'%-10p'", (void *)99999999));
	dprintf(1, "	#77	ft_printf ret '%d' \n", ft_printf("'%-10p'", (void *)99999999));
	dprintf(1, "\n");
	dprintf(1, "	#77	printf ret    '%d' \n", dprintf(1, "'%*p'", -10, (void *)99999999));
	dprintf(1, "	#77	ft_printf ret '%d' \n", ft_printf("'%*p'", -10, (void *)99999999));
	dprintf(1, "\n");

	dprintf(1, "	#77	printf ret    '%d' \n", dprintf(1, "'%*p'", 10, (void *)99999999));
	dprintf(1, "	#77	ft_printf ret '%d' \n", ft_printf("'%*p'", 10, (void *)99999999));
	dprintf(1, "\n");
	
	dprintf(1, "	#77	printf ret    '%d' \n", dprintf(1, "'%*p'", 15,
					(void *)-2));
		dprintf(1, "	#77	ft_printf ret '%d' \n", ft_printf("'%*p'", 15,
					(void *)-2));
	dprintf(1, "	#85	printf ret    '%d' \n", dprintf(1, "'%-*.p'", 10, (void *)0));
	dprintf(1, "	#85	ft_printf ret '%d' \n", ft_printf("'%-*.p'", 10, (void *)1));
	dprintf(1, "	#85	printf ret    '%d' \n", dprintf(1, "'%-*.p'", 10, (void *)1));
	dprintf(1, "	#84	printf ret    '%d' \n", dprintf(1, "'%*p'", -10, (void *)99999999));
	dprintf(1, "	#84	ft_printf ret '%d' \n", ft_printf("'%*p'", -10, (void *)99999999));
	dprintf(1, "	#85	ft_printf ret '%d' \n", ft_printf("'%-10.p'", (void *)0));
	dprintf(1, "	#77	printf ret    '%d' \n", dprintf(1, "'%*p'", 18, (void *)-1));
	dprintf(1, "	#77	ft_printf ret '%d' \n", ft_printf("'%*p'", 18, (void *)-1));
	dprintf(1, "\n");
	dprintf(1, "	#77	printf ret    '%d' \n", dprintf(1, "'%18p'", (void *)-1));
	dprintf(1, "	#77	ft_printf ret '%d' \n", ft_printf("'%18p'", (void *)-1));
	dprintf(1, "\n");
	dprintf(1, "	#80	printf ret    '%d' \n", dprintf(1, "'%-5p'", (void *)42));
	dprintf(1, "	#80	ft_printf ret '%d' \n", ft_printf("'%-5p'", (void *)42));
	dprintf(1, "\n");
	dprintf(1, "	#80	printf ret    '%d' \n", dprintf(1, "'%*p'", 0, (void *)0));
	dprintf(1, "	#80	ft_printf ret '%d' \n", ft_printf("'%*p'", 0, (void *)0));
	dprintf(1, "\n");
	dprintf(1, "	#82 printf ret    '%d' \n", dprintf(1, "'%-*p'", 0, (void *)0));
	dprintf(1, "	#82 ft_printf ret '%d' \n", ft_printf("'%-*p'", 0, (void *)0));
	dprintf(1, "	#86	printf ret    '%d' \n", dprintf(1, "'%-10p'", (void *)42));
	dprintf(1, "	#86	ft_printf ret '%d' \n", ft_printf("'%-10p'", (void *)42));
	dprintf(1, "\n");
	dprintf(1, "	#86	printf ret    '%d' \n", dprintf(1, "'%10p'", (void *)42));
	dprintf(1, "	#86	ft_printf ret '%d' \n", ft_printf("'%10p'", (void *)42));
	//dprintf(1, "\n");

	//printf("vrai : %010d\n");
	//ft_printf("faux : %010d\n");
	//int		ret;
	//int 	p_all_01;
	//printf("vrai : %----24p et hello %2p %12p\n", &ret, &p_all_01, NULL);
	//ft_printf("faux : %----24p et hello %2p %12p\n", &ret, &p_all_01, NULL);

	
	//dprintf(1, "\n");



	ft_printf("LE FAUX = %d\n", ft_printf("%-050.55p\n", (void*)10000));
    printf("LE VRAI = %d\n", printf("%-050.55p\n", (void*)10000));
	dprintf(1, "\n");
	ft_printf("LE FAUX = %d\n", ft_printf("%-5 p\n", (void*)42));
    printf("LE VRAI = %d\n", printf("%-5 p\n", (void*)42));
	dprintf(1, "\n");
	ft_printf("LE FAUX = %d\n", ft_printf("%0 50p\n", (void*)10000));
    printf("LE VRAI = %d\n", printf("%0 50p\n", (void*)10000));
	dprintf(1, "\n");


//	64 - ("%p", (void*)1) : FAILED
//65 - ("%p", (void*)-1) : FAILED
//66 - ("%p", (void*)42) : FAILED
//67 - ("%p", (void*)1000) : FAILED
//68 - ("%p", (void*)ULONG_MAX) : FAILED
//69 - ("%p", (void*)ULONG_MAX + 1) : FAILED
    
	//'%*p'", -10,
	////				(void *)99999999))
    dprintf(1, "vrai : %c\n", 'm');
    ft_printf("faux : %c\n", 'm');
    dprintf(1, "\n");
    dprintf(1,"vrai : %10c %4c\n", 56, 111);
    ft_printf("faux : %10c %4c\n", 56, 111);
    dprintf(1, "\n");
	dprintf(1,"vrai : %*c\n", -4, 111);
    ft_printf("faux : %*c\n", -4, 111);
    dprintf(1, "\n");
    dprintf(1, "vrai : %-10c\n", 0);
    ft_printf("faux : %-10c\n", 0);
    dprintf(1, "\n");
    dprintf(1, "vrai : %*c\n", -10, 0);
    ft_printf("faux : %*c\n", -10, 0);
    dprintf(1, "\n");
    dprintf(1, "vrai : %*c\n", -4, 111);
    ft_printf("faux : %*c\n", -4, 111);
    dprintf(1, "\n");
	dprintf(1, "vrai : %-10c\n", 0);
    ft_printf("faux : %-10c\n", 0);
    dprintf(1, "\n");
	dprintf(1, "vrai : %*c\n", -10, 'b');
    ft_printf("faux : %*c\n", -10, 'b');
    dprintf(1, "\n");

    // dprintf(1, "TESTS TYPE %\n");
    dprintf(1, "\n");
     ft_printf("faux : [%%.15s] salut\n", NULL);
     dprintf(1, "vrai : [%%.15s] salut\n", NULL);
     dprintf(1, "\n");
     ft_printf("[Faux] : hello %%050%%.6s\n", "my name is Sam");
     dprintf(1, "[Vrai] : hello %%050%%.6s\n", "my name is Sam");
     dprintf(1, "\n");
     ft_printf("Faux : hello %%%%0004%20.s\n", "");
     dprintf(1, "Vrai : hello %%%%0004%20.s\n", "");
     dprintf(1, "\n");
     ft_printf("faux : titi %---12.5% et%%%0004% et %1%\n");
     dprintf(1, "vrai : titi %---12.5% et%%%0004% et %1%\n");
     dprintf(1, "\n");
     ft_printf("faux : %0005% et %1%\n");
     dprintf(1, "vrai : %0005% et %1%\n");
     dprintf(1, "\n");
     ft_printf("faux : %%\n");
     dprintf(1, "vrai : %%\n");
     dprintf(1, "\n");
     ft_printf("faux : %%%%\n");
     dprintf(1, "vrai : %%%%\n");
     dprintf(1, "\n");
     ft_printf("faux : %c\n", '1');
     dprintf(1, "vrai : %c\n", '1');
     dprintf(1, "\n");
     ft_printf("faux : %c\n", 256 + 48);
     dprintf(1, "vrai : %c\n", 256 + 48);
     dprintf(1, "\n");
     ft_printf("faux : %c%%\n", '3');
     dprintf(1, "vrai : %c%%\n", '3');
     dprintf(1, "\n");
     ft_printf("faux : %c%%\n", '129');
     dprintf(1, "vrai : %c%%\n", '129');
     dprintf(1, "\n");
     ft_printf("faux : %c\n", -129);
     dprintf(1, "vrai : %c\n", -129);
     dprintf(1, "\n");
    //  ft_printf("faux : %s%%\n", "Hello3");
    //  dprintf(1, "vrai : %s%%\n", "Hello3");
    // dprintf(1, "\n");
    // ft_printf("faux : %u\n", UINT_MAX + 1);
    // dprintf(1, "vrai : %u\n", UINT_MAX + 1);
    // dprintf(1, "LE VRAI = %d\n", printf("try for percent = %10%\n"));
    // dprintf(1, "LE FAUX = %d\n", ft_printf("try for percent = %10%\n"));
    // dprintf(1, "\n");

    dprintf(1, "TESTS TYPE xX\n");
    dprintf(1, "\n");
    dprintf(1, "vrai : |%20.0x|\n", 0x123456bc);
	ft_printf("faux : |%20.0x|\n", 0x123456bc);
    dprintf(1, "\n");
	dprintf(1, "vrai : |%.20X\n", UINT_MAX + 1);
	ft_printf("faux : |%.20X\n", UINT_MAX + 1);
    dprintf(1, "\n");
	dprintf(1, "vrai : |%0#.0x %0#x|\n", 12345, 0);
	ft_printf("faux : |%0#.0x %0#x|\n", 12345, 0);
    dprintf(1, "\n");
	dprintf(1, "vrai : |%-6x|\n", 0xdd66);
	ft_printf("faux : |%-6x|\n", 0xdd66);
    dprintf(1, "\n");
	dprintf(1, "vrai : |et %#.X%###.2x|\n",0, 0);
	ft_printf("faux : |et %#.X%###.2x|\n",0, 0);
    dprintf(1, "\n");
	dprintf(1, "vrai : |et %#.X%###.2x|\n",20, 20);
	ft_printf("faux : |et %#.X%###.2x|\n",20, 20);
    dprintf(1, "\n");
	dprintf(1, "vrai : |et %#.X\n",0, 0);
	ft_printf("faux : |et %#.X\n",0, 0);
    dprintf(1, "\n");
	dprintf(1, "vrai : |toto %##.0xet %#.X%###.10x|\n", 0, 0, 0);
	ft_printf("faux : |toto %##.0xet %#.X%###.10x|\n", 0, 0, 0);
    dprintf(1, "\n");
	dprintf(1, "vrai : %+#0 10x\n", 42);
	ft_printf("faux : %+#0 10x\n", 42);
    dprintf(1, "\n");
	dprintf(1, "vrai : %+010x\n", 42);
	ft_printf("faux : %+010x\n", 42);
    dprintf(1, "\n");
    dprintf(1, "vrai : %+-#010x\n", 42);
	ft_printf("faux : %+-#010x\n", 42);
    dprintf(1, "\n");
	dprintf(1, "vrai : |%10x|\n", 0x123456bc);
	ft_printf("faux : |%10x|\n", 0x123456bc);
    dprintf(1, "\n");
	dprintf(1, "vrai : |%#+x|\n", 0);
	ft_printf("faux : |%#+x|\n", 0);
    dprintf(1, "\n");
	dprintf(1, "vrai : |%0#.0x %0#x|\n", 12345, 0);
	ft_printf("faux : |%0#.0x %0#x|\n", 12345, 0);
    dprintf(1, "\n");
	dprintf(1, "vrai : |%-+6x|\n", 0xdd66);
	ft_printf("faux : |%-+6x|\n", 0xdd66);
    dprintf(1, "\n");
	dprintf(1, "vrai : |+toto %##.0xet %#.X%###.1x|\n", 0, 0, 0);
	ft_printf("faux : |+toto %##.0xet %#.X%###.1x|\n", 0, 0, 0);
    dprintf(1, "\n");
	dprintf(1, "vrai : %#010+x\n", 42);
	ft_printf("faux : %#010+x\n", 42);
    dprintf(1, "\n");
	dprintf(1, "vrai : %.10x\n", -42);
	ft_printf("faux : %.10x\n", -42);
    dprintf(1, "\n");
	dprintf(1, "vrai : %#10.10x\n", -42);
	ft_printf("faux : %#10.10x\n", -42);
    dprintf(1, "\n");
	dprintf(1, "vrai : %#.10x\n", -42);
	ft_printf("faux : %#.10x\n", -42);
    dprintf(1, "\n");
	dprintf(1, "vrai : %#10.100p\n", 42);
	ft_printf("faux : %#10.100p\n", 42);
    dprintf(1, "\n");
	dprintf(1, "vrai : %#10.1x\n", 42);
	ft_printf("faux : %#10.1x\n", 42);
    dprintf(1, "\n");
	dprintf(1, "\n");
	dprintf(1, "vrai : %2.0X\n", 0);
	ft_printf("faux : %2.0X\n", 0);
	dprintf(1, "\n");
	dprintf(1, "vrai : %.X\n", 0);
	ft_printf("faux : %.X\n", 0);

	dprintf(1, "\n");
	dprintf(1, "vrai : %#-10x\n", 42);
	ft_printf("faux : %#-10x\n", 42);
	dprintf(1, "\n");
	dprintf(1, "vrai : %#X\n", 42);
	ft_printf("faux : %#X\n", 42);
	dprintf(1, "\n");
	dprintf(1, "vrai : %-10X\n", 42);
	ft_printf("faux : %-10X\n", 42);
	dprintf(1, "\n");
	dprintf(1, "vrai : %#010X\n", 42);
	ft_printf("faux : %#010X\n", 42);
	dprintf(1, "\n");
	dprintf(1, "vrai : %#10.4X\n", 42);
	ft_printf("faux : %#10.4X\n", 42);
	dprintf(1, "\n");
	dprintf(1, "vrai : %#10X\n", 42);
	ft_printf("faux : %#10X\n", 42);
	dprintf(1, "\n");
	dprintf(1, "vrai : %#10x\n", 42);
	ft_printf("faux : %#10x\n", 42);

			// dprintf(1, "\n");
			// ft_printf("	#87	ret    '%d' \n", ft_printf("'%s'", "basique"));
			// // ft_printf("	#88	ret    '%d' \n", ft_printf("'%10s'", NULL));
			// // ft_printf("	#89	ret    '%d' \n", ft_printf("'%2s'", NULL));
			// // ft_printf("	#90	ret    '%d' \n", ft_printf("'%-2s'", NULL));
			// // ft_printf("	#91	ret    '%d' \n", ft_printf("'%10.2s'", NULL));
			// // ft_printf("	#92	ret    '%d' \n", ft_printf("'%-10s'", NULL));
			// // ft_printf("	#93	ret    '%d' \n", ft_printf("'%-10.5s'", NULL));
			// // ft_printf("	#94	ret    '%d' \n", ft_printf("'%-15s'", "basique"));
			// dprintf(1, "\n");
			// printf("\n");
			// printf("	#87	ret    '%d' \n", printf("'%s'", "basique"));
			// // printf("	#88	ret    '%d' \n", printf("'%10s'", NULL));
			// // printf("	#89	ret    '%d' \n", printf("'%2s'", NULL));
			// // printf("	#90	ret    '%d' \n", printf("'%-2s'", NULL));
			// // printf("	#91	ret    '%d' \n", printf("'%10.2s'", NULL));
			// // printf("	#92	ret    '%d' \n", printf("'%-10s'", NULL));
			// // printf("	#93	ret    '%d' \n", printf("'%-10.5s'", NULL));
			// // printf("	#94	ret    '%d' \n", printf("'%-15s'", "basique"));
			// printf("\n");

	// 	printf("[%d]\n", printf("|% d|", 0));
	// ft_printf("[%d]\n", ft_printf("|% d|", 0));
	// printf("[%d]\n", printf("|%08i|", -71));
	// ft_printf("[%d]\n", ft_printf("|%08i|", -71));
	// printf("[%d]\n", printf("|%-7d|", 7789));
	// ft_printf("[%d]\n", ft_printf("|%-7d|", 7789));
	// printf("[%d]\n", printf("|%+12.5d|", 140));
	// ft_printf("[%d]\n", ft_printf("|%+12.5d|", 140));
	// printf("[%d]\n", printf("|%00+10.4d|", 0));
	// ft_printf("[%d]\n", ft_printf("|%00+10.4d|", 0));
	// printf("[%d]\n", printf("|%20.ld et %.4hhi !|", 0x11ffaa147, (signed char)-8));
	// ft_printf("[%d]\n", ft_printf("|%20.ld et %.4hhi !|", 0x11ffaa147, (signed char)-8));
	// printf("[%d]\n", printf("|%u|", -100111));
	// ft_printf("[%d]\n", ft_printf("|%u|", -100111));
	// printf("[%d]\n", printf("|%+++d|", 534));
	// ft_printf("[%d]\n", ft_printf("|%+++d|", 534));
	// printf("[%d]\n", printf("|%.2i|", -10));
	// ft_printf("[%d]\n", ft_printf("|%.2i|", -10));
	// printf("[%d]\n", printf("|%0.23o|", -4440));
	// ft_printf("[%d]\n", ft_printf("|%0.23o|", -4440));
	// printf("[%d]\n", printf("|%o|", -4440));
	// ft_printf("[%d]\n", ft_printf("|%o|", -4440));
	// printf("[%d]\n", printf("|%o|", 25000));
	// ft_printf("[%d]\n", ft_printf("|%o|", 25000));
	// printf("[%d]\n", printf("|%-2i|", -7));
	// ft_printf("[%d]\n", ft_printf("|%-2i|", -7));
	// printf("[%d]\n", printf("|%-3u|", 194));
	// ft_printf("[%d]\n", ft_printf("|%-3u|", 194));
	// printf("[%d]\n", printf("|%-12u|", 17894));
	// ft_printf("[%d]\n", ft_printf("|%-12u|", 17894));
	// printf("[%d]\n", printf("|%llu|", (unsigned long long)-12345612220));
	// ft_printf("[%d]\n", ft_printf("|%llu|", (unsigned long long)-12345612220));
	// printf("[%d]\n", printf("|%03o|", 0));
	// ft_printf("[%d]\n", ft_printf("|%03o|", 0));
	// printf("[%d]\n", printf("|%5d|", -741));
	// ft_printf("[%d]\n", ft_printf("|%5d|", -741));
	// printf("[%d]\n", printf("|%.d|", 0));
	// ft_printf("[%d]\n", ft_printf("|%.d|", 0));
	// printf("[%d]\n", printf("|%d|", 0));
	// ft_printf("[%d]\n", ft_printf("|%d|", 0));
	// printf("[%d]\n", printf("|%#o|", 0));
	// ft_printf("[%d]\n", ft_printf("|%#o|", 0));
	// printf("[%d]\n", printf("|%llo|", (unsigned long long)-127));
	// ft_printf("[%d]\n", ft_printf("|%llo|", (unsigned long long)-127));
	// printf("[%d]\n", printf("|hello % .d this is a test|", 0));
	// ft_printf("[%d]\n", ft_printf("|hello % .d this is a test|", 0));
	// printf("[%d]\n", printf("|%o|", 0));
	// ft_printf("[%d]\n", ft_printf("|%o|", 0));
	// printf("[%d]\n", printf("|toto et %02u coco %-5lu mimi|", 19, (unsigned long)-20));
	// ft_printf("[%d]\n", ft_printf("|toto et %02u coco %-5lu mimi|", 19, (unsigned long)-20));
	// printf("[%d]\n", printf("|%20x|", 0x123456bc));
	// ft_printf("[%d]\n", ft_printf("|%20x|", 0x123456bc));

	// probleme
	printf("[%d]\n", printf("|%0#10.2x %0#x|", 12345, 0));
	ft_printf("[%d]\n", ft_printf("|%0#10.2x %0#x|", 12345, 0));
	printf("\n");
	printf("[%d]\n", printf("|%010#.2x|\n", 12345));
	ft_printf("[%d]\n", ft_printf("|%010#.2x|\n", 12345));
	printf("\n");
	printf("[vrai : %d]\n", printf("%#10.4x\n", 42));
	ft_printf("[faux : %d]\n", ft_printf("%#10.4x\n", 42));
	printf("\n");
	dprintf(1, "[vrai : %d]\n", printf("|%#x|\n", 12345));
	ft_printf("[faux : %d]\n", ft_printf("|%#x|\n", 12345));
	printf("[%d]\n", printf("|test|%#.4d| et |%02d| |%0#-14.0x|!!|", 012, 036, 12587499));
	ft_printf("[%d]\n", ft_printf("|test|%#.4d| et |%02d| |%0#-14.0x|!!|", 012, 036, 12587499));
	printf("[%d]\n", printf("|%0#10.0x|", 0));
	ft_printf("[%d]\n", ft_printf("|%0#10.0x|", 0));
	ft_printf("|%#01.x| |%#02.x| |%-#03.x| |%#1.x| |%#2.x| |%#-.1x| |%#-.2x|\n", 0, 0, 0, 0, 0, 0, 0);
	printf("|%#01.x| |%#02.x| |%-#03.x| |%#1.x| |%#2.x| |%#-.1x| |%#-.2x|\n", 0, 0, 0, 0, 0, 0, 0);
	ft_printf("|%#0+10x| |%#0+10.x| |%#0-10.x|\n",5, 9, 8);
	printf("|%#0+10x| |%#0+10.x| |%#0-10.x|\n", 5, 9, 8);
	printf("\n");
	ft_printf("|%#0-10.x|\n", 8);
	printf("|%#0-10.x|\n", 8);
	printf("\n");
	printf("|%0*.*%|\n", 5, -5);
	ft_printf("|%0*.*%|\n", 5, -5);
	printf("\n");
	printf("[%d]\n", printf("|%-*.*s|\n", 150, 15, "42"));
	printf("[%d]\n", ft_printf("|%-*.*s|\n", 150, 15, "42"));

	// printf("[%d]\n", printf("|%-150.15u|\n", 12345));
	// ft_printf("[%d]\n", ft_printf("|%-150.15u|\n", 12345));

	// printf("##### Tests [*.5u] : -15 INT_MAX #####\n");
	// printf("[%d]\n", printf("|%*.5u|\n", -15, INT_MAX));
	// ft_printf("[%d]\n", ft_printf("|%*.5u|\n", -15, INT_MAX));
	// printf("\n");
	// printf("##### Tests [-*.5u] : -15 INT_MAX #####\n");
	// printf("[%d]\n", printf("|%-*.5u|\n", -15, INT_MAX));
	// ft_printf("[%d]\n", ft_printf("|%-*.5u|\n", -15, INT_MAX));

	// printf("[%d]\n", printf("|%*.*d|\n", 0, -45, stre[5]));
	// ft_printf("[%d]\n", ft_printf("|%*.*d|\n", 0, -45, stre[5]));
	// printf("\n");

	
	//printf("[%d]\n", printf("|%*.*d|\n", -45, 0, stre[5]));
	//ft_printf("[%d]\n", ft_printf("|%*.*d|\n", -45, 0, stre[5]));
	

	//printf("[%d]\n", printf("|%-6x|", 0xdd66));
	//ft_printf("[%d]\n", ft_printf("|%-6x|", 0xdd66));
	//printf("[%d]\n", printf("|toto %##.0xet %#.X%###.1x|", 0, 0, 0));
	//ft_printf("[%d]\n", ft_printf("|toto %##.0xet %#.X%###.1x|", 0, 0, 0));
	//printf("[%d]\n", printf("|%--.4u|", -12));
	//ft_printf("[%d]\n", ft_printf("|%--.4u|", -12));
	//printf("[%d]\n", printf("|%u|", 0));
	//ft_printf("[%d]\n", ft_printf("|%u|", 0));
	//printf("[%d]\n", printf("|%4u|", 1));
	//ft_printf("[%d]\n", ft_printf("|%4u|", 1));
	//printf("[%d]\n", printf("|%04d|", 0));
	//ft_printf("[%d]\n", ft_printf("|%04d|", 0));
	//printf("[%d]\n", printf("|%-12i et |%--2.4s| |%24s| !\n|", 0, NULL, "coco"));
	//ft_printf("[%d]\n", ft_printf("|%-12i et |%--2.4s| |%24s| !\n|", 0, NULL, "coco"));
	//printf("[%d]\n", printf("|%-12d|", 0));
	//ft_printf("[%d]\n", ft_printf("|%-12d|", 0));

	//printf("[%d]\n", printf("|%#x|", 0x78aa));
	//ft_printf("[%d]\n", ft_printf("|%#x|", 0x78aa));
	//printf("[%d]\n", printf("|%.0x|", 0));
	//ft_printf("[%d]\n", ft_printf("|%.0x|", 0));
	//printf("[%d]\n", printf("|test%---10.6x et |%01hhX| !!\n|", 0xaabb, (unsigned char)0));
	//ft_printf("[%d]\n", ft_printf("|test%---10.6x et |%01hhX| !!\n|", 0xaabb, (unsigned char)0));
	
	//printf("[%d]\n", printf("|cc%#.4X et %#0012x %#04hX !!|", 0xaef, 0xe, (unsigned short)0));
	//ft_printf("[%d]\n", ft_printf("|cc%#.4X et %#0012x %#04hX !!|", 0xaef, 0xe, (unsigned short)0));

	// --- X


	//dprintf(1, "---- Hexa ----\n\n");	
	//ft_printf("|%#01.x| |%02.x| |%-03.x| |%1.x| |%2.x| |%-.1x| |%-.2x|\n", 5, 5, 5, 5, 5, 5, 5);
	//printf("|%#01.x| |%02.x| |%-03.x| |%1.x| |%2.x| |%-.1x| |%-.2x|\n", 5, 5, 5, 5, 5, 5, 5);
	//printf("\n");
	//ft_printf("|%#01.x| |%#02.x| |%03.x| |%1.x| |%2.x| |%.1x| |%.2x|\n", -45, 20, 96000, 2, -1, 60, -47);
	//printf("|%#01.x| |%#02.x| |%03.x| |%1.x| |%2.x| |%.1x| |%.2x|\n", -45, 20, 96000, 2, -1, 60, -47);
	//printf("\n");
	//ft_printf("|%#01.X| |%#02.X| |%03.X| |%1.X| |%2.X| |%.1X| |%.2X|\n", -45, 20, 96000, 2, -1, 60, -47);
	//printf("|%#01.X| |%#02.X| |%03.X| |%1.X| |%2.X| |%.1X| |%.2X|\n", -45, 20, 96000, 2, -1, 60, -47);
	//printf("\n");
	//printf("\n");
	//ft_printf("|%#01.x| |%02.x| |%-03.x| |%1.x| |%2.x| |%-.1x| |%-.2x|\n", 0, 0, 0, 0, 0, 0, 0);
	//printf("|%#01.x| |%02.x| |%-03.x| |%1.x| |%2.x| |%-.1x| |%-.2x|\n", 0, 0, 0, 0, 0, 0, 0);
	//printf("\n");
	//ft_printf("|%10.x| |%-10.x| |%10.x| |%10.x| |%-10.x| |%5.x| |%-5.x|\n", 0, 0, 0, 0, 0, 0, 0);
	//printf("|%10.x| |%-10.x| |%10.x| |%10.x| |%-10.x| |%5.x| |%-5.x|\n", 0, 0, 0, 0, 0, 0, 0);
	//printf("\n");
	//ft_printf("|%+1.1x| |%+2.0x| |%+3.1x| |%+1.0x| |%+2.1x| |%+1.0x| |%+0.2x|\n", 15, 300, 140, 9, 7, 15488, 203);
	//printf("|%+1.1x| |%+2.0x| |%+3.1x| |%+1.0x| |%+2.1x| |%+1.0x| |%+0.2x|\n", 15, 300, 140, 9, 7, 15488, 203);
	//ft_printf("%d\n", ft_printf("1hexa 1 %x hexa 2 %x\n", 42, -42));
	//printf("%d\n", printf("1hexa 1 %x hexa 2 %x\n", 42, -42));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("2hexa 1 |%   x| hexa 2 % x\n", 42, -42));
	//printf("%d\n", printf("2hexa 1 |%   x| hexa 2 % x\n", 42, -42));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("4hexa 1 %12x hexa 2 %12x\n", 42, -42));
	//printf("%d\n", printf("4hexa 1 %12x hexa 2 %12x\n", 42, -42));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("4hexa 1 |%-12x| hexa 2 |%-12x|\n", 42, -42));
	//printf("%d\n", printf("4hexa 1 |%-12x| hexa 2 |%-12x|\n", 42, -42));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("5hexa 1 %0x hexa 2 %0x\n", 42, -42));
	//printf("%d\n", printf("5hexa 1 %0x hexa 2 %0x\n", 42, -42));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("6hexa 1 %012x hexa 2 %012x\n", 42, -42));
	//printf("%d\n", printf("6hexa 1 %012x hexa 2 %012x\n", 42, -42));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("7hexa 1 %-012x hexa 2 %012x\n", 42, -42));
	//printf("%d\n", printf("7hexa 1 %-012x hexa 2 %012x\n", 42, -42));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("9hexa 1 %+x hexa 2 %+x\n", 42, 6, -42, 6));
	//printf("%d\n", printf("9hexa 1 %+x hexa 2 %+x\n", 42, 6, -42, 6));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("10hexa 1 %+12x hexa 2 %+12x\n", 42, 6, -42, 6));
	//printf("%d\n", printf("10hexa 1 %+12x hexa 2 %+12x\n", 42, 6, -42, 6));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("12hexa 1 %-+5x hexa 2 %-+5x\n", 42, -42));
	//printf("%d\n", printf("12hexa 1 %-+5x hexa 2 %-+5x\n", 42, -42));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("13hexa 1 %-+05x hexa 2 %-+05x\n", 42, -42));
	//printf("%d\n", printf("13hexa 1 %-+05x hexa 2 %-+05x\n", 42, -42));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("14hexa 1 %+-5x hexa 2 %+-5x\n", 42, -42));
	//printf("%d\n", printf("14hexa 1 %+-5x hexa 2 %+-5x\n", 42, -42));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("15hexa 1 %.x hexa 2 %.x\n", 42, -42));
	//printf("%d\n", printf("15hexa 1 %.x hexa 2 %.x\n", 42, -42));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("16hexa 1 %.6x hexa 2 %.6x\n", 42, -42));
	//printf("%d\n", printf("16hexa 1 %.6x hexa 2 %.6x\n", 42, -42));
	//ft_printf("%d\n", ft_printf("1hexa-maj 1 %X hexa-maj 2 %X\n", 42, -42));
	//printf("%d\n", printf("1hexa-maj 1 %X hexa-maj 2 %X\n", 42, -42));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("2hexa-maj 1 %   X hexa-maj 2 % X\n", 42, -42));
	//printf("%d\n", printf("3hexa-maj 1 %   X hexa-maj 2 % X\n", 42, -42));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("4hexa-maj 1 %12X hexa-maj 2 %12X\n", 42, -42));
	//printf("%d\n", printf("4hexa-maj 1 %12X hexa-maj 2 %12X\n", 42, -42));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n", 42, -42));
	//printf("%d\n", printf("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n", 42, -42));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("5hexa-maj 1 %0X hexa-maj 2 %0X\n", 42, -42));
	//printf("%d\n", printf("5hexa-maj 1 %0X hexa-maj 2 %0X\n", 42, -42));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("6hexa-maj 1 %012X hexa-maj 2 %012X\n", 42, -42));
	//printf("%d\n", printf("6hexa-maj 1 %012X hexa-maj 2 %012X\n", 42, -42));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("7hexa-maj 1 %-012X hexa-maj 2 %012X\n", 42, -42));
	//printf("%d\n", printf("7hexa-maj 1 %-012X hexa-maj 2 %012X\n", 42, -42));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("9hexa-maj 1 %+X hexa-maj 2 %+X\n", 42, 6, -42, 6));
	//printf("%d\n", printf("9hexa-maj 1 %+X hexa-maj 2 %+X\n", 42, 6, -42, 6));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("10hexa-maj 1 %+12X hexa-maj 2 %+12X\n", 42, 6, -42, 6));
	//printf("%d\n", printf("10hexa-maj 1 %+12X hexa-maj 2 %+12X\n", 42, 6, -42, 6));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("12hexa-maj 1 %-+5X hexa-maj 2 %-+5X\n", 42, -42));
	//printf("%d\n", printf("12hexa-maj 1 %-+5X hexa-maj 2 %-+5X\n", 42, -42));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("13hexa-maj 1 %-+05X hexa-maj 2 %-+05X\n", 42, -42));
	//printf("%d\n", printf("13hexa-maj 1 %-+05X hexa-maj 2 %-+05X\n", 42, -42));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("14hexa-maj 1 %+-5X hexa-maj 2 %+-5X\n", 42, -42));
	//printf("%d\n", printf("14hexa-maj 1 %+-5X hexa-maj 2 %+-5X\n", 42, -42));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("15hexa-maj 1 %.X hexa-maj 2 %.X\n", 42, -42));
	//printf("%d\n", printf("15hexa-maj 1 %.X hexa-maj 2 %.X\n", 42, -42));
	//printf("\n");
	//ft_printf("%d\n", ft_printf("16hexa-maj 1 %.6X hexa-maj 2 %.6X\n", 42, -42));
	//printf("%d\n", printf("16hexa-maj 1 %.6X hexa-maj 2 %.6X\n", 42, -42));


	//dprintf(1, "##### Tests [p] #####\n");
	//printf("|%p|\n", NULL);
	//ft_printf("|%p|\n", NULL);

	//dprintf(1, "##### Tests [p] #####\n");
	//printf("vrai : |%p|\n", str);
	//ft_printf("faux : |%p|\n", str);
	
	//printf("##### Tests [-p] #####\n");
	//printf("|%-p|\n", str);
	//ft_printf("|%-p|\n", str);
	
	//dprintf(1, "##### Tests [*p] : 6 #####\n");
	//printf("|%*p|\n", 6, str);
	//ft_printf("|%*p|\n", 6, str);
	
	//dprintf(1, "##### Tests [-*p] : 6 #####\n");
	//printf("|%-*p|\n", 6, str);
	//ft_printf("|%-*p|\n", 6, str);
	
	//dprintf(1, "##### Tests [-------------*p] : 6 #####\n");
	//printf("|%-------------*p|\n", 6, str);
	//ft_printf("|%-------------*p|\n", 6, str);
	
	//dprintf(1, "##### Tests [3p] #####\n");
	//printf("|%3p|\n", str);
	//ft_printf("|%3p|\n", str);
	
	//dprintf(1, "##### Tests [10p] #####\n");
	//printf("|%10p|\n", str);
	//ft_printf("|%10p|\n", str);

	//dprintf(1, "##### Tests [-3p] #####\n");
	//printf("|%-3p|\n", str);
	//ft_printf("|%-3p|\n", str);
	
	//dprintf(1, "##### Tests [-10p] #####\n");
	//printf("|%-10p|\n", str);
	//ft_printf("|%-10p|\n", str);

	//dprintf(1, "##### Tests [-20p] #####\n");
	//printf("|%-20p|\n", "test");
	//ft_printf("|%-20p|\n", "test");
	
	//dprintf(1, "##### Tests [*p] : -3 #####\n");
	//printf("|%*p|\n", -3, str);
	//ft_printf("|%*p|\n", -3, str);
	
	//dprintf(1, "##### Tests [*p] : -6 #####\n");
	//printf("|%*p|\n", -6, str);
	//ft_printf("|%*p|\n", -6, str);

	//dprintf(1, "##### Tests [---*p] : 0 test #####\n");
    //printf("|%---*p|\n", 0, "test");
	//ft_printf("|%---*p|\n", 0, "test");

	//dprintf(1, "##### Tests [*p] : 0 test #####\n");
    //printf("|%*p|\n", 0, "test");
	//ft_printf("|%*p|\n", 0, "test");

	//dprintf(1, "##### Tests [*p] : 0 9 #####\n");
    //printf("|%*p|\n", 0, "9");
	//ft_printf("|%*p|\n", 0, "9");

	//dprintf(1, "##### Tests [20.p] : test #####\n");
    //printf("|%20.p|\n", "test");
	//ft_printf("|%20.p|\n", "test");

	//dprintf(1, "\n##### Tests [*.p] : 0 test #####\n");
   	//printf("|%*.p|\n", 0, "test");
	//ft_printf("|%*.p|\n", 0, "test");

	//dprintf(1, "##### Tests [*.p] : 0 NULL #####\n");
    //dprintf(1, "vrai : |%*.p|\n", 0, NULL);
	//ft_printf("faux : |%*.p|\n", 0, NULL);

	//dprintf(1, "##### Tests [.p] : NULL #####\n");
    //dprintf(1, "|%.p|\n", NULL);
	//ft_printf("|%.p|\n", NULL);

	//dprintf(1, "##### Tests [.p] : NULL #####\n");
    //dprintf(1, "|%0p|\n", NULL);
	//ft_printf("|%0p|\n", NULL);

	//dprintf(1, "##### Tests [*p] : 0 NULL #####\n");
    //dprintf(1,"vrai : |%*p|\n", 0, NULL);
	//ft_printf("faux : |%*p|\n", 0, NULL);

	//dprintf(1, "##### Tests [*p] : 0 NULL #####\n");
    //dprintf(1,"vrai : |%*p|\n", 0, (void*)42);
	//ft_printf("faux : |%*p|\n", 0, (void*)42);
	//dprintf(1, "\n");
	//dprintf(1, "##### Tests [54p] : NULL #####\n");
    //dprintf(1, "|%54p|\n", (void*)42);
	//ft_printf("|%54p|\n", (void*)42);

	// dprintf(1, "##### Tests [54p] : NULL #####\n");
    // dprintf(1, "%#.22X et %020.14jx\n", 0xff1144ff1144, 0xffaabbccee);
	// ft_printf("%#.22X et %020.14jx\n", 0xff1144ff1144, 0xffaabbccee);

	//dprintf(1, "##### Tests [54p] : NULL #####\n");
    //dprintf(1, "|%54p|\n", NULL);
	//ft_printf("|%54p|\n", NULL);

	//dprintf(1, "##### Tests [*p] : 20 afiojfjadsifjaiosjf #####\n");
    //dprintf(1, "vrai : |%*.10p|\n", 20, "afiojfjadsifjaiosjf");
	//ft_printf("faux : |%*.10p|\n", 20, "afiojfjadsifjaiosjf");

	//dprintf(1, "##### Tests [*p] : 20 afiojfjadsifjaiosjf #####\n");
    //dprintf(1, "vrai : |%-*.10p|\n", 20, "afiojfjadsifjaiosjf");
	//ft_printf("faux : |%-*.10p|\n", 20, "afiojfjadsifjaiosjf");


	//dprintf(1, "##### Tests [*p] : 20 afiojfjadsifjaiosjf #####\n");
	//dprintf(1, "vrai : |%20p|\n", "afiojfjadsifjaiosjf");
	//ft_printf("faux : |%20p|\n", "afiojfjadsifjaiosjf");
    //dprintf(1, "vrai : |%*.20p|\n", 20, "afiojfjadsifjaiosjf");
	//ft_printf("faux : |%*.20p|\n", 20, "afiojfjadsifjaiosjf");

	//dprintf(1, "##### Tests [*.p] : -15 oui #####\n");
	//dprintf(1, "|%*.p|\n", -15, "oui");
	//ft_printf("|%*.p|\n", -15, "oui");
	

	//dprintf(1, "##### Tests [-*.p] : -15 oui #####\n");
	//printf( "|%-*.p|\n", -15, "oui");
	//ft_printf("|%-*.p|\n", -15, "oui");

	//dprintf(1, "vrai : %d\n", dprintf(1, "|%s|\n", NULL));
	//ft_printf("faux : %d\n", ft_printf("|%s|\n", NULL));
	//ft_printf("%d\n", ft_printf("|%.s|\n", 42));
	//dprintf(1, "%d\n", dprintf(1, "|%.s|\n", 42));
	//ft_printf("%d\n", ft_printf("|%.s|\n", 42));
	//printf("|%.s|\n", 42);

	//dprintf(1, "|%030.*%|\n", -45);
	//ft_printf("|%030.*%|\n", -45);
	//dprintf(1, "|%030.45%|\n");
	//ft_printf("|%030.45%|\n");

	//dprintf(1, "|%30.*%|\n", 2);
	//ft_printf("|%30.*%|\n", 2);

	//dprintf(1, "|%30.*%|\n", 2);
	//ft_printf("|%30.*%|\n", 2);

	//dprintf(1, "|%00000-000002%|\n");
	//ft_printf("|%00000-000002%|\n");
	//dprintf(1, "\n");
	//dprintf(1, "vrai : |%00000-000005%|\n");
	//ft_printf("faux : |%00000-000005%|\n");
	//dprintf(1, "\n");
	//dprintf(1, "vrai : |%00-00005%|\n");
	//ft_printf("faux : |%00-00005%|\n");
	//dprintf(1, "\n");
	//dprintf(1, "vrai : |%00005%|\n");
	//ft_printf("faux : |%00005%|\n");

	//dprintf(1, "vrai : |%-7c %007d%-10.2s!!\n", 0xd777, 0x45, "L");
	//ft_printf("faux : |%-7c %007d%-10.2s!!\n", 0xd777, 0x45, "L");


	//printf("##### Tests [020.*'percent'] : -45 #####\n");
	//real = printf("|%020.*%|\n", -45);
	//mine = ft_printf("|%020.*%|\n", -45);
	//ft_return_val(mine, real, main);

	//printf("##### Tests [--0--0--00-00-02.10'percent'] #####\n");
 	//dprintf(1, "vrai : |%--0--0--00-00-02.10%|\n");
	//ft_printf("faux : |%--0--0--00-00-02.10%|\n");
	//ft_return_val(mine, real, main);

	printf("ultimate1 %*d        %*i\n", 500, 0, 10, 10);
	ft_printf("ultimate1 %*d        %*i\n", 500, 0, 10, 10);
	printf("vrai : %d\n", printf("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey", 10, 547, 1, 300, 10000, -55, 1, -60));
	ft_printf("%d\n", ft_printf("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey", 10, 547, 1, 300, 10000, -55, 1, -60));
	printf("vrai : %d\n",printf("ultimate3 %*.*d %*.*s\n", 1, 50, 5000, 1, 0, "hey"));
	ft_printf("faux : %d\n",ft_printf("ultimate3 %*.*d %*.*s\n", 1, 50, 5000, 1, 0, "hey"));
	printf("vrai : %d\n", printf("ultimate4 %*.*x %*.*X\n", 1, 50, 5000, 1, 0, 10));
	dprintf(1, "faux : %d\n", ft_printf("ultimate4 %*.*x %*.*X\n", 1, 50, 5000, 1, 0, 10));
	printf("vrai : %d\n", printf("ultimate5 %*.*u\n", 1, 50, 5000));
	ft_printf("vrai : %d\n", ft_printf("ultimate5 %*.*u\n", 1, 50, 5000));
	printf("vrai : %d\n", printf("%.3s", NULL));
	ft_printf("faux : %d\n", ft_printf("%.3s", NULL));

	printf("toto%.0d et %+.i et  %   .0d !!!\n", 0, 0, 0);
	ft_printf("toto%.0d et %+.i et  %   .0d !!!\n", 0, 0, 0);

	printf("vrai : %0#10.0x\n", 20);
	ft_printf("faux : %0#10.0x\n", 20);

	//toto%.0d et %+.i et  %   .0D !!!, 0, 0, 0
	//%U, 231009999
	//%.0U, 0
	//toto et %02u coco %-5lu mimi, 19, (unsigned long)-20
	//\ntoto et %00009U%-2lu mimi et titi%--14u, 0, (unsigned long)14, 200
	//%0#10.0x %0#x, 12345, 0
	//%0#10.0x, 0
	//%C, 0x6f
	//%8C et coco %C titi %lc, 3250, 0x11ffff, 'a'
	//%---8C et coco %1C titi, 3250, 0xffff
	//%6C et coco %C titi %C tyty, 3250, 0xd800, 'u'
	//yo%2C%-12lc et %C titi %C tyty, 'u', 254, 256, 'a'

	//dprintf(1, "%d\n", dprintf(1, "vrai : %--.5p\n", 42));
	//ft_printf("%d\n", ft_printf("faux : %--.5p\n", 42));


	
	//printf("\nvrai : %d\n", printf("%+0 10d", 40));
	//ft_printf("\nfaux : %d\n", ft_printf("%+0 10d", 40));
	//printf("\nvrai : %d\n", printf("0.47d", -481));
	//ft_printf("\nfaux : %d\n", ft_printf("0.47d", -481));
	//%.15p
	//printf("\nvrai : %d\n", printf("%.15p %.15p", 0, -1));
	//ft_printf("\nfaux : %d\n", ft_printf("%.15p %.15p", 0, -1));
	//printf("\nvrai : %d\n", printf("%5.2s", "loooolekjbjbjkl"));
	//ft_printf("\nfaux : %d\n", ft_printf("%5.2s", "loooolekjbjbjkl"));


	//printf("vrai : %d\n", printf("ultimate5 %- * .*d\n", 10, 10, 10));
	//ft_printf("faux : %d\n", ft_printf("ultimate5 %- * .*d\n", 10, 10, 10));
	
    return (0);
}