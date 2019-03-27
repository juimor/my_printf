/*
** ETNA PROJECT, 09/01/2019 by djouad_r
** [...]
** File description:
**      [...]
*/

#include "my.h"

static const functab g_funcptr[10] = {
    my_putchar,
    my_putstr,
    my_putnbr,
    my_putnbr,
    my_putnbr_octal,
    my_putnbr_unsigned,
    my_putnbr_hexadecimal,
    my_putnbr_hexadecimal,
    my_putmod,
    NULL
};

int verif_flags(char *format)
{
    char *flags = "csidouxX%";

    for (int i = 0; flags[i] != '\0'; i++) {
        if (flags[i] == format[1])
            return (i);
    }
    return (-1);
}

int my_printf(char *format, ...)
{
    va_list args;

    va_start(args, format);
    for(int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            if (verif_flags(&format[i]) == -1)
                my_putchar(format[i]);
            else
                g_funcptr[verif_flags(&format[i++])](va_arg(args, void *));
        } else
            my_putchar(format[i]);
    }
    return (0);
}
