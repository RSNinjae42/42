/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:22:40 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/18 21:21:12 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				x;
	unsigned int	y;

	x = 0;
	while (dest[x])
		x++;
	y = 0;
	while (src[y] && y < nb)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}

int main()
{
	char dest[90] = "4pi";
    char src[] = "fdfgffgdi";
    char dest1[90] = "4pi";
	unsigned int nb = 4;
    //printf("%s\n", strcat(dest, src));
    printf("%s\n", strncat(dest, src, nb));
    printf("\n%s\n",ft_strncat(dest1, src, nb));
}
