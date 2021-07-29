/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 14:42:03 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/17 14:42:04 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_Print_Number(int nb);

void	ft_putnbr(int nb)
{
	if (nb >= 0)
	{
		nb *= -1;
		ft_Print_Number(nb);
	}
	else
	{
		write(1, "-", 1);
		ft_Print_Number(nb);
	}
}

void	ft_Print_Number(int nb)
{
	int	My_chars[10];
	int	i;

	i = 9;
	while (nb <= -10)
	{
		if (nb <= -2147483648)
		{
			My_chars[i] = 56;
			nb /= 10;
			i--;
		}
		else
		{
			My_chars[i] = ((nb * -1) % 10) + 48;
			nb /= 10;
			i--;
		}
	}
	My_chars[i] = ((nb * -1) % 10) + 48;
	while (i <= 9)
	{
		write(1, &My_chars[i], 1);
		i ++;
	}
}
