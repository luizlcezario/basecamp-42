/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 17:43:00 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/29 03:05:56 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else if (nb == 1)
		return (1);
	else
	{
		res = nb * ft_recursive_factorial(nb - 1);
		return (res);
	}
}

int main(void )
{
	printf("%d", ft_recursive_factorial(7));
}
