/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 16:18:15 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/28 02:43:12 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
//
//	str = ola mundo 2k
// 	to find = mu\0
//
	if (*to_find == 0 )
		return (str);
	else
	{
		while (*str != 0)
		{
			if (*to_find == *str)
			{
				a = 0;
				while (to_find[a] == str[a] || to_find[a] == 0)
				{
					if (to_find[a] == 0)
					{
						return (str);
					}
					a++;
				}
			}
			str++;
		}
	}
	return (0);
}
