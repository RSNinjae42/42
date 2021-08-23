/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <rfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:40:18 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/17 19:21:18 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (str[0] != '\0')
	{
		if(!((str[0] >= 'a' && str[0] <= 'z')))
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

	x = ft_str_is_lowercase(str);
	y = ft_str_is_lowercase(str1);
	printf("LOL %i\n", x);
	printf("LOL %i\n", y);
}
