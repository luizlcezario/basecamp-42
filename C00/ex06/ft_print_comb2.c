/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 00:19:10 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/30 13:50:01 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_Loop(int num1);
void	ft_print(int	dec1, int	uni1, int	dec2, int	uni2);

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;
	
	num1 = 0;
	while (num1 < 99)
	{
		num2 = num1 + 1;
		while (num2 < 100)
		{
			ft_print(num1 / 10 + '0',
			num1 % 10  + '0', 
			num2 / 10  + '0',
			num2 % 10 + '0');
			num2++;	
		}
		num1++;
	}
}

void	ft_print(int	dec1, int	uni1, int	dec2, int	uni2)
{
	write(1, &dec1, 1);
	write(1, &uni1, 1);
	write(1, " ", 1);
	write(1, &dec2, 1);
	write(1, &uni2, 1);
	if (dec1 == '9' && uni1 == '8' && dec2 == '9' && uni2 == '9')
		return ;
	else
		write(1, ", ", 2);
}

