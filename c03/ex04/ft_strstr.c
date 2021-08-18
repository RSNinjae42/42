/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:26:29 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/18 21:22:22 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	while (str[x])
	{
		y = 0;
		while (str[x + y] && to_find[y] && str[x + y] == to_find[y])
			y++;
		if (!to_find[y])
			return (str + x);
		x++;
	}
	return (0);
}

int main()
{
	char str[] = "656anas62";
	char to_find[] = "6an";
	printf("%s", strstr(str, to_find));
//	printf("\n%s", str);
//	printf("\n%s", to_find);
	printf("\n%s", ft_strstr(str, to_find));
}
