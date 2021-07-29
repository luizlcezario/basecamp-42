/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 01:17:14 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/24 18:00:54 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//norminette -R ./ex*/f*

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*src;
	char	*dest;
	char	*ret;

//	src = calloc(11, sizeof(char));
	src = "";
	dest = calloc(11, sizeof(char));
	ret = ft_strcpy(dest, src);
	printf("src : %s\n", src);
	printf("dest : %s\n", dest);
	printf("ret : %s\n", ret);
}
