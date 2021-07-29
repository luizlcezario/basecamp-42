/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 17:55:53 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/29 03:08:11 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	n;
	int	res;

	n = 1;
	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (n < power)
	{
		res *= nb;
		n++;
	}
	return (res);
}

int main(void )
{
	printf("%d\n", ft_iterative_power(2, 4));
}
