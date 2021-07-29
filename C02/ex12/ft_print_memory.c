/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:01:41 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/28 19:01:45 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

const char	g_hex[16] = "0123456789abcdef";

void	Print_Address(size_t addr);
void	Print_Hex_Chars(char *addr, unsigned int size);
void	Print_String(char *addr, unsigned int size);

void	*ft_print_memory(char *addr, unsigned int size)
{	
	if (size <= 16 && size > 0)
	{	
		Print_Address((size_t)&addr);
		if (size % 2 != 0)
		{	
			size++;
		}
		Print_Hex_Chars(addr, size);
		Print_String(addr, size);
		write(1, "\n", 1);
	}
	else
		write(1, "Erro, adicione um numero maior que 0 ou menor que 16.\n", 64);
	return (0);
}

void	Print_Address(size_t addr)
{
	int	i;
	int	address[15];	

	i = 14;
	while (i >= 0)
	{						
		address[i] = g_hex[addr % 16];
		addr /= 16;	
		i--;
	}
	while(i < 15)
	{
			write(1, &address[i], 1);
			i++;
	}
	write(1, ": ", 2);
}

void	Print_Hex_Chars(char *addr, unsigned int size)
{
	unsigned char	hex[2];
	unsigned int	a;

	a = 0;
	while (a < size)
	{	
		hex[0] = g_hex[*((char *)addr + a) / 16];
		hex[1] = g_hex[*((char *)addr + a) % 16];
		write(1, hex, 2);
		if (a % 2 != 0)
		{
			write(1, " ", 1);
		}
		a++;
	}
}

void	Print_String(char *addr, unsigned int size)
{
	unsigned int	a;
	unsigned int	ltr;

	a = 0;
	while (a < size)
	{
		ltr = addr[a];
		if (ltr >= 32 && ltr < 127)
		{
			write(1, &ltr, 1);
		}
		else
		{
			write(1, ".", 1);
		}
		a++;
	}
}

int main()
{
	int n;

	ft_ft(&n);
}










