##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## makefile
##

NAME	= 	lem_in

SRC		= 	src/main.c \
			src/lemin.c \
			src/get_shortest_paths.c \
			src/free.c \
			src/error_management.c \
			src/display.c \
			src/display_movements_terminal.c \
			src/command.c \
			src/construct_anthill.c \
			src/ants_movements.c \
			src/paths/tunnels2.c \
			src/paths/tunnels.c \
			src/paths/nodes.c \
			src/paths/link.c \
			src/paths/get_user_entry.c \
			src/paths/create_path.c \
			src/paths/tunnel_amount.c \

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