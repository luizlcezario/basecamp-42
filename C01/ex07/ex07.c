/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 01:21:16 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/07/22 00:54:08 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	 ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = { 0 , 1 , 2, 3 ,4 , 5 , 10 , 7 , 8 , 9};
	int i;
	
	for(i = 0 ; i < 10 ; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");
	ft_rev_int_tab(tab, 10);
	for(i = 0 ; i < 10 ; i++)
	{
		printf("%d ", tab[i]);
	}
	
	return (0);
}
