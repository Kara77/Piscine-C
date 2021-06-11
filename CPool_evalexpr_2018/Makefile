##
## EPITECH PROJECT, 2018
## Task1/2
## File description:
## Makefile
##

SRC	=	main.c \
		number.c \
		eval_expr.c

OBJ	=	$(SRC:.c=.o)

PLIB	=	-L./lib

NAME	=	eval_expr

all:	$(NAME)

$(NAME):	$(OBJ)
	make -sC ./lib/my
	gcc -o $(NAME) $(OBJ) $(PLIB) -lmy
clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
