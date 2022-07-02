##
## EPITECH PROJECT, 2018
## Huré Yaowanart
## File description:
## Makefile
##

SRC	=	src/character/anim.c							\
		src/character/move.c							\
		src/collision/collision.c						\
		src/destroy/destroy.c							\
		src/destroy/destroy2.c							\
		src/init_value/init_all_menu.c					\
		src/init_value/init_all_sprite.c				\
		src/init_value/init_buttons.c					\
		src/init_value/check_buttons.c					\
		src/init_value/init_sprite.c					\
		src/init_value/init_zone.c						\
		src/init_value/resize_all_sprite.c				\
		src/init_value/inventory/display_inventory.c	\
		src/init_value/inventory/init_inventory.c		\
		src/keys/collision_key.c						\
		src/keys/keys.c									\
		src/keys/sword.c								\
		src/life/life.c									\
		src/menu/check_instance.c						\
		src/menu/pause.c								\
		src/menu/pause_back_menu.c						\
		src/music/music.c								\
		src/my_putnbr.c									\
		src/window/game.c								\
		src/window/manage_window.c						\
		src/zone/zone10.c								\
		src/zone/zone11.c								\
		src/zone/zone12.c								\
		src/zone/zone13.c								\
		src/main.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Iinclude -g

NAME	=	my_rpg

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio
	tar xvf img.tar.gz

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -rf img/
	rm -f $(NAME)

re:	fclean all

debug:	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS) -g
