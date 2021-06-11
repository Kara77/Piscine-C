##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## 
##

SRC =	*.c

OBJ =	$(SRC:.c=.o)

NAME =	match

PLIB =	-L../lib/my

LIB =	-lmy

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(PLIB) $(LIB)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY all clean fclean re
