NAME			=	libft.a
CC				=	gcc -c
CFLAGS			=	-Wall -Werror -Wextra
AR				=	ar -crs
RM				=	rm -f
INCLUDE			=	libft.h
SRC			=	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
					ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c\
					ft_strlen.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c\
					ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
					ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
					ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c

OBJ			=	ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o\
					ft_isprint.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strlcpy.o\
					ft_strlen.o ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o\
					ft_strrchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o\
					ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o\
					ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o


all: $(NAME)

$(NAME): $(OBJ)
		$(AR) $(NAME) $(OBJ)
$(OBJ): $(SRC)
		$(CC) $(CFLAGS) $(SRC) $(INCLUDE)

re:
		fclean all

clean: 
		$(RM) $(OBJ)
fclean: clean
		$(RM) $(NAME) libft.h.gch libft.so a.out

.PHONY: all re clean fclean so