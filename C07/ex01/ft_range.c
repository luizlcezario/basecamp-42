/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:42:42 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/28 14:33:36 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *res;
	int i;

	
	if(min < max)
	{
		res = (int *)malloc((max - min)*sizeof(int));
		i = 0;
		if(res)	
		{
			while(min < max)
			{
				res[i] = min;
				min++;
				i++;
			}
		}
		return(res);
	}
	return(0);
}
