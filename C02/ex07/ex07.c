/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:07:27 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/24 03:41:52 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strupcase(char *str);

int	main(void)
{
	char str1[10] = "asdbasjh";
	char str2[10] = "asddasdA";
	char str3[10] = "123ASdas";
	char str4[10] = "teste 123";
	char *s; 

	s = calloc(11,sizeof(char));
	printf("str1: %s,\n", str1);
	printf("str2: %s,\n", str2);
	printf("str3: %s,\n", str3);
	printf("str4: %s,\n", str4);
	s = ft_strupcase(str1);
	printf("str1: %s,\n", s);
	s =  ft_strupcase(str2);
	printf("str1: %s,\n", s);
	ft_strupcase(str3);
	ft_strupcase(str4);
	printf("str1: %s,\n", str1);
	printf("str2: %s,\n", str2);
	printf("str3: %s,\n", str3);

	printf("str4: %s,\n", str4);

	return (0);
}
