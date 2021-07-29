/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 01:59:54 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/18 14:46:37 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a;
	int b;
	int *mod;
	int *div;

	a = 42;
	b = 5;
	div = calloc(1, sizeof(int));
	mod = calloc(1, sizeof(int));
	printf("numbers: a = %d , b = %d \n", a, b);
	ft_div_mod(a, b ,div, mod);
	printf("div = %d ,  mod = %d \n", *div, *mod);
}
