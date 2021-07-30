/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 19:32:49 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/30 19:37:56 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int main(int argc,char **argv)
{
	struct s_stock_str *teste;

	if(argc < 1)
	{
		printf("please enter more argvs\n");
	}
	else{
		teste = ft_strs_to_tab(argc , argv);
		printf("%d", teste->size);
	}
}
