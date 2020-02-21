# make -f 100 Makefile executable deletes and recompilation 

CC = gcc
OBJ = $(SRC:.c=.o)
NAME = holberton
SRC = main.c holberton.c
CFLAGS = -Wall -Werror -Wextra -pedantic

.PHONY: all clean oclean fclean re

clean:
	$(RM) *~ $(NAME)

all: m.h $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

fclean:clean oclean

oclean:
	$(RM) $(OBJ)

re: oclean all
