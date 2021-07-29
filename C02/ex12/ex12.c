/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex12.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 21:54:07 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/24 01:32:08 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void *ft_print_memory(void *addr, unsigned int size);

int main (void)
{
	char str[16] = "Bonjour les amin";
	char str1[16] = "ches\t\n\tc  est fo";
	char str2[13] = "\n\nlol.lol\n ";
//	char str2[16] = "u\ntout\nce qu on";
//	char str2[16] = "u\ntout\nce qu on";
	
	ft_print_memory(str, 16);
	ft_print_memory(str1, 16);
	ft_print_memory(str2, 14);
	return(0);
}

// c  h e s  \t\n \t c      e  s t    f  o
// 6368 6573 0a0a 0a63 2065 7374 2066 6f00
// 6368 6573 090a 0963 2020 6573 7420 666f

// \n\n l  o l  . l  o l \n ' '\0
// 0a09 6c6f 6c2e 6c6f 6c0a 2000
