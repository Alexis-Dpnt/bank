#include "utils.h"
#include <stdio.h>
#include <unistd.h>

int main()
{
    int choix;
    choix = 0;
    ft_putstr("select:\n1-login\n2-sign in\n3-quitter\n");
    scanf("%d", &choix);
    if (choix == 1)
        login();
    else if (choix == 2)
        sign_in();
    else if (choix == 3)
        return (1);
    else
        ft_putstr("choix inconnu");
    return (0);
}
