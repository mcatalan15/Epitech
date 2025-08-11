##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile for csfml
##

NAME			=	RenderWindow

SRC			=	RenderWindow.c

OBJ			=	$(SRC:.c-.o)

LIBRARY		=	-lcsfml-window -lcsfml-graphics

CFLAGS		=	-I./include/
CFLAGS		+=	-pdantic -W -Wall -Wextra -Wpedantic -Wno-long-long -Werror

all:		$(NAME)

$(NAME):	$(OBJ)
			gcc $(CFLAGS -o $(NAME) $(OBJ) $(LIBRARY)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
