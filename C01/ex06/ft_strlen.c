/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 15:14:30 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/21 20:11:08 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	a;
	int	letters;

	a = 0;
	letters = 1;
	while (letters != 0)
	{
		letters = *(str + a);
		a++;
	}
	return (a - 1);
}
