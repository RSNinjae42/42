/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfuentes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:57:21 by rfuentes          #+#    #+#             */
/*   Updated: 2021/08/18 18:45:15 by rfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (str[0] != '\0')
	{
		if (!((str[0] >= 'A' && str[0] <= 'Z')
				||	(str[0] >= 'a' && str[0] <= 'z')))
			return (0);
		str++;
	}
	return (1);
}

int main()
{
	char	str[] = "arribaes53";
	char	str1[] = "sbdhvysd";
	int	x;
	int	y;

	x = ft_str_is_alpha(str);
	y = ft_str_is_alpha(str1);
	printf("LOL %i\n", str, x);
	printf("LOL %i\n", y);
}
