/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:53:03 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/27 17:13:51 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_dealError(char *src);
void ft_loop(int nbr, int baseN, char *base);

void ft_putnbr_base(int nbr, char *base)
{
	int baseN;
	
	baseN = ft_dealError(base);
	if(baseN <= 2)
	{
		return  ;
	}
	if(nbr < '-')
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	ft_loop(nbr , baseN, base);
}

void ft_loop(int nbr, int baseN, char *base)
{
	if(nbr >= baseN)
	{
		ft_loop((nbr / baseN), baseN, base);
	}
	write(1, &base[nbr % baseN], 1);
}

int ft_dealError(char *src)
{
	int count;
	int a;

	count = 0;
	a = 0;
	while(src[a] != 0 )
	{
		if(src[a] == '+' || src[a] == '-')
		{
			return(0);
		}
		count = 0;
		while(src[count + a + 1] != 0 )
		{
			if(src[count + a] == src[count + a + 1])
			{
				return (0);
			}
			count++;
		}
		a++;
	}
	return (a);
}
