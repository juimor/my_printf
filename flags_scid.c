/*
        ** ETNA PROJECT, 09/01/2019 by djouad_r
** [...]
** File description:
**      [...]
*/

#include "my.h"

void my_putchar(int c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        my_putchar(str[i++]);
}

int	my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

void my_putnbr(int n)
{
    if (n == -2147483648) {
        my_putstr("-214748364");
        n = 8;
    }
    if (n < 0) {
        my_putchar('-');
        n = -n;
    }
    if (n >= 10) {
        my_putnbr(n / 10);
        my_putchar((n % 10) + 48);
    }
    if (n < 10)
        my_putchar(n + 48);
}