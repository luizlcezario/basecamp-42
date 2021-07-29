/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 22:10:47 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/26 14:11:49 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void printGrid(int grid[4][4]);
void ft_putchar(char *string, int n);
int Condicionais(int matrix[4][4], int row, int col, int num);
int FindUnassignedLocation(int matrix[4][4], int *row, int *col)
{
	*row = 0;
	while (*row < 4)
  {
		*col = 0;
		while (*col < 4)
    {
			if (matrix[*row][*col] == 0)
      {
			  return (1);	
			}
			*col= *col + 1;
		}
		 *row= *row + 1;
	}
	return (0);
}
int rush01(int resMatris[4][4])
{
	int row;
	int col;
	int num;
	// verifica se tem local vazio 
	// se tiver ele  retornar 0 ele sera
	if(FindUnassignedLocation(resMatris,&row , &col) == 0)
		return (1); // Achou uma resposta
	//printGrid(resMatris);	
	//Considera os numeros 1 a 4
	num = 1;
	while(num <= 4)
	{
		// Checa se as condisoes serao verdadeiras [0][1]
																										
		if(Condicionais(resMatris,row,col,num) == 1)
		{
			// coloca o numero na posicao 
			resMatris[row][col] = num;
			// re-chama a funcao se 
			// o mapa que foi todo assinalado passar 
			// entao achamos um mapa que deu bom 
			// entao retornamos 1 indicando que deu bom 
			if(rush01(resMatris) == 1)
			{
				return(1);
			}
			// se nao nos tiramos todos os numeros que tinhas
			// postos e recomecamos 
			resMatris[row][col] = 0;
		}
		num++;
	}
	return 0;	
}
