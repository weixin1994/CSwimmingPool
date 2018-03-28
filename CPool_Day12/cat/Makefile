SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	cat

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)  -L ./lib/ -lmy

clean:
		rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all
