##
## EPITECH PROJECT, 2018
## Task01
## File description:
## MakefileTest
##

SRC	=	cat.c\

NAME	=	cat

OBJ	=	$(SRC:.c=.o)

PLIB	=	-L../lib/my

LIB	=	-lmy

all:
	make -C ../lib/my
	gcc -c $(SRC)
	gcc $(OBJ) $(PLIB) $(LIB) -o $(NAME)
clean:
	make clean -C ../lib/my
	rm -rf $(OBJ)

fclean:
	make fclean -C ../lib/my
	rm -rf $(OBJ)
	rm -rf $(NAME)

re:
	make fclean -C ../lib/my
	rm -rf $(OBJ)
	rm -rf $(NAME)
	make -C ../lib/my
	gcc -c $(SRC)
	gcc $(OBJ) $(PLIB) $(LIB) -o $(NAME)
