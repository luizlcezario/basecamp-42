/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 22:24:12 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/19 13:19:40 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int ltr);
void	ft_testing(int a, int y, int b, int x);
void	ft_loop(int	x, int	y);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		ft_putchar('D');
		ft_putchar('i');
		ft_putchar('g');
		ft_putchar('i');
		ft_putchar('t');
		ft_putchar('e');
		ft_putchar(' ');
		ft_putchar('x');
		ft_putchar(' ');
		ft_putchar('e');
		ft_putchar(' ');
		ft_putchar('y');
		ft_putchar('>');
		ft_putchar('0');
		ft_putchar('\n');
	}
	else
	{
		ft_loop(x, y);
	}
}

void	ft_loop(int	x, int	y)
{
	int	a;
	int	b;

	a = 0;
	while (a < y)
	{
		b = 0;
		while (b < x)
		{
			ft_testing(a, y, b, x);
			b++;
		}
		ft_putchar('\n');
		a++;
	}
}

void	ft_testing(int a, int y, int b, int x)
{
	if ((a == 0 && b == 0) || (a == 0 && b == x - 1))
	{
		ft_putchar('A');
	}
	else if ((a == y - 1 && b == 0) || (a == y - 1 && b == x - 1))
	{
		ft_putchar('C');
	}
	else if (a != 0 && a != y - 1 && b != 0 && b != x - 1 )
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('B');
	}
}
