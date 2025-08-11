##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## x
##

SRC	=	results.c \
		my_print.c \
		rows.c \
		columns.c \
		rush3.c

OBJ	=	$(SRC:.c=.o)

NAME	=	rush3

all:	$(NAME)

$(NAME): 	$(OBJ)
	cd lib/my/ && make
	gcc -o $(NAME) $(OBJ) -Llib/my -lmy

clean:
	rm -f $(OBJ)
	cd lib/my && make clean

fclean:	clean
	rm -f $(NAME)
	rm -f lib/my/ && make fclean

re: fclean all
