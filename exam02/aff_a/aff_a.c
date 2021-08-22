#include <unistd.h>

int main(int ac, char **av)
{
	int	x;

	x = 0;
	if (ac == 2)
	{
		while (av[1][x] != '\0')
		{
			if (av[1][x] == 'a')
			{
				write(1, "a\n", 2);
				return (0);
			}
			x++;
		}
		write(1, "\n", 1);
		return (0);
	}
	write(1, "a\n", 2);
	return (0);
}
