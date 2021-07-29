/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:49:40 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/27 01:10:31 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	write(1, "-2: ", 4);
	ft_putnbr(-2);
	write(1, "\n-42: ", 5);
	ft_putnbr(-42);
	write(1, "\n27: ", 6);
	ft_putnbr(27);
	write(1, "\nINT_MAX: ", 10);
	ft_putnbr(INT_MAX);
	write(1, "\nINT_MIN: ", 10);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	return (0);
}
