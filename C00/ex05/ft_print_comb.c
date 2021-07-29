/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:08:54 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/17 22:49:10 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int	a, int	b, int	c);
void	ft_loop(int a, int b, int c);

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		ft_loop(a, b, c);
		b++;
		a++;
		c++;
	}
}

void	ft_loop(int a, int b, int c)
{
	while (b <= '8')
	{
		ft_print(a, b, c);
		c++;
		if (c > '9')
		{
			b++;
			c = b + 1;
		}
	}	
}

void	ft_print(int	a, int	b, int	c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a < '7')
	{
		write(1, ", ", 2);
	}
	return ;
}
