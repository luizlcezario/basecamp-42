/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilits.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 23:15:24 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/26 01:27:34 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	num;

	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		++str;
	}
	if (sign == -1)
		return (0);
	num = 0;
	while (*str <= '9' && *str >= '0')
	{
		if (num < 2147483647)
			num += *str - 48;
		else
			return (0);
		if (*(str + 1) <= '9' && *(str + 1) >= '0')
			num *= 10;
		str++;
	}
	return (num * sign);
}

void	ft_putchar(char *string, int n)
{
	write(1, string, n);
}

void	printGrid(int grid[4][4])
{
	int	row;
	int	col;
	int	tmp;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			tmp = grid[row][col] + 48;
			write(1, &tmp, 1);
			if (col != 3)
				write(1, " ", 1);
			col++;
		}
		ft_putchar("\n", 1);
		row++;
	}
}
