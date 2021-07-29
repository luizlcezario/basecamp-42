/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:14:04 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/27 01:05:00 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

int main(void)
{
	char str[] = "asdasd";
	// char s[] = "brabo de";
	int a;
	
	a = strlen(str);
	printf("strelen : %d\n", a);
	a = ft_strlen(str);
	printf("ft_len : %d\n", a);
}
