/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:06:40 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/26 16:15:18 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print(char *str)
{
	int b;

	b = 0;
	while(str[b] != 0)
	{
		write(1, &str[b], 1);
		b++;
	}
		write(1, "\n", 1);
}

int main(int argc,char **argv)
{

	while(argc > 1)
	{
		ft_print(argv[argc - 1]);
		argc --;
	}
}
