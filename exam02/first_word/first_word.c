#include <unistd.h> 

int main(int ac, char **av)
{
	int	x;
	char	y;

	x = 0;
	if (ac == 2)
	{
		while (av[1][x] == ' ' || av[1][x] == '\t')
			x++;
		while (av[1][x] != '\0' && av[1][x] != ' ' && av[1][x] != '\t')
		{
			y = av[1][x];
			write(1, &y, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
