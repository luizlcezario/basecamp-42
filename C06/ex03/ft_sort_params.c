/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:06:40 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/29 17:27:11 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(char **tab, int size);
void ft_print(char *str);

int main(int argc,char **argv)
{
	
	ft_sort_int_tab(argv, argc );
	while(0 < argc -1)
	{
		ft_print(argv[argc - 1]);
		argc--;
	}
	return (0);
}


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


int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != 0 && *s1 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}


void	ft_sort_int_tab(char **tab, int size)
{
	int	a;
	int	i;
	char	*tmp;

	tmp = "";
	a = 1;
	while (a < size)
	{
		i = 1;
		while (i < size - a)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) < 0)
			{
				tmp = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = tmp;
			}
			i++;
		}
		a++;
	}
}
