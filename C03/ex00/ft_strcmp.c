/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 00:57:51 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/27 18:55:33 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	//luiz
	//Paulo 92183128793193 => b ==
	while (*s1 == *s2 && *s1 != 0)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}
int main()
{
	char s1[] ="luiz";
	char s2[] = "luiz";
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", strcmp(s1, s2));
}
