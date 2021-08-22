#include <stdlib.h>
#include <stdio.h>


void	fillz(char *ptr, unsigned int nbr)
{
	for(int i = 0; i < nbr; i++)
	{
		*ptr = 'z';
		ptr++;
	}
}

int	main(void)
{
	unsigned int	nbr;
	char	*ptr = NULL;
	scanf("%ud", &nbr);
	ptr = malloc(nbr);
	if (ptr != NULL)
	{
		fillz(ptr, nbr);
		printf("%d", fillz);
		free(ptr);
	}
	return (0);
}
