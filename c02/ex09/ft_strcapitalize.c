/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:38:18 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/18 17:18:17 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	char	x;
	int	y;
	
	x = 0;
	y = (x-1);
	while  (str[x] != '\0')
	{
		if(str[x] >= 'A' && str[x] <= 'Z')
		{
			str[x] += 32;
		}

		if (y >= 'a' && y <= 'z')
		{
			str[y] -= 32;
		}
	}
}

int main()
{
	char	x[43];

	x[43] = "escribeme Esto bIen a ver si funcioNa CoNO";
	ft_strcapitalize(&x);
	printf("%s\n", x);
	return (0);
}
