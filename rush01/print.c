#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_solution(int board[4][4])
{
	int	row;
	int col;

	row = 0;
	col = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putchar(board[row][col] + '0');
			(col == 3) ? col++ : ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
