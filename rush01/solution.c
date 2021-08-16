
#include <unistd.h>

void	print_solution(int board[4][4]);

void	row_with_four(int board[4][4], int *input)
{
	int fill;
	int pos;

	fill = 0;
	pos = 8;
	while ((input[pos]))
	{
		if (input[pos] == 4) 
			while (fill < 4)
			{
				board[pos % 4][fill] = fill + 1;
				fill++;
			}		
		pos++;
	}
	write(1,"row_with_four\n",14);
	print_solution(board);
}

int	col_with_four(int board[4][4], int *input)
{
	int pos;
	int fill;

	pos = 0;
	fill = 0;
	while ((input[pos]))
	{
		if (input[pos] == 4) 
			while (fill < 4)
			{
				board[fill][pos] = fill + 1;
				fill++;
			}		
		pos++;
	}
	write(1,"col_with_four\n",14);
	print_solution(board);
	return(pos);
}

void	put_fours(int board[4][4], int *input)
{
	int pos;

	pos = 0;
	while (input[pos])
	{
		if ((input[pos] == 1) && ((pos >= 0) && (pos <= 3)))
			board[0][pos] = 4;
		if ((input[pos] == 1) && ((pos >= 8) && (pos <= 11)))
			board[pos - 8][0] = 4;
		pos++;
	}
	write(1,"put_fours\n",10);
	print_solution(board);		
}

int		solution(int board[4][4], int *input){	
	put_fours(board, input);
	col_with_four(board, input);
	row_with_four(board, input);
	int sol = 1;
	if (sol == 1)
		write(1,"solucion\n",9);
		//print_solution(board);
	else
		write(1, "\nERROR - No Solution\n\n", 22);
	return (0);
}
