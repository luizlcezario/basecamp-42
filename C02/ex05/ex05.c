/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:07:27 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/19 18:39:33 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_str_is_uppercase(char *str);

int	main(void)
{
	char str1[] = "ASDASDASDASDASD";
	char *str2;
	char *str3;
	char *str4;

	str2 = calloc(10, sizeof(char));
	str3 = calloc(10, sizeof(char));
	str4 = calloc(10, sizeof(char));
	str2 = "abaAdij";
	str3 = "2bC4124Hi";
	str4 = "4356Cde2";
	printf("str1: %s, is_aplha: %d\n", str1, ft_str_is_uppercase(str1));
	printf("str2: %s, is_aplha: %d\n", str2, ft_str_is_uppercase(str2));
	printf("str3: %s, is_aplha: %d\n", str3, ft_str_is_uppercase(str3));
	printf("str4: %s, is_aplha: %d\n", str4, ft_str_is_uppercase(str4));
	return (0);
}