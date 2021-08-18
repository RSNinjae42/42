/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <rfuentes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:24:54 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/17 19:25:57 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (str[0] != '\0')
	{
		if(!((str[0] >= 32 && str[0] <= 126)))
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

	x = ft_str_is_printable(str);
	y = ft_str_is_printable(str1);
	printf("LOL %i\n", x);
	printf("LOL %i\n", y);
}
