##
## EPITECH PROJECT, 2021
## d10
## File description:
## x


SRC	=	my_putchar.c			\
		my_strcat.c			\
		my_strlen.c			\
		my_compute_factorial_rec.c	\
		my_put_nbr.c			\
		my_strcmp.c			\
		my_strlowcase.c			\
		my_compute_power_rec.c		\
		my_putstr.c			\
		my_strcpy.c  			\
		my_strncat.c  			\
		my_compute_square_root.c 	\
		my_revstr.c 			\
		my_str_isalpha.c  		\
		my_strncmp.c			\
		my_find_prime_sup.c		\
		my_showmem.c 			\
		my_str_islower.c   		\
		my_strncpy.c			\
		my_getnbr.c			\
		my_showstr.c 			\
		my_str_isnum.c 			\
		my_strstr.c			\
		my_isneg.c 			\
		my_sort_int_array.c 		\
		my_str_isprintable.c  		\
		my_strupcase.c			\
		my_is_prime.c			\
		my_strcapitalize.c		\
		my_str_isupper.c 		\
		my_swap.c			\

OBJ	= 	$(SRC:.c=.o) ##Quitar los .c

NAME	=	libmy.a  ##Nombre archivo

$(NAME):	$(OBJ)
		ar rc   $(NAME) $(OBJ)
		cp libmy.a ../
		cp my.h	../../include

all:	$(NAME)

copy:   $(COPY)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
