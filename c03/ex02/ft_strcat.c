/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:16:41 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/18 21:19:37 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	y;

	x = 0;
	while (dest[x])
		x++;
	y = 0;
	while (src[y])
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
   // unsigned int n = 22;
    //char dest[23] = "45fdghfhpapi";
    //char src[] = "dadfgdfddi";
    char dest[90] = "4pi";
    char src[] = "fdfgffgdi";
	char dest1[90] = "4pi";
	//printf("%s\n", strcat(dest, src));

	printf("%s\n", strcat(dest, src));
    printf("\n%s\n",ft_strcat(dest1, src));
}

