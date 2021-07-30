/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 15:59:05 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/30 00:49:44 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>




int main(int argc,char **argv,char *env)
{
	char *str = ;
	int a;

	if(argc >= 0)
	{
		a = 0;
		while(str[a] != 0)
		{
			write(1, &str[a], 1);
			a++;
		}
		write(1,"\n", 1);
	}
	return (0);
}
