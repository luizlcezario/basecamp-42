/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 17:22:45 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/26 18:00:22 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
	char *new;
	unsigned int a;
	unsigned int i;

	a = 0;
	while(src[a] != 0)
		a++;
	new = malloc(a);
	i = 0;
	while(i < a)
	{
		new[i] = src[i];
		i++;
	}
	new[i] = 0;
	return (new);
}
