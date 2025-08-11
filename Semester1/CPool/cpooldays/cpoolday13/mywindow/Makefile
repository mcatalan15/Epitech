##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile for csfml
##

NAME			=	MyWindow

SRC			=	MyWindow.c

OBJ			=	$(SRC:.c=.o)

LIBRARY		=	-lcsfml-window -lcsfml-graphics

CFLAGS		=	-I./include/my
CFLAGS		+=	-pedantic -W -Wall -Wextra -Wpedantic
CFLAGS		+=	-Wno-long-long -Werror

RM		=	rm -re

all:		$(NAME)

$(NAME):	$(OBJ)
			gcc $(CFLAGS) -o $(NAME) $(OBJ) $(LIBRARY)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
