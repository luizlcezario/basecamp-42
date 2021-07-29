/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 13:15:46 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/27 18:35:43 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*ret;

	ret = dest;
	while (dest != 0)
	{
		dest++;
	}
	while (*src != 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (ret);
}
int main (void )
{
	char str[] = "Paulo Feio";
	char dest[] = "ola ";
	char *ret;
	// "ola "  <- "luiz" = "ola luiz"
	ret = strcat(dest, str);
	printf("%s\n", dest);
	printf("%s\n", ret);
}
