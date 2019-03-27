/*
** ETNA PROJECT, 09/01/2019 by djouad_r
** [...]
** File description:
**      [...]
*/

#ifndef MY_H
#define MY_H

#include <unistd.h>
#include <stdarg.h>

typedef void (*functab)();

void    my_putchar(int);
void    my_putstr(char *);
void    my_putnbr(int);
int     my_printf(char *, ...);
int     my_strlen(char *);
void    my_putnbr_octal(unsigned int);
void    my_putnbr_unsigned(unsigned int);
void    my_putnbr_hexadecimal(int);
void    my_putmod();
int     verif_flags(char *);

#endif
