/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_str_is_uppercase.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <rfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:20:23 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/17 19:21:48 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (str[0] != '\0')
	{
		if(!((str[0] >= 'A' && str[0] <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}

int main()
{
	char	str[] = "ABSGDJ";
	char	str1[] = "sbd34hvysd";
	int	x;
	int	y;

	x = ft_str_is_uppercase(str);
	y = ft_str_is_uppercase(str1);
	printf("LOL %i\n", x);
	printf("LOL %i\n", y);
}
