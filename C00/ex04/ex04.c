/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 19:31:50 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/07/16 15:50:47 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_is_negative(int n);

int	main(void)
{
	int	i;

	i = -2;
	while (i <= 2)
	{
		ft_is_negative(i);
		i++;
	}
	printf("\n");
	return (0);
}
