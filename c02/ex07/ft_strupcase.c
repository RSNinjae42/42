/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <rfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:26:34 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/17 19:45:50 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while(str[x] != '\0')
	{
		if(str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] -= 32;
		}
		x++;
	}
	return (str);
}

int main()
{
	char	x;
	
	x = "Todo mayuscuas";
	ft_strupcase(x);
	printf("%s\n", x);
	return (0);
}