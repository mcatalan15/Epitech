##
## EPITECH PROJECT, 2021
## makefile
## File description:
## A makefile with all the library
##

SRC	=	my_compute_factorial_rec.c\
		my_compute_power_rec.c\
		my_compute_square_root.c\
		my_find_prime_sup.c\
		my_getnbr.c\
		my_is_prime.c\
		my_isneg.c\
		my_put_nbr.c\
		my_putchar.c\
		my_putstr.c\
		my_revstr.c\
		my_showmem.c\
		my_showstr.c\
		my_sort_int_array.c\
		my_str_isalpha.c\
		my_str_islower.c\
		my_str_isnum.c\
		my_str_isprintable.c\
		my_str_isupper.c\
		my_strcapitalize.c\
		my_strcat.c\
		my_strcmp.c\
		my_strcpy.c\
		my_strlen.c\
		my_strlowcase.c\
		my_strncat.c\
		my_strncmp.c\
		my_strncpy.c\
		my_strstr.c\
		my_strupcase.c\
		my_swap.c\

OBJ = $(SRC:.C=.O)

AR = 		ar rc

NAME =		libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
	cp libmy.a ../
	cp my.h ../../include

clean:
	rm -f $(OBJ)
fclean:
	rm -f $(NAME)
re:	fclean all
