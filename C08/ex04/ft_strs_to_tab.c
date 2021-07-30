/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 19:32:47 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/30 23:49:40 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// nao finalizado
#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>
void	struck_init(struct s_stock_str *res, int t);
int	ft_strlen(char *str);

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str *res;
	//int a;

	res = NULL;
	res = malloc((ac + 1)* sizeof (struct s_stock_str));
	if(res == NULL)
		return(NULL);
	struck_init(&res[ac], 0);
	while(--ac >= 0)
	{
		struck_init(&res[ac] , ft_strlen(av[ac]));
	}
	return (res);
}
int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != 0)
		a++;
	return (a);
}

void	struck_init(struct s_stock_str *res, int t)
{
	if(t == 0)
	{
		res->size = 0;
		res->str = NULL;
		res->copy = NULL;
	}
	else
	{
		res->size = 0;
		res->str = NULL;
		res->copy = NULL;
	}
}
