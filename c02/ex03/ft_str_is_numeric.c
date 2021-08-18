/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <rfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:29:38 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/17 18:39:48 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (str[0] != '\0')
	{
		if(!((str[0] >= '0' && str[0] <= '9')))
			return (0);
		str++;
	}
	return (1);
}

int main()
{
	char	str[] = "63453";
	char	str1[] = "sbd34hvysd";
	int	x;
	int	y;

	x = ft_str_is_numeric(str);
	y = ft_str_is_numeric(str1);
	printf("LOL %i\n", x);
	printf("LOL %i\n", y);
}
