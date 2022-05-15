##
## EPITECH PROJECT, 2021
## Makefile of graphic design
## File description:
## Compile Graphic files
##

NAME			=	my_hunter

SRC			=	$(wildcard *.c)

OBJ			=	$(SRC:.c=.o)

RM			=	rm -rf

LIBRARY		=	-lcsfml-window -lcsfml-graphics -lcsfml-audio -lcsfml-system

CFLAGS		=	-I./include/
CFLAGS		+=	-pedantic -W -Wall -Wextra -Wpedantic -Wno-long-long -Werror

all:		$(NAME)


$(NAME):	$(OBJ)
			gcc $(CFLAGS) -o $(NAME) $(OBJ) $(LIBRARY)

clean:
			$(RM) $(OBJ)

fclean: 	clean
			$(RM) $(NAME)

re:			fclean all
