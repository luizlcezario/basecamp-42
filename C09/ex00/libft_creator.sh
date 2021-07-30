#!/bin/sh
gcc -c ft_putstr.c ft_putchar.c ft_strcmp.c ft_strelen.c ft_swap.c 
ar rc libft.a ft_putstr.o ft_putchar.o ft_strcmp.o ft_strelen.o ft_swap.o 
