##
## ETNA PROJECT, 25/12/2018 by djouad_r
## [...]
## File description:
##      [...]
##

CC		=	gcc

NAME	=	libmyprintf`uname`-m-`uname`-s

SRC		=	my_printf.c \
			flags_unsigned.c \
			flags_scid.c

OBJ		=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Werror -Wextra

all: my_printf_static my_printf_dynamic library

my_printf_static: $(OBJ)
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME).a $(OBJ)

my_printf_dynamic: $(OBJ)
	gcc $(CFLAGS) -fPIC -shared -o $(NAME).so $(SRC)

library:
	sudo cp $(NAME).so /usr/lib/

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME).a $(NAME).so

re: fclean all

.PHONY: all clean fclean re
