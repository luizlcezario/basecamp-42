/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 15:37:33 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/28 14:49:06 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	unsigned int i;

	if (range == NULL)
		return (-1);
	if(min < max)
	{
		*range = malloc((max - min)* sizeof(int));
		if(*range == NULL)	
			return (-1);
		i = 0;
		while(min < max)
		{
			(*range)[i] = min;
			min++;
			i++;
		}
		return(i);
	}
	return(0);
}
