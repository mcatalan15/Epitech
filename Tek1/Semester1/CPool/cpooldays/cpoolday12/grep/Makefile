##
## EPITECH PROJECT, 2021
## d10
## File description:
## 

SRC	=	grep.c			\

OBJ	= 	$(SRC:.c=.o) ##Quitar los .c

NAME	=	grep  ##Nombre archivo

all:	$(NAME)

$(NAME):	$(OBJ)
		cd ./lib/my/ ; $(MAKE) -f Makefile
		gcc  -o $(NAME) $(OBJ) -I./include -L./lib -lmy
clean:
	rm -f $(OBJ)
	cd ./lib/my ; $(MAKE) -f Makefile clean

fclean: clean
	rm -f $(NAME)
	cd ./lib/my ; $(MAKE) -f Makefile fclean

re:	fclean all
	cd ./lib/my ; $(MAKE) -f Makefile re
