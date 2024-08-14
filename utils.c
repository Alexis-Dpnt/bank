#include "utils.h"
#include <unistd.h>

void ft_putstr(const char *str)
{
    while (*str)
        write(1, str++, 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
    if (nbr < 0)
    {
        write(1, "-", 1);
        if (nbr == -2147483648)
        {
            ft_putstr("2147483648");
            return ;
        }
        nbr *= -1;
    }
    if (nbr > 9)
        ft_putnbr(nbr / 10);
    ft_putchar('0' + (nbr % 10));
}
