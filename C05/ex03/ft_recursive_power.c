/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 18:29:51 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/29 03:09:02 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{	
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		nb *= ft_recursive_power(nb, power - 1);
		return (nb);
	}
}

int main(void )
{
	printf("%d\n", ft_recursive_power(2, 4));
}
