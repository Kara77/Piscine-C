##
## EPITECH PROJECT, 2018
## Task1/2
## File description:
## Makefile
##

SRC	=	rush3.c

OBJ	=	$(SRC:.c=.o)

PLIB	=	-L./lib

NAME	=	rush3

all:	$(NAME)

$(NAME):	$(OBJ)
	make -sC ./lib/my
	gcc -o $(NAME) $(OBJ) $(PLIB) -lmy
clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
