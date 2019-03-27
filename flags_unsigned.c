/*
** ETNA PROJECT, 17/01/2019 by djouad_r
** [...]
** File description:
**      [...]
*/

#include "my.h"

void my_putmod()
{
    my_putchar('%');
}

void my_putnbr_octal(unsigned int n)
{
    if (n > 8) {
        my_putnbr_octal(n / 8);
        my_putnbr_octal(n % 8);
    } else {
        my_putchar(n + 48);
        n += 1;
    }
}

void my_putnbr_unsigned(unsigned int n)
{
    if (n > 9) {
        my_putnbr_unsigned(n / 10);
        my_putnbr_unsigned(n % 10);
    } else {
        my_putchar(n + 48);
        n += 1;
    }
}

void my_putnbr_hexadecimal(int n)
{
    char *base = "0123456789ABCDEF";

    if (n >= 16) {
        my_putnbr_hexadecimal(n / 16);
        my_putchar(n % 16);
    } else 
    my_putchar(base[n % 16]);
}
