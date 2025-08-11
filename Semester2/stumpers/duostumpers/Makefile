##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile for exe
##

NAME	= 	connect4

SRC		= 	$(wildcard src/*.c)

LIBD	= 	./lib

HD      =   ./include

$(NAME):	make_lib
			gcc $(SRC) -o $(NAME) -I$(HD) -L$(LIBD) -lmy -g

all:		$(NAME)

make_lib:
			$(MAKE) re -C $(LIBD)

clean:
			rm -f *.o

fclean:		clean
			rm -f $(NAME)

re: 		fclean all
