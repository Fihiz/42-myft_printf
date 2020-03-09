/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   zob_main.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sad-aude <sad-aude@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/15 18:53:09 by sad-aude     #+#   ##    ##    #+#       */
/*   Updated: 2020/03/09 01:38:35 by sad-aude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include "include/ft_printf.h" 

int     main()
{
    //char *str = "hello world";
    //ft_printf("%15.s salut\n", "01234567890");
    // ft_printf("Mon essai char : [%c]\n", 's');
    // ft_printf("Mon essai chaine : [%s]\n", "A priori...");
    ft_printf("Mon essai chaine avec width : [%s] salut\n", "lol");
    ft_printf("Mon essai chaine avec width : [%-24s] salut\n", "lol");
    ft_printf("Mon essai chaine avec width : [%24s] salut\n", "lol");
    ft_printf("Mon essai chaine avec width : [%.2s] salut\n", "lol");
    ft_printf("Mon essai chaine avec width : [%.15s] salut\n", "lol");
    ft_printf("Mon essai chaine avec width : [%.15s] salut\n", NULL);
    printf("---------------------\n");
    printf("Son essai chaine avec width : [%s] salut\n", "lol");
    printf("Son essai chaine avec width : [%-24s] salut\n", "lol");
    printf("Son essai chaine avec width : [%24s] salut\n", "lol");
    printf("Son essai chaine avec width : [%.2s] salut\n", "lol");
    printf("Son essai avec precision : [%*s] salut\n", 10, "lol");
    printf("Son essai chaine avec width : [%.15s] salut\n", NULL);
    //printf("'%-3s'", "basique");
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
