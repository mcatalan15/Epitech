##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## nope
##

SRC		= 	$(wildcard my/*.c) $(wildcard printf/*/*.c) $(wildcard printf/*.c)

OBJ 	= 	$(SRC:.c=.o)

NAME 	= 	libmy.a

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)

all:		$(NAME)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			all clean

.PHONY:		all clean fclean re
