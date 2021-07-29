/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 14:44:33 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/21 20:01:08 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b);

int	main(void){
	int *a;
	int *b;
	int n1;
	int n2;

	n1 = 42;
	n2 = 5;
	a = &n1;
	b = &n2;
	printf("before: *a:%d  *b:%d\n", n1, n2);
	
	ft_ultimate_div_mod(a, b);
	
	printf("before: *a:%d  *b :%d\n", n1, n2);
	return (0);
}
