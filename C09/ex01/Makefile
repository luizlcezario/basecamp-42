.PHONY: all clean fclean re

SRCS = ft_putstr.c ft_putchar.c ft_strcmp.c ft_strelen.c ft_swap.c 

OBJS = ${SRCS:.c=.o}

NAME = libft.a

all:
		gcc -Wall -Wextra -Werror -c srcs/ft_putstr.c srcs/ft_putchar.c srcs/ft_strcmp.c srcs/ft_strelen.c srcs/ft_swap.c 
		ar rc ${NAME} ${OBJS}

clean:
		rm -f  ${OBJS}

fclean: 
		rm -f ${OBJS} ${NAME}

re: fclean all

