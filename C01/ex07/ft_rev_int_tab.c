/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 20:50:56 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/22 01:17:21 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	tmp;

	i = 0;
	a = size - 1;
	while (i < a)
	{
		tmp = tab[i];
		tab[i] = tab[a];
		tab[a] = tmp;
		i++;
		a--;
	}
}
