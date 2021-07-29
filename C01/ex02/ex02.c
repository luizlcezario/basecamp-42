/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 01:40:45 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/18 01:46:16 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_swap(int *a, int *b);

int	main(void)
{
	int a;
	int b;
	int *pnt1;
	int *pnt2;

	pnt1 = &a;
	pnt2 = &b;
	a = 24;
	b = 42;
	printf("before: a = %d , b = %d \n", a, b);
	ft_swap(pnt1, pnt2);
	printf("after : a = %d , b = %d \n", a, b );
	return (0);
}