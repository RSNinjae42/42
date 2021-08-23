/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <rfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:37:39 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/17 19:47:02 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while(str[x] != '\0')
	{
		if(str[x] >= 'A' && str[x] <= 'Z')
		{
			str[x] += 32;
		}
		x++;
	}
	return (str);
}

int main()
{
	int	x;
	ft_strlowcase(x);
	printf("%s\n", x);
	return (0);
}
