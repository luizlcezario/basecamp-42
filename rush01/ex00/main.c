/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 22:39:35 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/26 13:33:22 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
//	funcoes permitidas 
// 	write , malloc , free
//	1.ok receber as colocaoes up down left right 
// 	2.ok recriar alloc
// 	3.ok lidar com erros na entrada de dados 
//	3. calculate re result 
// 	4. lidar com erros 
//						collup 		colldown	collleft		colrigth
int	ft_atoi(char *str);
int	Create_matrix_to_solution(char *str);
int	rush01(int resMatris[4][4]);
int	printGrid(int grid[4][4]);
int	ft_putchar(char *string, int n);
int	g_err = 1;
int	g_matrix[4][4];

int	main(int argc, char **argv)
{
	char	*str;
	int	matrixRes[4][4] = {{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0}};

	str = argv[1];
	if (argc != 2)
	{
		g_err = 0;
		ft_putchar("Error no formato do input\n", 26);
		return (1);
	}
	g_err =	Create_matrix_to_solution(str);
	if (g_err == 0)
		return (1);
	if (rush01(matrixRes) == 1)
		printGrid(matrixRes);	
	else
	{
		ft_putchar("error\n", 6);
	}
	return (0);
}

int	Create_matrix_to_solution(char *str)
{
	int	a;
	int	col;
	int	row;

	a = 0;
	col = 0;
	row =0;
	while (str[a] != 0)
	{
		if (str[a] >= '0' && str[a] <= '9')
		{
			if (ft_atoi(&str[a]) > 0 && ft_atoi(&str[a]) <= 4)
			{	
				g_matrix[col][row] = ft_atoi(&str[a]);
				row++;
			}
			else
			{
				ft_putchar("Error nos numeros\n", 18);
				return (0);
			}
			if (row >= 4)
			{		
				row = 0;
				col++;
			}
			while (str[a] >= '0' && str[a] <= '9')
			{
				a++;
		  }
		}
		a++;
	}
	return (1);
};
