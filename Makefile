NAME = libft.a

OBJS = $(FILES:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
FILES = memset.c 

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $@ $^

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all
