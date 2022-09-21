CC=gcc
CFLAGS=-Wall -Werror -Wextra
AR=ar -crs
NAME=libft.a

all: libft.o
		ar -crs libft.a *.o
libft.o:
		gcc -c *.c
comila: main.c libft.a
		gcc -Wall -Werror -Wextra main.c libft.a
clean: 
		rm -rf *.o
fclean: 
		rm -rf *.o *.a a.out