/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 03:35:41 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/27 17:57:33 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((*s1 != 0 && *s1 == *s2) && a < n - 1)
	{
		a++;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int main()
{
	char s1[] ="luzl";
	char s2[] ="lazilo";
	printf("%d\n", ft_strncmp(s1, s2 , 3));
}
