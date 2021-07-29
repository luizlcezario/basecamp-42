/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 14:33:27 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/23 21:54:13 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

const char *g_dec = "0123456789abcdefg"; 

int ft_verify_size(char *base);
int ft_loop(int size,char *str,char *base);
int ft_pow(int size, int pow);
//	1.ok verificar tamanho do base verificar se tem whitespaces e + - e retornar zero
//	2.ok verificar se todo o str so contem caracteres que a base contem 
//	3. converter o str que esta na base *base para o base decimal 
int ft_atoi_base(char *str, char *base)
{
	int size;
	int res;
	size = ft_verify_size(base);
	if(size < 2)
	{
		return (0);
	}
	res = ft_loop(size, str, base);
	return (res);
}

int ft_loop(int size,char *str,char *base)
{
	int res;
	
	while()
}

int ft_pow(int size, int pow)
{
	int tmp;

	tmp = size;
	if(pow == 0)
	{
		return (size);
	}
	else if(pow == 1)
	{
		return (size * size);
	}
	While(pow >= 2)
	{
		size *= tmp;
		pow--;
	}
	return (size);
}



int ft_verify_size(char *base)
{
	int count;
	int a;

	count = 0;
	a = 0;
	while(src[a] != 0 )
	{
		if(src[a] == '+' || src[a] == '-' || src[a] > 8 && src[a] < 14 || src[a] == ' ')
		{
			return (0);
		}
		count = 0;
		while(src[count + a + 1] != 0 )
		{
			if(	src[count + a] == src[count + a + 1])
			{
				return (0);
			}
			count++;
		}
		a++;
	}
	return (a);
}
