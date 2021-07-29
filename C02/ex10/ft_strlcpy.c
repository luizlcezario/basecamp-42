/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:57:24 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/28 04:26:12 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	letter;

	letter = 0;
	while (*src != 0 && letter < size )
	{
		*dest++ = *src++;
		letter++;
	}
	// esse meu if e pra se caso o letter por algum erro passe ou fique igual o size 
	// pra ele nao botar o \0 no lugar errado . ola  mundo
	if(letter == size)
		--dest;
	*dest = '\0';
	while(*src != '\0')
	{
		letter++;
		src++;
	}
	return (letter);
}
