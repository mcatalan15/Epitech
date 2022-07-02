##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## makefile
##

NAME	= 	ai

SRC		= 	$(wildcard *.c)

LIBD	= 	./lib

HD      =   ./include

$(NAME):	make_lib
			gcc $(SRC) -o $(NAME) -I$(HD) -L$(LIBD) -lmy -g
			cp ai ../n4s_package

all:		$(NAME)

make_lib:
			$(MAKE) re -C $(LIBD)

clean:
			rm -f *.o

fclean:		clean
			rm -f $(NAME)

re: 		fclean all