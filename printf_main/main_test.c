/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlepart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 19:26:04 by rlepart           #+#    #+#             */
/*   Updated: 2020/02/18 19:41:56 by rlepart          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>

int			ft_printf(const char *str, ...) __attribute__((format(printf,1,2)));

static int	is_in(char c, char **arg, int n)
{
	int	i;
	int	j;

	i = 1;
	while (i < n)
	{
		j = 0;
		while (arg[i][j])
		{
			if (arg[i][j] == c)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int			main(int n, char **arg)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = -1;
	b = -1;
	c = -1;
	d = -1;
	if (is_in('a', arg, n))
	{
		if (!is_in('1', arg, n))
		{
			printf("\n");
			printf("    #0      ret    '%d' \n",
					printf("%u %x %X %c %d %i %p %s %p %d %u %x %X",
						150, 150, 150, '0', 150, 150, NULL, "ah",
						NULL, 150, 2879, 20182, 96362));
			printf("	#1	    ret    '%d' \n", printf(""));
			printf("\n");
		}
		else
		{
			dprintf(1, "\n");
			ft_printf("    #0      ret    '%d' \n",
					ft_printf("%u %x %X %c %d %i %p %s %p %d %u %x %X",
						150, 150, 150, '0', 150, 150, NULL, "ah",
						NULL, 150, 2879, 20182, 96362));
			ft_printf("	#1	    ret    '%d' \n", ft_printf(""));
			dprintf(1, "\n");
		}
	}
	if (is_in('a', arg, n) || is_in('c', arg, n))
	{
		if (!is_in('1', arg, n))
		{
			printf("\n");
			printf("	#2	    ret    '%d' \n", printf("'%10c %4c'", 56, 111));
			printf("	#3		ret    '%d' \n", printf("'%*c'", -4, 111));
			printf("	#4	    ret    '%d' \n", printf("'%-10c'", 0));
			printf("	#5	    ret    '%d' \n", printf("'%*c'", -10, 0));
			printf("\n");
		}
		else
		{
			dprintf(1, "\n");
			ft_printf("	#2	    ret    '%d' \n",
					ft_printf("'%10c %4c'", 56, 111));
			ft_printf("	#3		ret    '%d' \n", ft_printf("'%*c'", -4, 111));
			ft_printf("	#4	    ret    '%d' \n", ft_printf("'%-10c'", 0));
			ft_printf("	#5	    ret    '%d' \n", ft_printf("'%*c'", -10, 0));
			dprintf(1, "\n");
		}
	}
	if (is_in('a', arg, n) || is_in('%', arg, n))
	{
		if (is_in('1', arg, n))
		{
			dprintf(1, "\n");
			ft_printf("	#6	ret    '%d' \n", ft_printf("'%10% %4%'"));
			ft_printf("	#7	ret    '%d' \n", ft_printf("'%010%'"));
			ft_printf("	#8	ret    '%d' \n", ft_printf("'%-10%'"));
			ft_printf("	#9	ret    '%d' \n", ft_printf("'%*%'", -10));
			dprintf(1, "\n");
		}
		else
		{
			printf("\n");
			printf("	#6	ret    '%d' \n", printf("'%10% %4%'"));
			printf("	#7	ret    '%d' \n", printf("'%010%'"));
			printf("	#8	ret    '%d' \n", printf("'%-10%'"));
			printf("	#9	ret    '%d' \n", printf("'%*%'", -10));
			printf("\n");
		}
	}
	if (is_in('a', arg, n) || is_in('d', arg, n))
	{
		if (is_in('1', arg, n))
		{
			dprintf(1, "\n");
			ft_printf("	#10	ret    '%d' \n", ft_printf("'%d'", 0));
			ft_printf("	#11	ret    '%d' \n", ft_printf("'%d'", 2147483647));
			ft_printf("	#12	ret    '%d' \n", ft_printf("'%.2d'", -0));
			ft_printf("	#13	ret    '%d' \n", ft_printf("'%0*d'", -10, 42));
			ft_printf("	#14	ret    '%d' \n", ft_printf("'%-*d'", -9, -87));
			dprintf(1, "\n");
		}
		else
		{
			printf("\n");
			printf("	#10	ret    '%d' \n", printf("'%d'", 0));
			printf("	#11	ret    '%d' \n", printf("'%d'", 2147483647));
			printf("	#12	ret    '%d' \n", printf("'%.2d'", -0));
			printf("	#13	ret    '%d' \n", printf("'%0*d'", -10, 42));
			printf("	#14	ret    '%d' \n", printf("'%-*d'", -9, -87));
			printf("\n");
		}
	}
	if (is_in('a', arg, n) || is_in('i', arg, n))
	{
		if (is_in('1', arg, n))
		{
			dprintf(1, "\n");
			ft_printf("	#15	ret    '%d' \n", ft_printf("'%02i'", -1));
			ft_printf("	#16	ret    '%d' \n", ft_printf("'%i'", 2147483647));
			ft_printf("	#17	ret    '%d' \n", ft_printf("'%-10.2i'", -0));
			ft_printf("	#18	ret    '%d' \n", ft_printf("'%-2i'", 0));
			ft_printf("	#19	ret    '%d' \n", ft_printf("'%i'", -1));
			ft_printf("	#20	ret    '%d' \n", ft_printf("'%-----10i'", 0));
			ft_printf("	#21	ret    '%d' \n", ft_printf("'%010.*i'", 15, -1));
			ft_printf("	#22	ret    '%d' \n", ft_printf("'%15.10i'", -1));
			ft_printf("	#23	ret    '%d' \n", ft_printf("'%010i'", -1));
			ft_printf("	#24	ret    '%d' \n", ft_printf("'%.0i'", 0));
			ft_printf("	#25	ret    '%d' \n", ft_printf("'%01.0i'", 0));
			ft_printf("	#26	ret    '%d' \n", ft_printf("'%02.1i'", 0));
			ft_printf("	#27	ret    '%d' \n", ft_printf("'%.*i'", -1, 0));
			ft_printf("	#28	ret    '%d' \n", ft_printf("'%03.0i'", -1));
			dprintf(1, "\n");
		}
		else
		{
			printf("\n");
			printf("	#15	ret    '%d' \n", printf("'%02i'", -1));
			printf("	#16	ret    '%d' \n", printf("'%i'", 2147483647));
			printf("	#17	ret    '%d' \n", printf("'%-10.2i'", -0));
			printf("	#18	ret    '%d' \n", printf("'%-2i'", 0));
			printf("	#19	ret    '%d' \n", printf("'%i'", -1));
			printf("	#20	ret    '%d' \n", printf("'%-----10i'", 0));
			printf("	#21	ret    '%d' \n", printf("'%010.*i'", 15, -1));
			printf("	#22	ret    '%d' \n", printf("'%15.10i'", -1));
			printf("	#23	ret    '%d' \n", printf("'%010i'", -1));
			printf("	#24	ret    '%d' \n", printf("'%.0i'", 0));
			printf("	#25	ret    '%d' \n", printf("'%01.0i'", 0));
			printf("	#26	ret    '%d' \n", printf("'%02.1i'", 0));
			printf("	#27	ret    '%d' \n", printf("'%.*i'", -1, 0));
			printf("	#28	ret    '%d' \n", printf("'%03.0i'", -1));
			printf("\n");
		}
	}
	if (is_in('a', arg, n) || is_in('u', arg, n))
	{
		if (is_in('1', arg, n))
		{
			dprintf(1, "\n");
			ft_printf("	#29	ret    '%d' \n", ft_printf("'%u'", 0));
			ft_printf("	#30	ret    '%d' \n", ft_printf("'%u'", 2147483647));
			ft_printf("	#31	ret    '%d' \n", ft_printf("'%u'", -0));
			ft_printf("	#32	ret    '%d' \n", ft_printf("'%u'", 42));
			ft_printf("	#33	ret    '%d' \n", ft_printf("'%u'", -1));
			ft_printf("	#34	ret    '%d' \n", ft_printf("'%-15u'", -1));
			ft_printf("	#35	ret    '%d' \n", ft_printf("'%010.*u'", 15, -1));
			ft_printf("	#36	ret    '%d' \n", ft_printf("'%15.10u'", -1));
			ft_printf("	#37	ret    '%d' \n", ft_printf("'%010u'", -1));
			ft_printf("	#38	ret    '%d' \n", ft_printf("'%.0u'", 0));
			ft_printf("	#39	ret    '%d' \n", ft_printf("'%.0u'", -1));
			ft_printf("	#40	ret    '%d' \n", ft_printf("'%.*u'", -10, -2));
			ft_printf("	#41	ret    '%d' \n", ft_printf("'%.*u'", -1, 0));
			ft_printf("	#42	ret    '%d' \n", ft_printf("'%.10u'", 42));
			dprintf(1, "\n");
		}
		else
		{
			printf("\n");
			printf("	#29	ret    '%d' \n", printf("'%u'", 0));
			printf("	#30	ret    '%d' \n", printf("'%u'", 2147483647));
			printf("	#31	ret    '%d' \n", printf("'%u'", -0));
			printf("	#32	ret    '%d' \n", printf("'%u'", 42));
			printf("	#33	ret    '%d' \n", printf("'%u'", -1));
			printf("	#34	ret    '%d' \n", printf("'%-15u'", -1));
			printf("	#35	ret    '%d' \n", printf("'%010.*u'", 15, -1));
			printf("	#36	ret    '%d' \n", printf("'%15.10u'", -1));
			printf("	#37	ret    '%d' \n", printf("'%010u'", -1));
			printf("	#38	ret    '%d' \n", printf("'%.0u'", 0));
			printf("	#39	ret    '%d' \n", printf("'%.0u'", -1));
			printf("	#40	ret    '%d' \n", printf("'%.*u'", -10, -2));
			printf("	#41	ret    '%d' \n", printf("'%.*u'", -1, 0));
			printf("	#42	ret    '%d' \n", printf("'%.10u'", 42));
			printf("\n");
		}
	}
	if (is_in('a', arg, n) || is_in('x', arg, n))
	{
		if (is_in('1', arg, n))
		{
			dprintf(1, "\n");
			ft_printf("	#43	ret    '%d' \n", ft_printf("'%x'", 0));
			ft_printf("	#44	ret    '%d' \n", ft_printf("'%x'", 2147483647));
			ft_printf("	#45	ret    '%d' \n", ft_printf("'%-9.10x'", UINT_MAX));
			ft_printf("	#46	ret    '%d' \n", ft_printf("'%x'", 42));
			ft_printf("	#47	ret    '%d' \n", ft_printf("'%x'", -1));
			ft_printf("	#48	ret    '%d' \n", ft_printf("'%-15x'", -1));
			ft_printf("	#49	ret    '%d' \n", ft_printf("'%010.*x'", 15, -1));
			ft_printf("	#50	ret    '%d' \n", ft_printf("'%15.10x'", -1));
			ft_printf("	#51	ret    '%d' \n", ft_printf("'%010x'", -1));
			ft_printf("	#52	ret    '%d' \n", ft_printf("'%.0x'", 0));
			ft_printf("	#53	ret    '%d' \n", ft_printf("'%*.10x'", -45, 200));
			ft_printf("	#54	ret    '%d' \n", ft_printf("'%.*x'", -10, -2));
			ft_printf("	#55	ret    '%d' \n", ft_printf("'%.*x'", -1, 0));
			ft_printf("	#56	ret    '%d' \n", ft_printf("'%.2x'", 42));
			dprintf(1, "\n");
		}
		else
		{
			printf("\n");
			printf("	#43	ret    '%d' \n", printf("'%x'", 0));
			printf("	#44	ret    '%d' \n", printf("'%x'", 2147483647));
			printf("	#45	ret    '%d' \n", printf("'%-9.10x'", UINT_MAX));
			printf("	#46	ret    '%d' \n", printf("'%x'", 42));
			printf("	#47	ret    '%d' \n", printf("'%x'", -1));
			printf("	#48	ret    '%d' \n", printf("'%-15x'", -1));
			printf("	#49	ret    '%d' \n", printf("'%010.*x'", 15, -1));
			printf("	#50	ret    '%d' \n", printf("'%15.10x'", -1));
			printf("	#51	ret    '%d' \n", printf("'%010x'", -1));
			printf("	#52	ret    '%d' \n", printf("'%.0x'", 0));
			printf("	#53	ret    '%d' \n", printf("'%*.10x'", -45, 200));
			printf("	#54	ret    '%d' \n", printf("'%.*x'", -10, -2));
			printf("	#55	ret    '%d' \n", printf("'%.*x'", -1, 0));
			printf("	#56	ret    '%d' \n", printf("'%.2x'", 42));
			printf("\n");
		}
	}
	if (is_in('a', arg, n) || is_in('X', arg, n))
	{
		if (is_in('1', arg, n))
		{
			dprintf(1, "\n");
			ft_printf("	#57	ret    '%d' \n", ft_printf("'%X'", 0));
			ft_printf("	#58	ret    '%d' \n", ft_printf("'%X'", 2147483647));
			ft_printf("	#59	ret    '%d' \n", ft_printf("'%X'", -0));
			ft_printf("	#60	ret    '%d' \n", ft_printf("'%X'", 42));
			ft_printf("	#61	ret    '%d' \n", ft_printf("'%X'", -1));
			ft_printf("	#62	ret    '%d' \n", ft_printf("'%-15X'", -1));
			ft_printf("	#63	ret    '%d' \n", ft_printf("'%010.*X'", 15, -1));
			ft_printf("	#64	ret    '%d' \n", ft_printf("'%15.10X'", -1));
			ft_printf("	#65	ret    '%d' \n", ft_printf("'%010X'", -1));
			ft_printf("	#66	ret    '%d' \n", ft_printf("'%.0X'", 0));
			ft_printf("	#67	ret    '%d' \n", ft_printf("'%.0X'", -1));
			ft_printf("	#68	ret    '%d' \n", ft_printf("'%.*X'", -10, -2));
			ft_printf("	#69	ret    '%d' \n", ft_printf("'%.*X'", -1, 0));
			ft_printf("	#70	ret    '%d' \n", ft_printf("'%.10X'", 42));
			dprintf(1, "\n");
		}
		else
		{
			printf("\n");
			printf("	#57	ret    '%d' \n", printf("'%X'", 0));
			printf("	#58	ret    '%d' \n", printf("'%X'", 2147483647));
			printf("	#59	ret    '%d' \n", printf("'%X'", -0));
			printf("	#60	ret    '%d' \n", printf("'%X'", 42));
			printf("	#61	ret    '%d' \n", printf("'%X'", -1));
			printf("	#62	ret    '%d' \n", printf("'%-15X'", -1));
			printf("	#63	ret    '%d' \n", printf("'%010.*X'", 15, -1));
			printf("	#64	ret    '%d' \n", printf("'%15.10X'", -1));
			printf("	#65	ret    '%d' \n", printf("'%010X'", -1));
			printf("	#66	ret    '%d' \n", printf("'%.0X'", 0));
			printf("	#67	ret    '%d' \n", printf("'%.0X'", -1));
			printf("	#68	ret    '%d' \n", printf("'%.*X'", -10, -2));
			printf("	#69	ret    '%d' \n", printf("'%.*X'", -1, 0));
			printf("	#70	ret    '%d' \n", printf("'%.10X'", 42));
			printf("\n");
		}
	}
	if (is_in('a', arg, n) || is_in('p', arg, n))
	{
		if (is_in('1', arg, n))
		{
			dprintf(1, "\n");
			ft_printf("	#71	ret    '%d' \n", ft_printf("'%p'", (void *)0));
			ft_printf("	#72	ret    '%d' \n",
					ft_printf("'%p'", (void *)2147483647));
			ft_printf("	#73	ret    '%d' \n", ft_printf("'%p'", (void *)-0));
			ft_printf("	#74	ret    '%d' \n", ft_printf("'%p'", (void *)42));
			ft_printf("	#75	ret    '%d' \n", ft_printf("'%p'", (void *)-1));
			ft_printf("	#76	ret    '%d' \n", ft_printf("'%-15p'", (void *)-1));
			ft_printf("	#77	ret    '%d' \n",
					ft_printf("'%*p'", 15, (void *)-1));
			ft_printf("	#78	ret    '%d' \n", ft_printf("'%1p'", (void *)-1));
			ft_printf("	#79	ret    '%d' \n", ft_printf("'%20p'", (void *)-2));
			ft_printf("	#80	ret    '%d' \n", ft_printf("'%*p'", 0, (void *)0));
			ft_printf("	#81	ret    '%d' \n", ft_printf("'%p'", (void *)0));
			ft_printf("	#82	ret    '%d' \n", ft_printf("'%-*p'", 0, (void *)0));
			ft_printf("	#83	ret    '%d' \n", ft_printf("'%-40p'", (void *)-1));
			ft_printf("	#84	ret    '%d' \n",
					ft_printf("'%*p'", -10, (void *)99999999));
			ft_printf("	#85	ret    '%d' \n",
					ft_printf("'%-*.p'", 10, (void *)0));
			ft_printf("	#86	ret    '%d' \n", ft_printf("'%-10p'", (void *)42));
			dprintf(1, "\n");
		}
		else
		{
			printf("\n");
			printf("	#71	ret    '%d' \n", printf("'%p'", (void *)0));
			printf("	#72	ret    '%d' \n",
					printf("'%p'", (void *)2147483647));
			printf("	#73	ret    '%d' \n", printf("'%p'", (void *)-0));
			printf("	#74	ret    '%d' \n", printf("'%p'", (void *)42));
			printf("	#75	ret    '%d' \n", printf("'%p'", (void *)-1));
			printf("	#76	ret    '%d' \n", printf("'%-15p'", (void *)-1));
			printf("	#77	ret    '%d' \n", printf("'%*p'", 15, (void *)-1));
			printf("	#78	ret    '%d' \n", printf("'%1p'", (void *)-1));
			printf("	#79	ret    '%d' \n", printf("'%20p'", (void *)-2));
			printf("	#80	ret    '%d' \n", printf("'%*p'", 0, (void *)0));
			printf("	#81	ret    '%d' \n", printf("'%p'", (void *)0));
			printf("	#82	ret    '%d' \n", printf("'%-*p'", 0, (void *)0));
			printf("	#83	ret    '%d' \n", printf("'%-40p'", (void *)-1));
			printf("	#84	ret    '%d' \n",
					printf("'%*p'", -10, (void *)99999999));
			printf("	#85	ret    '%d' \n", printf("'%-*.p'", 10, (void *)0));
			printf("	#86	ret    '%d' \n", printf("'%-10p'", (void *)42));
			printf("\n");
		}
	}
	if (is_in('a', arg, n) || is_in('s', arg, n))
	{
		if (is_in('1', arg, n))
		{
			dprintf(1, "\n");
			ft_printf("	#87	ret    '%d' \n", ft_printf("'%s'", "basique"));
			ft_printf("	#88	ret    '%d' \n", ft_printf("'%10s'", NULL));
			ft_printf("	#89	ret    '%d' \n", ft_printf("'%2s'", NULL));
			ft_printf("	#90	ret    '%d' \n", ft_printf("'%-2s'", NULL));
			ft_printf("	#91	ret    '%d' \n", ft_printf("'%10.2s'", NULL));
			ft_printf("	#92	ret    '%d' \n", ft_printf("'%-10s'", NULL));
			ft_printf("	#93	ret    '%d' \n", ft_printf("'%-10.5s'", NULL));
			ft_printf("	#94	ret    '%d' \n", ft_printf("'%-15s'", "basique"));
			dprintf(1, "\n");
		}
		else
		{
			printf("\n");
			printf("	#87	ret    '%d' \n", printf("'%s'", "basique"));
			printf("	#88	ret    '%d' \n", printf("'%10s'", NULL));
			printf("	#89	ret    '%d' \n", printf("'%2s'", NULL));
			printf("	#90	ret    '%d' \n", printf("'%-2s'", NULL));
			printf("	#91	ret    '%d' \n", printf("'%10.2s'", NULL));
			printf("	#92	ret    '%d' \n", printf("'%-10s'", NULL));
			printf("	#93	ret    '%d' \n", printf("'%-10.5s'", NULL));
			printf("	#94	ret    '%d' \n", printf("'%-15s'", "basique"));
			printf("\n");
		}
	}
	if (is_in('b', arg, n) || is_in('n', arg, n))
	{
		if (is_in('1', arg, n))
		{
			dprintf(1, "\n");
			ft_printf("	#95	ret    '%d' \n", ft_printf("'%n '", &a));
			ft_printf("	#96	ret    '%d' \n", ft_printf("'%d '", a));
			ft_printf("    #97	ret    '%d' \n",
					ft_printf("'%10.2s %n %s %n'", "Hello", &a, "Hello2", &c));
			ft_printf("    #98	ret    '%d' \n",
					ft_printf("'size = %d ; size = %d'", a, c));
			dprintf(1, "\n");
		}
		else
		{
			printf("\n");
			printf("	#95	ret    '%d' \n", printf("'%n '", &a));
			printf("	#96	ret    '%d' \n", printf("'%d '", a));
			printf("    #97	ret    '%d' \n", printf("'%10.2s %n %s %n'",
						"Hello", &a, "Hello2", &c));
			printf("    #98	ret    '%d' \n", printf("'size = %d ; size = %d'",
						a, c));
			printf("\n");
		}
	}
	return (0);
}
