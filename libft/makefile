CC=gcc
CFLAGS=-Wall -Werror -Wextra
AR=ar -crs
NAME=libft.a

all: libft.o
		$(AR) libft.a *.o
libft.o:
		$(CC) -c *.c
c: main.c $(NAME)
		$(CC) $(CFLAGS) main.c $(NAME)
clean: 
		rm -rf *.o
fclean: 
		rm -rf *.o *.a a.out