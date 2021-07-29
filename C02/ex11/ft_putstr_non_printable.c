/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 18:12:27 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/29 02:50:14 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


const char	g_hex[] = "0123456789abcdef";

void	ft_putstr_non_printable(char *str)
{  
	char	new[3];

	new[0] = '\\';
	while (*str != '\0')
	{
		if (*str < 32 && *str > 127)
		{					        
			new[1] = g_hex[*str / 16];
			new[2] = g_hex[*str % 16];
			write(1, new, 3);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}
