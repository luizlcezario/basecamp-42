/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:49:49 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/27 17:05:14 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print(int ltr)
{
	write(1, &ltr , 1);
}

void loop(int nb)
{
	if(nb >= 10)
	{
		loop(nb / 10);
	}
	ft_print((nb % 10) + '0');
}

void ft_putnbr(int nb)
{
	if(nb < 0 && nb != -2147483648)
	{
		nb *= -nb;
		write(1,"-", 1);
	}
	if (nb != -2147483648)
	{
		loop(nb);
	}
	if ( nb == -2147483648)
	{
		write(1,"-", 1);
		nb /= 10;
		nb *= -nb;
		loop(nb);
		write(1, "8", 1);
	}
}
