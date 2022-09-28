CC				=	gcc -c
CFLAGS			=	-Wall -Werror -Wextra
AR				=	ar -crs
RM				=	rm -rf
NAME			=	libft.a
INCLUDE			=	libft.h
SRCS			=	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
					ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c\
					ft_strlen.c

OBJS			=	ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o\
					ft_isprint.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strlcpy.o\
					ft_strlen.o


all: $(NAME)
		$(AR) $(NAME) $(OBJS)
$(NAME): $(OBJS) 
		$(CC) $(CFLAGS) $(SRCS) $(INCLUDE)

.PHONY: clean fclean

clean: 
		$(RM) $(OBJS)
fclean: 
		$(RM) $(NAME)
