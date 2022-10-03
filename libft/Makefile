NAME			=	libft.a
CC				=	gcc -c
CFLAGS			=	-Wall -Werror -Wextra
AR				=	ar -crs
RM				=	rm -f
INCLUDE			=	libft.h
SRC			=	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
					ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c\
					ft_strlen.c

OBJ			=	ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o\
					ft_isprint.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strlcpy.o\
					ft_strlen.o


all: $(NAME)

$(NAME): $(OBJ)
		$(AR) $(NAME) $(OBJ)
$(OBJ): $(SRC)
		$(CC) $(CFLAGS) $(SRC) $(INCLUDE)

so: $(SRC) $(OBJ)
		clang -nostartfiles -fPIC $(CFLAGS) $(SRC)
		gcc -nostartfiles -shared -o libft.so $(OBJ)

re:
		fclean all

clean: 
		$(RM) $(OBJ)
fclean: clean
		$(RM) $(NAME) libft.h.gch libft.so a.out

.PHONY: all re clean fclean so