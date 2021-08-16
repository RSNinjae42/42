#include <unistd.h>

int		solution(int board[4][4], int *input);


int		checkinput(char *arg, int *input)
{
	int	i;
	int	out;

	i = 0;
	out = 0;
	
	while (arg[i])
	{
		if (arg[i] < '1' || arg[i] > '4')
			return(0);
		if ((arg[i] >= '1' && arg[i] <= '4') && ((arg[i + 1] == ' ')
				|| ((arg[i + 1] == 0) && (arg[i - 1] == ' '))))
		{
			input[out++] = (arg[i++] - '0');
		}
		if (arg[i] == ' ')
			i++;
	}
	return(out);	
}

int		initboard(int *input)
{
	int		i;
	int		j;
	int		board[4][4];

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
			board[i][j++] = 0;
		i++;
	}
	solution(board, input);
	return(0);
}

int		main(int argc, char **argv)
{
	int input[16];

	if (argc == 2)
	{
		if (checkinput(argv[1], input) == 16)			
			initboard(input);
		else
			write(1, "\nERROR\n\n", 8);
	}
	else
		write(1, "\nERROR\n\n", 8);
	return (0);
}
