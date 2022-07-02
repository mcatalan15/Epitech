##
## EPITECH PROJECT, 2021
## Makefile do_op
## File description:
## makefile
##

OBJ = $(SRC:.c=.o)

LIB = -L./lib/my -lmy

SRC	= 	$(wildcard *.c) $(wildcard */*.c)

CFLAGS = -I./include

NAME = libmy.a

$(NAME):	$(OBJ)
		ar rc   $(NAME) $(OBJ)
		cp libmy.a ../
		cp my.h	../../include

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
	make clean