/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:29:40 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/07/27 19:47:59 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int nbr[] = "ola mundo\0";
	int	n;
	
	char *tmp;

	tmp = nbr;
	while(*nbr != '\0')
	{
		nbr++;
	}
	return(tmp);

	ft_ft(nbr);
	printf("n: %d, *nbr: %d, n_address: %p\n", n, *nbr, nbr);
	return (0);
}
