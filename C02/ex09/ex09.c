/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex09.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:39:44 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/23 00:31:03 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
	char str5[] = "^uIv#= =9Hf~2y@F3A)FTzBgF";
	char str6[] = "tsR1|vn_WE}7X6{Vm2vQf(rG}qdnT`1,qH+n";


		printf("%s", str5);
		ft_strcapitalize(str5);
		printf("\n%s", str5);
		printf("\n\n%s", str6);
		ft_strcapitalize(str6);
		printf("\n%s", str6);
		printf("\n");
}
