#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>


/*====================OPEN, READ, CLOSE====================*/
int	main(void)
{
	int fd;
	char	buf[10];
	ssize_t nr_bytes;

	fd = open("/media/kali/B25F-326A/rush02/prueba/miFichero", O_RDONLY);

	if (fd == -1)
		printf("Error al abrir el archivo\n");
	else
	{
		nr_bytes = read(fd, buf, 5);
		close(fd);
		if(nr_bytes == 0)
		{
			printf("Archivo vacio\n");
		}
		else
		{
		printf("El numero de caracteres es: %d% , contenido: %s\n", (int)nr_bytes, buf);
		}
	}
	return (0);
}


/*====================MALLOC====================*/
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
