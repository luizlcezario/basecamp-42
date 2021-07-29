/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex11.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 18:41:03 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/25 02:10:21 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int ft_putstr_non_printable(char *str);

int	main(void)
{
	char strtest0[] = {'0', '1', 3, 26, '2', '3', -12, 'f', '\n', 'a', 'b', '\0'};

	char strans0[] = "01\\03\\1a23\\0cf\\0aab";


	ft_putstr_non_printable(strtest0);
	printf("\t==\t%s\n", strans0);

	printf("\n");



	return (0);
}
