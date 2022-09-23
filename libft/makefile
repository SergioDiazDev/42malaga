CC				=	gcc -c
CFLAGS			=	-Wall -Werror -Wextra -I
AR				=	ar -crs
RM				=	rm -rf
NAME			=	libft.a
SRCS			=	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
					ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c\
					ft_strlen.c

OBJS			= $(SRCS:.c=.o)

all: $(NAME)
		$(AR) $(NAME) $(OBJS)
$(NAME): $(OBJS)
		$(CC) $(SRCS)

clean: 
		$(RM) $(OBJS)
fclean: 
		$(RM) $(NAME)
.PHONY: clean fclean