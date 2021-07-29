/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 14:42:13 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/18 00:13:09 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print(int My_Number[], int n);

void	ft_print_combn(int n)
{
	int	My_Number[10];
	int	i;

	i = 0;
	while (i < n)
	{
		My_Number[i] = i + '0';
		i++;
	}	
	i = n - 1;
	while (My_Number[0] <= 58 - n)
	{
		ft_print(My_Number, n);
		My_Number[i]++;
		if (My_Number[i] > 58 - n + i)
		{
			My_Number[i] = My_Number[i - 1] + 1;
			i--;
		}
		if (My_Number[i] <= My_Number[i + 1])
		{
			i++;
		}
	}
}

void	ft_print(int My_Number[], int n)
{
	int	o;

	o = 0;
	while (o <= n)
	{
		write(1, &My_Number[o], 1);
	}
	write(1, ", ", 2);
}
