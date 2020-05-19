/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlepart <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 18:10:50 by rlepart      #+#   ##    ##    #+#       */
/*   Updated: 2020/02/08 15:27:24 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>

//command : |./a.out a| if you want all tests

int			ft_printf(const char *, ...) __attribute__((format(printf,1,2)));

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
		dprintf(1, "\n");
		dprintf(1, "    #0      printf ret    '%d' \n",
				dprintf(1, "%u %x %X %c %d %i %p %s %p %d %u %x %X",
					150, 150, 150, '0', 150, 150, NULL, "ah",
					NULL, 150, 2879, 20182, 96362));
		dprintf(1, "    #0      ft_printf ret '%d' \n",
				ft_printf("%u %x %X %c %d %i %p %s %p %d %u %x %X",
					150, 150, 150, '0', 150, 150, NULL, "ah",
					NULL, 150, 2879, 20182, 96362));
		dprintf(1, "	#1	    printf ret    '%d' \n", dprintf(1, ""));
		dprintf(1, "	#1	    ft_printf ret '%d' \n", ft_printf(""));
		dprintf(1, "\n");
	}
	if (is_in('a', arg, n) || is_in('c', arg, n))
	{
		dprintf(1, "\n");
		dprintf(1, "	#2	    printf ret    '%d' \n",
				dprintf(1, "'%10c %4c'", 56, 111));
		dprintf(1, "	#2	    ft_printf ret '%d' \n",
				ft_printf("'%10c %4c'", 56, 111));
		dprintf(1, "	#3		printf ret    '%d' \n",
				dprintf(1, "'%*c'", -4, 111));
		dprintf(1, "	#3		ft_printf ret '%d' \n",
				ft_printf("'%*c'", -4, 111));
		dprintf(1, "	#4	    printf ret    '%d' \n",
				dprintf(1, "'%-10c'", 0));
		dprintf(1, "	#4	    ft_printf ret '%d' \n",
				ft_printf("'%-10c'", 0));
		dprintf(1, "	#5	    printf ret    '%d' \n",
				dprintf(1, "'%*c'", -10, 0));
		dprintf(1, "	#5	    ft_printf ret '%d' \n",
				ft_printf("'%*c'", -10, 0));
		dprintf(1, "\n");
	}
	if (is_in('a', arg, n) || is_in('%', arg, n))
	{
		dprintf(1, "\n");
		dprintf(1, "	#6	printf ret    '%d' \n", dprintf(1, "'%10% %4%'"));
		dprintf(1, "	#6	ft_printf ret '%d' \n", ft_printf("'%10% %4%'"));
		dprintf(1, "	#7	printf ret    '%d' \n", dprintf(1, "'%010%'"));
		dprintf(1, "	#7	ft_printf ret '%d' \n", ft_printf("'%010%'"));
		dprintf(1, "	#8	printf ret    '%d' \n", dprintf(1, "'%-10%'"));
		dprintf(1, "	#8	ft_printf ret '%d' \n", ft_printf("'%-10%'"));
		dprintf(1, "	#9	printf ret    '%d' \n", dprintf(1, "'%*%'", -10));
		dprintf(1, "	#9	ft_printf ret '%d' \n", ft_printf("'%*%'", -10));
		dprintf(1, "\n");
	}
	if (is_in('a', arg, n) || is_in('d', arg, n))
	{
		dprintf(1, "\n");
		dprintf(1, "	#10	    printf ret    '%d' \n", dprintf(1, "'%d'", 0));
		dprintf(1, "	#10	    ft_printf ret '%d' \n", ft_printf("'%d'", 0));
		dprintf(1, "	#11	    printf ret    '%d' \n",
				dprintf(1, "'%d'", 2147483647));
		dprintf(1, "	#11	    ft_printf ret '%d' \n",
				ft_printf("'%d'", 2147483647));
		dprintf(1, "	#12	    printf ret    '%d' \n", dprintf(1, "'%.2d'", -0));
		dprintf(1, "	#12	    ft_printf ret '%d' \n", ft_printf("'%.2d'", -0));
		dprintf(1, "	#13	    printf ret    '%d' \n", dprintf(1, "'%0*d'", -10, 42));
		dprintf(1, "	#13	    ft_printf ret '%d' \n", ft_printf("'%0*d'", -10, 42));
		dprintf(1, "	#14	    printf ret    '%d' \n", dprintf(1, "'%-*d'", -9, -87));
		dprintf(1, "	#14	    ft_printf ret '%d' \n", ft_printf("'%-*d'", -9, -87));
		dprintf(1, "\n");
	}
	if (is_in('a', arg, n) || is_in('i', arg, n))
	{
		dprintf(1, "\n");
		dprintf(1, "	#15	    printf ret    '%d' \n", dprintf(1, "'%02i'", -1));
		dprintf(1, "	#15	    ft_printf ret '%d' \n", ft_printf("'%02i'", -1));
		dprintf(1, "	#16	    printf ret    '%d' \n",
				dprintf(1, "'%i'", 2147483647));
		dprintf(1, "	#16	    ft_printf ret '%d' \n",
				ft_printf("'%i'", 2147483647));
		dprintf(1, "	#17	    printf ret    '%d' \n", dprintf(1, "'%-10.2i'", -0));
		dprintf(1, "	#17	    ft_printf ret '%d' \n", ft_printf("'%-10.2i'", -0));
		dprintf(1, "	#18	    printf ret    '%d' \n", dprintf(1, "'%-2i'", 0));
		dprintf(1, "	#18	    ft_printf ret '%d' \n", ft_printf("'%-2i'", 0));
		dprintf(1, "	#19	    printf ret    '%d' \n", dprintf(1, "'%i'", -1));
		dprintf(1, "	#19	    ft_printf ret '%d' \n", ft_printf("'%i'", -1));
		dprintf(1, "	#20	    printf ret    '%d' \n",
				dprintf(1, "'%-----10i'", 0));
		dprintf(1, "	#20	    ft_printf ret '%d' \n",
				ft_printf("'%-----10i'", 0));
		dprintf(1, "	#21	    printf ret    '%d' \n",
				dprintf(1, "'%010.*i'", 15, -1));
		dprintf(1, "	#21	    ft_printf ret '%d' \n",
				ft_printf("'%010.*i'", 15, -1));
		dprintf(1, "	#22	    printf ret    '%d' \n",
				dprintf(1, "'%15.10i'", -1));
		dprintf(1, "	#22	    ft_printf ret '%d' \n",
				ft_printf("'%15.10i'", -1));
		dprintf(1, "	#23	    printf ret    '%d' \n",
				dprintf(1, "'%010i'", -1));
		dprintf(1, "	#23	    ft_printf ret '%d' \n",
				ft_printf("'%010i'", -1));
		dprintf(1, "	#24	    printf ret    '%d' \n",
				dprintf(1, "'%.0i'", 0));
		dprintf(1, "	#24	    ft_printf ret '%d' \n", ft_printf("'%.0i'", 0));
		dprintf(1, "	#25	    printf ret    '%d' \n",
				dprintf(1, "'%01.0i'", 0));
		dprintf(1, "	#25	    ft_printf ret '%d' \n",
				ft_printf("'%01.0i'", 0));
		dprintf(1, "	#26	    printf ret    '%d' \n",
				dprintf(1, "'%02.1i'", 0));
		dprintf(1, "	#26	    ft_printf ret '%d' \n",
				ft_printf("'%02.1i'", 0));
		dprintf(1, "	#27	    printf ret    '%d' \n",
				dprintf(1, "'%.*i'", -1, 0));
		dprintf(1, "	#27	    ft_printf ret '%d' \n",
				ft_printf("'%.*i'", -1, 0));
		dprintf(1, "    #28     printf ret    '%d' \n",
				dprintf(1, "'%03.0i'", -1));
		dprintf(1, "    #28     ft_printf ret '%d' \n",
				ft_printf("'%03.0i'", -1));
		dprintf(1, "\n");
	}
	if (is_in('a', arg, n) || is_in('u', arg, n))
	{
		dprintf(1, "\n");
		dprintf(1, "	#29	printf ret    '%d' \n", dprintf(1, "'%u'", 0));
		dprintf(1, "	#29	ft_printf ret '%d' \n", ft_printf("'%u'", 0));
		dprintf(1, "	#30	printf ret    '%d' \n",
				dprintf(1, "'%u'", 2147483647));
		dprintf(1, "	#30	ft_printf ret '%d' \n",
				ft_printf("'%u'", 2147483647));
		dprintf(1, "	#31	printf ret    '%d' \n", dprintf(1, "'%u'", -0));
		dprintf(1, "	#31	ft_printf ret '%d' \n", ft_printf("'%u'", -0));
		dprintf(1, "	#32	printf ret    '%d' \n", dprintf(1, "'%u'", 42));
		dprintf(1, "	#32	ft_printf ret '%d' \n", ft_printf("'%u'", 42));
		dprintf(1, "	#33	printf ret    '%d' \n", dprintf(1, "'%u'", -1));
		dprintf(1, "	#33	ft_printf ret '%d' \n", ft_printf("'%u'", -1));
		dprintf(1, "	#34	printf ret    '%d' \n", dprintf(1, "'%-15u'", -1));
		dprintf(1, "	#34	ft_printf ret '%d' \n", ft_printf("'%-15u'", -1));
		dprintf(1, "	#35	printf ret    '%d' \n",
				dprintf(1, "'%010.*u'", 15, -1));
		dprintf(1, "	#35	ft_printf ret '%d' \n",
				ft_printf("'%010.*u'", 15, -1));
		dprintf(1, "	#36	printf ret    '%d' \n",
				dprintf(1, "'%15.10u'", -1));
		dprintf(1, "	#36	ft_printf ret '%d' \n", ft_printf("'%15.10u'", -1));
		dprintf(1, "	#37	printf ret    '%d' \n", dprintf(1, "'%010u'", -1));
		dprintf(1, "	#37	ft_printf ret '%d' \n", ft_printf("'%010u'", -1));
		dprintf(1, "	#38	printf ret    '%d' \n", dprintf(1, "'%.0u'", 0));
		dprintf(1, "	#38	ft_printf ret '%d' \n", ft_printf("'%.0u'", 0));
		dprintf(1, "	#39	printf ret    '%d' \n", dprintf(1, "'%.0u'", -1));
		dprintf(1, "	#39	ft_printf ret '%d' \n", ft_printf("'%.0u'", -1));
		dprintf(1, "	#40	printf ret    '%d' \n",
				dprintf(1, "'%.*u'", -10, -2));
		dprintf(1, "	#40	ft_printf ret '%d' \n",
				ft_printf("'%.*u'", -10, -2));
		dprintf(1, "	#41	printf ret    '%d' \n",
				dprintf(1, "'%.*u'", -1, 0));
		dprintf(1, "	#41	ft_printf ret '%d' \n", ft_printf("'%.*u'", -1, 0));
		dprintf(1, "	#42	printf ret    '%d' \n", dprintf(1, "'%.10u'", 42));
		dprintf(1, "	#42	ft_printf ret '%d' \n", ft_printf("'%.10u'", 42));
		dprintf(1, "\n");
	}
	if (is_in('a', arg, n) || is_in('x', arg, n))
	{
		dprintf(1, "\n");
		dprintf(1, "	#43	printf ret    '%d' \n", dprintf(1, "'%x'", 0));
		dprintf(1, "	#43	ft_printf ret '%d' \n", ft_printf("'%x'", 0));
		dprintf(1, "	#44	printf ret    '%d' \n",
				dprintf(1, "'%x'", 2147483647));
		dprintf(1, "	#44	ft_printf ret '%d' \n",
				ft_printf("'%x'", 2147483647));
		dprintf(1, "	#45	printf ret    '%d' \n", dprintf(1, "'%-9.10x'", UINT_MAX));
		dprintf(1, "	#45	ft_printf ret '%d' \n", ft_printf("'%-9.10x'", UINT_MAX));
		dprintf(1, "	#46	printf ret    '%d' \n", dprintf(1, "'%x'", 42));
		dprintf(1, "	#46	ft_printf ret '%d' \n", ft_printf("'%x'", 42));
		dprintf(1, "	#47	printf ret    '%d' \n", dprintf(1, "'%x'", -1));
		dprintf(1, "	#47	ft_printf ret '%d' \n", ft_printf("'%x'", -1));
		dprintf(1, "	#48	printf ret    '%d' \n", dprintf(1, "'%-15x'", -1));
		dprintf(1, "	#48	ft_printf ret '%d' \n", ft_printf("'%-15x'", -1));
		dprintf(1, "	#49	printf ret    '%d' \n",
				dprintf(1, "'%010.*x'", 15, -1));
		dprintf(1, "	#49	ft_printf ret '%d' \n",
				ft_printf("'%010.*x'", 15, -1));
		dprintf(1, "	#50	printf ret    '%d' \n",
				dprintf(1, "'%15.10x'", -1));
		dprintf(1, "	#50	ft_printf ret '%d' \n", ft_printf("'%15.10x'", -1));
		dprintf(1, "	#51	printf ret    '%d' \n", dprintf(1, "'%010x'", -1));
		dprintf(1, "	#51	ft_printf ret '%d' \n", ft_printf("'%010x'", -1));
		dprintf(1, "	#52	printf ret    '%d' \n", dprintf(1, "'%.0x'", 0));
		dprintf(1, "	#52	ft_printf ret '%d' \n", ft_printf("'%.0x'", 0));
		dprintf(1, "	#53	printf ret    '%d' \n", dprintf(1, "'%*.10x'", -45, 200));
		dprintf(1, "	#53	ft_printf ret '%d' \n", ft_printf("'%*.10x'", -45, 200));
		dprintf(1, "	#54	printf ret    '%d' \n",
				dprintf(1, "'%.*x'", -10, -2));
		dprintf(1, "	#54	ft_printf ret '%d' \n",
				ft_printf("'%.*x'", -10, -2));
		dprintf(1, "	#55	printf ret    '%d' \n",
				dprintf(1, "'%.*x'", -1, 0));
		dprintf(1, "	#55	ft_printf ret '%d' \n", ft_printf("'%.*x'", -1, 0));
		dprintf(1, "	#56	printf ret    '%d' \n", dprintf(1, "'%.2x'", 42));
		dprintf(1, "	#56	ft_printf ret '%d' \n", ft_printf("'%.2x'", 42));
		dprintf(1, "\n");
	}
	if (is_in('a', arg, n) || is_in('X', arg, n))
	{
		dprintf(1, "\n");
		dprintf(1, "	#57	printf ret    '%d' \n", dprintf(1, "'%X'", 0));
		dprintf(1, "	#57	ft_printf ret '%d' \n", ft_printf("'%X'", 0));
		dprintf(1, "	#58	printf ret    '%d' \n",
				dprintf(1, "'%X'", 2147483647));
		dprintf(1, "	#58	ft_printf ret '%d' \n",
				ft_printf("'%X'", 2147483647));
		dprintf(1, "	#59	printf ret    '%d' \n", dprintf(1, "'%X'", -0));
		dprintf(1, "	#59	ft_printf ret '%d' \n", ft_printf("'%X'", -0));
		dprintf(1, "	#60	printf ret    '%d' \n", dprintf(1, "'%X'", 42));
		dprintf(1, "	#60	ft_printf ret '%d' \n", ft_printf("'%X'", 42));
		dprintf(1, "	#61	printf ret    '%d' \n", dprintf(1, "'%X'", -1));
		dprintf(1, "	#61	ft_printf ret '%d' \n", ft_printf("'%X'", -1));
		dprintf(1, "	#62	printf ret    '%d' \n", dprintf(1, "'%-15X'", -1));
		dprintf(1, "	#62	ft_printf ret '%d' \n", ft_printf("'%-15X'", -1));
		dprintf(1, "	#63	printf ret    '%d' \n",
				dprintf(1, "'%010.*X'", 15, -1));
		dprintf(1, "	#63	ft_printf ret '%d' \n",
				ft_printf("'%010.*X'", 15, -1));
		dprintf(1, "	#64	printf ret    '%d' \n",
				dprintf(1, "'%15.10X'", -1));
		dprintf(1, "	#64	ft_printf ret '%d' \n", ft_printf("'%15.10X'", -1));
		dprintf(1, "	#65	printf ret    '%d' \n", dprintf(1, "'%010X'", -1));
		dprintf(1, "	#65	ft_printf ret '%d' \n", ft_printf("'%010X'", -1));
		dprintf(1, "	#66	printf ret    '%d' \n", dprintf(1, "'%.0X'", 0));
		dprintf(1, "	#66	ft_printf ret '%d' \n", ft_printf("'%.0X'", 0));
		dprintf(1, "	#67	printf ret    '%d' \n", dprintf(1, "'%.0X'", -1));
		dprintf(1, "	#67	ft_printf ret '%d' \n", ft_printf("'%.0X'", -1));
		dprintf(1, "	#68	printf ret    '%d' \n",
				dprintf(1, "'%.*X'", -10, -2));
		dprintf(1, "	#68	ft_printf ret '%d' \n",
				ft_printf("'%.*X'", -10, -2));
		dprintf(1, "	#69	printf ret    '%d' \n",
				dprintf(1, "'%.*X'", -1, 0));
		dprintf(1, "	#69	ft_printf ret '%d' \n", ft_printf("'%.*X'", -1, 0));
		dprintf(1, "	#70	printf ret    '%d' \n", dprintf(1, "'%.10X'", 42));
		dprintf(1, "	#70	ft_printf ret '%d' \n", ft_printf("'%.10X'", 42));
		dprintf(1, "\n");
	}
	if (is_in('a', arg, n) || is_in('p', arg, n))
	{
		dprintf(1, "\n");
		dprintf(1, "	#71	printf ret    '%d' \n",
				dprintf(1, "'%p'", (void *)0));
		dprintf(1, "	#71	ft_printf ret '%d' \n",
				ft_printf("'%p'", (void *)0));
		dprintf(1, "	#72	printf ret    '%d' \n", dprintf(1, "'%p'",
					(void *)2147483647));
		dprintf(1, "	#72	ft_printf ret '%d' \n", ft_printf("'%p'",
					(void *)2147483647));
		dprintf(1, "	#73	printf ret    '%d' \n",
				dprintf(1, "'%p'", (void *)-0));
		dprintf(1, "	#73	ft_printf ret '%d' \n",
				ft_printf("'%p'", (void *)-0));
		dprintf(1, "	#74	printf ret    '%d' \n",
				dprintf(1, "'%p'", (void *)42));
		dprintf(1, "	#74	ft_printf ret '%d' \n",
				ft_printf("'%p'", (void *)42));
		dprintf(1, "	#75	printf ret    '%d' \n",
				dprintf(1, "'%p'", (void *)-1));
		dprintf(1, "	#75	ft_printf ret '%d' \n",
				ft_printf("'%p'", (void *)-1));
		dprintf(1, "	#76	printf ret    '%d' \n", dprintf(1, "'%-15p'",
					(void *)-1));
		dprintf(1, "	#76	ft_printf ret '%d' \n", ft_printf("'%-15p'",
					(void *)-1));
		dprintf(1, "	#77	printf ret    '%d' \n", dprintf(1, "'%*p'", 15,
					(void *)-1));
		dprintf(1, "	#77	ft_printf ret '%d' \n", ft_printf("'%*p'", 15,
					(void *)-1));
		dprintf(1, "	#78	printf ret    '%d' \n", dprintf(1, "'%1p'",
					(void *)-1));
		dprintf(1, "	#78	ft_printf ret '%d' \n",
				ft_printf("'%1p'", (void *)-1));
		dprintf(1, "	#79	printf ret    '%d' \n", dprintf(1, "'%20p'",
					(void *)-2));
		dprintf(1, "	#79	ft_printf ret '%d' \n", ft_printf("'%20p'",
					(void *)-2));
		dprintf(1, "	#80	printf ret    '%d' \n", dprintf(1, "'%*p'", 0,
					(void *)0));
		dprintf(1, "	#80	ft_printf ret '%d' \n", ft_printf("'%*p'", 0,
					(void *)0));
		dprintf(1, "	#81 printf ret    '%d' \n",
				dprintf(1, "'%p'", (void *)0));
		dprintf(1, "	#81 ft_printf ret '%d' \n",
				ft_printf("'%p'", (void *)0));
		dprintf(1, "	#82 printf ret    '%d' \n", dprintf(1, "'%-*p'", 0,
					(void *)0));
		dprintf(1, "	#82 ft_printf ret '%d' \n", ft_printf("'%-*p'", 0,
					(void *)0));
		dprintf(1, "	#83	printf ret    '%d' \n", dprintf(1, "'%-40p'",
					(void *)-1));
		dprintf(1, "	#83	ft_printf ret '%d' \n", ft_printf("'%-40p'",
					(void *)-1));
		dprintf(1, "	#84	printf ret    '%d' \n", dprintf(1, "'%*p'", -10,
					(void *)99999999));
		dprintf(1, "	#84	ft_printf ret '%d' \n", ft_printf("'%*p'", -10,
					(void *)99999999));
		dprintf(1, "	#85	printf ret    '%d' \n", dprintf(1, "'%-*.p'", 10,
					(void *)0));
		dprintf(1, "	#85	ft_printf ret '%d' \n", ft_printf("'%-*.p'", 10,
					(void *)0));
		dprintf(1, "	#86	printf ret    '%d' \n", dprintf(1, "'%-10p'",
					(void *)42));
		dprintf(1, "	#86	ft_printf ret '%d' \n", ft_printf("'%-10p'",
					(void *)42));
		dprintf(1, "\n");
	}
	if (is_in('a', arg, n) || is_in('s', arg, n))
	{
		dprintf(1, "\n");
		dprintf(1, "	#87	printf ret    '%d' \n",
				dprintf(1, "'%s'", "basique"));
		dprintf(1, "	#87	ft_printf ret '%d' \n",
				ft_printf("'%s'", "basique"));
		dprintf(1, "	#88	printf ret    '%d' \n", dprintf(1, "'%10s'", NULL));
		dprintf(1, "	#88	ft_printf ret '%d' \n", ft_printf("'%10s'", NULL));
		dprintf(1, "	#89	printf ret    '%d' \n", dprintf(1, "'%2s'", NULL));
		dprintf(1, "	#89	ft_printf ret '%d' \n", ft_printf("'%2s'", NULL));
		dprintf(1, "	#90	printf ret    '%d' \n", dprintf(1, "'%-2s'", NULL));
		dprintf(1, "	#90	ft_printf ret '%d' \n", ft_printf("'%-2s'", NULL));
		dprintf(1, "	#91	printf ret    '%d' \n",
				dprintf(1, "'%10.2s'", NULL));
		dprintf(1, "	#91	ft_printf ret '%d' \n",
				ft_printf("'%10.2s'", NULL));
		dprintf(1, "	#92	printf ret    '%d' \n",
				dprintf(1, "'%-10s'", NULL));
		dprintf(1, "	#92	ft_printf ret '%d' \n", ft_printf("'%-10s'", NULL));
		dprintf(1, "	#93	printf ret    '%d' \n",
				dprintf(1, "'%-10.5s'", NULL));
		dprintf(1, "	#93	ft_printf ret '%d' \n",
				ft_printf("'%-10.5s'", NULL));
		dprintf(1, "	#94	printf ret    '%d' \n",
				dprintf(1, "'%-15s'", "basique"));
		dprintf(1, "	#94	ft_printf ret '%d' \n",
				ft_printf("'%-15s'", "basique"));
		dprintf(1, "\n");
	}
	if (is_in('b', arg, n) || is_in('n', arg, n))
	{
		dprintf(1, "\n");
		dprintf(1, "	#95	printf ret    '%d' \n", dprintf(1, "'%n '", &a));
		dprintf(1, "	#95	ft_printf ret '%d' \n", ft_printf("'%n '", &b));
		dprintf(1, "	#95.5	printf ret    '%d' \n", dprintf(1, "'%d '", a));
		dprintf(1, "	#95.5	ft_printf ret '%d' \n", ft_printf("'%d '", b));
		dprintf(1, "    #96 printf ret    '%d' \n", dprintf(1, "'%10.2s %n %s %n'",
					"Hello", &a, "Hello2", &c));
		dprintf(1, "    #96 ft_printf ret '%d' \n", ft_printf("'%10.2s %n %s %n'",
				"Hello", &b, "Hello2", &d));
		dprintf(1, "    #96.5   printf ret    '%d' \n",
			dprintf(1,"'size = %d ; size = %d'", a, c));
		dprintf(1, "    #96.5   ft_printf ret '%d' \n",
			ft_printf("'size = %d ; size = %d'", b, d));
		dprintf(1, "\n");
	}
	return (0);
}
