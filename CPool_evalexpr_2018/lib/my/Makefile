##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## task01day10
##

SRC	=	my_putchar.c	\
		my_put_nbr.c	\
		my_strdup.c	\
		my_strlen.c	\
		my_strcpy.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

LIB	=	-L./lib/my -lmy

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ..
	cp my.h ../../include/my.h

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

.PHONY : all re clean fclean
