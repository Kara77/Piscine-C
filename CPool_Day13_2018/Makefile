##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## task00day13
##

SRC	=	btree_create_node.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libbtree.a

LIB	=	-L. -lbtree

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

.PHONY : all re clean fclean
