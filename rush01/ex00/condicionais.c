/*
	A Função abaixo verif ica os padroes para que um numero possa 
	ser asinalada em uma das posicoes.
*/

int Condition( int row,int col,int num);
int UsedInCol(int  matrix[4][4], int col, int num);
int UsedInRow(int grid[4][4], int row, int num);
extern int g_matrix[4][4];

int Condicionais(int matrix[4][4], int row, int col, int num)
{
		if (UsedInRow(matrix, row, num) == 0
			&& UsedInCol(matrix, col, num) == 0
			&& Condition(row , col , num) == 0
			&& matrix[row][col] == 0)
			return(1);	
		return(0);
}

int UsedInCol(int  matrix[4][4], int col, int num)
{
	for (int row = 0; row < 4; row++)
		if (matrix[row][col] == num)
			return (1);
  return (0);
}

int UsedInRow(int matrix[4][4], int row, int num)
{
		for (int col = 0; col < 4; col++)
			if (matrix[row][col] == num)
				return (1);
    return (0);
}

int Condition(int row, int col,int num)
{
	int row_alto = row / 2;
	int row_lado = (col / 2) + 2;
	if (row == 0 || row == 3)
	{
		if (g_matrix[row_alto][col] == 4 && num != 1)
			return (1);
		if (g_matrix[row_alto][col] == 1 && num != 4)
			return (1);
		if (g_matrix[row_alto][col] == 3 && num != 1 && num != 2)
			return (1);
	}if (col == 0 || col == 3)
	{
		if (g_matrix[row_lado][row] == 4 && num != 1)	
			return (1);
		if (g_matrix[row_lado][row] == 1 && num != 4)
			return (1);
		if (g_matrix[row_lado][row] == 3 && num != 1 && num != 2)
			return (1);
	}
	if ((row == 0 && col == 0 ) 
	|| (row == 0 && col == 3 )
	|| (row == 3 && col == 0 )
	|| (row == 3 && col == 3 ))
	{
	  if (((g_matrix[row_alto][col] == 3) || (g_matrix[row_lado][row] == 3)) && num != 2 && num != 1)
			return (1);
		if ((g_matrix[row_alto][col] == 2 || g_matrix[row_lado][row] == 2) && num != 1 && num != 2 && num != 3 )
			return (1);
		if(((g_matrix[0][col] == 3) || (g_matrix[2][row] == 3)) && ((g_matrix[1][col] == 3) || (g_matrix[3][row] == 3) )&& num != 2)
			return(1);
	}
	if  (row != 0 && col != 0 &&
	row != 3 && col != 3)
	{			
		if ((g_matrix[row_alto][col] == 4 || g_matrix[row_lado][row] == 4)  && num != 2)
				return (1);
	}
  return (0);
}
 