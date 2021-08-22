#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main ()
{
	int *nbr;
	unsigned int	*nbr1;
	char	*ptr = NULL;

	scanf("%d", &nbr);

	ptr = malloc(nbr1);

	void	fill(char *ptr, unsigned int nbr)
	{
		for(int i = 0; i < nbr; i++)
		{
			*ptr = nbr;
			ptr++;
		}
	}

	if (ptr = NULL)
		return (0);
	else
		fill(ptr, nbr);

	if (nbr < '0')
	{
		write(1, "Error\n", 6);
		return (0);
	}

	if (nbr >= '0' && nbr <= '9')
	{
		printf("%d", &nbr);
		write(1, &nbr, 1);
		return (0);
	}
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
	free(nbr1);
}
