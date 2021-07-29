/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 15:14:28 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/21 20:12:11 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str);

int main(void){
	char *str = "Hello";
	int a;
	
	a = ft_strlen(str);
	printf("len : %d str:'%s' \n", a , str);
	return(0);
}
