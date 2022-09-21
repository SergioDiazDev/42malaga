CC=gcc
CFLAGS=-Wall -Werror -Wextra
AR=ar -crs
NAME=libft.a

all: libft.o
		ar -crs libft.a *.o
libft.o:
		gcc -c *.c
clean: 
		rm -rf *.o
fclean: 
		rm -rf *.o *.a a.out